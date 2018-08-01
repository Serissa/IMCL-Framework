function [A, b, params, iterative] = flow_operator(this, uv, duv, It, Ix, Iy)
%FLOW_OPERATOR   Linear flow operator (equation) for flow estimation
%   [A, b] = FLOW_OPERATOR(THIS, UV, INIT)
%   returns a linear flow operator (equation) of the form A * x = b.  The
%   flow equation is linearized around UV with the initialization INIT
%   (e.g. from a previous pyramid level).
sz        = [size(Ix,1) size(Ix,2)];
npixels   = prod(sz); % 返回行或列的乘积

% Spatial term
S = this.spatial_filters;

FU = sparse(npixels, npixels);
FV = sparse(npixels, npixels);
for i = 1:length(S)
    
    FMi = make_convn_mat(S{i}, sz, 'valid', 'sameswap'); %计算卷积积分矩阵
    Fi  = FMi';
    
    u_        = FMi * reshape(uv(:, :, 1)+duv(:, :, 1), [npixels 1]);
    v_        = FMi * reshape(uv(:, :, 2)+duv(:, :, 2), [npixels 1]);
    
    pp_su     = deriv_over_x(this.rho_spatial_u{i}, u_);
    pp_sv     = deriv_over_x(this.rho_spatial_v{i}, v_);
    
    
    FU        = FU + Fi * spdiags(pp_su, 0, npixels, npixels) * FMi;
    FV        = FV + Fi * spdiags(pp_sv, 0, npixels, npixels) * FMi;
    
end;

M = [-FU, sparse(npixels, npixels);
    sparse(npixels, npixels), -FV];

% Data term
Ix2 = Ix.^2;
Iy2 = Iy.^2;
Ixy = Ix.*Iy;
Itx = It.*Ix;
Ity = It.*Iy;

% Perform linearization - note the change in It
It = It + Ix.*repmat(duv(:,:,1), [1 1 size(It,3)]) ...
    + Iy.*repmat(duv(:,:,2), [1 1 size(It,3)]);

pp_d  = deriv_over_x(this.rho_data, It(:));

% modified 2009-3-23 by dqsun to process color images correctly
%     average over the three color channels
tmp = mean(reshape(pp_d, size(Ix2)).*Ix2, 3);
duu = spdiags(tmp(:), 0, npixels, npixels);
tmp = mean(reshape(pp_d, size(Iy2)).*Iy2, 3);
dvv = spdiags(tmp(:), 0, npixels, npixels);
tmp = mean(reshape(pp_d, size(Ixy)).*Ixy, 3);
dduv = spdiags(tmp(:), 0, npixels, npixels);

A = [duu dduv; dduv dvv] - this.lambda*M;

% Right hand side
tmp1 = mean(reshape(pp_d, size(Itx)).*Itx, 3);
tmp2 = mean(reshape(pp_d, size(Ity)).*Ity, 3);
b =  this.lambda * M * uv(:) - [tmp1(:); tmp2(:)];

% No auxiliary parameters
params    = [];

% If the non-linear weights are non-uniform, do more linearization
if (max(pp_su(:)) - min(pp_su(:)) < 1E-6 && ...
        max(pp_sv(:)) - min(pp_sv(:)) < 1E-6 && ...
        max(pp_d(:)) - min(pp_d(:)) < 1E-6)
    iterative = false;
else
    iterative = true;
end