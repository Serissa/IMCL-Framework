function cnn_cifar_for_tid(varargin)
% CNN_CIFAR   Demonstrates MatConvNet on CIFAR

run(fullfile(fileparts(mfilename('fullpath')), '../matlab/vl_setupnn.m')) ;

opts.dataDir = 'data/tid' ;
opts.expDir = 'data/tid3232rgb-baseline' ;
opts.imdbPath = fullfile(opts.expDir, 'imdb-3232rgb.mat');
opts.train.batchSize = 200 ;
opts.train.numEpochs = 20 ;
opts.train.continue = true ;
opts.train.useGpu = false ;
opts.train.learningRate = [0.001*ones(1, 12) 0.0001*ones(1,6) 0.00001] ;
opts.train.expDir = opts.expDir ;
opts = vl_argparse(opts, varargin);

% --------------------------------------------------------------------
%                                                         Prepare data
% --------------------------------------------------------------------

if exist(opts.imdbPath)
    imdb = load(opts.imdbPath);
else
    imdb = getCifarImdb(opts);
    mkdir(opts.expDir) ;
    save(opts.imdbPath, '-struct', 'imdb') ;
end

% Define network CIFAR10-quick
net.layers = {} ;

% 1 conv1
net.layers{end+1} = struct('type', 'conv', ...
    'filters', 1e-4*randn(5,5,3,32, 'single'), ...
    'biases', zeros(1, 32, 'single'), ...
    'filtersLearningRate', 1, ...
    'biasesLearningRate', 2, ...
    'stride', 1, ...
    'pad', 2) ;

% 2 pool1 (max pool)
net.layers{end+1} = struct('type', 'pool', ...
    'method', 'max', ...
    'pool', [3 3], ...
    'stride', 2, ...
    'pad', [0 1 0 1]) ;

% 3 relu1
net.layers{end+1} = struct('type', 'relu') ;

% 4 conv2
net.layers{end+1} = struct('type', 'conv', ...
    'filters', 0.01*randn(5,5,32,32, 'single'),...
    'biases', zeros(1,32,'single'), ...
    'filtersLearningRate', 1, ...
    'biasesLearningRate', 2, ...
    'stride', 1, ...
    'pad', 2) ;

% 5 relu2
net.layers{end+1} = struct('type', 'relu') ;

% 6 pool2 (avg pool)
net.layers{end+1} = struct('type', 'pool', ...
    'method', 'avg', ...
    'pool', [3 3], ...
    'stride', 2, ...
    'pad', [0 1 0 1]) ; % Emulate caffe

% 7 conv3
net.layers{end+1} = struct('type', 'conv', ...
    'filters', 0.01*randn(5,5,32,64, 'single'),...
    'biases', zeros(1,64,'single'), ...
    'filtersLearningRate', 1, ...
    'biasesLearningRate', 2, ...
    'stride', 1, ...
    'pad', 2) ;

% 8 relu3
net.layers{end+1} = struct('type', 'relu') ;

% 9 pool3 (avg pool)
net.layers{end+1} = struct('type', 'pool', ...
    'method', 'avg', ...
    'pool', [3 3], ...
    'stride', 2, ...
    'pad', [0 1 0 1]) ; % Emulate caffe

% 10 ip1
net.layers{end+1} = struct('type', 'conv', ...
    'filters', 0.1*randn(4,4,64,64, 'single'),...
    'biases', zeros(1,64,'single'), ...
    'filtersLearningRate', 1, ...
    'biasesLearningRate', 2, ...
    'stride', 1, ...
    'pad', 0) ;

% 11 ip2
net.layers{end+1} = struct('type', 'conv', ...
    'filters', 0.1*randn(1,1,64,10, 'single'),...
    'biases', zeros(1,10,'single'), ...
    'filtersLearningRate', 1, ...
    'biasesLearningRate', 2, ...
    'stride', 1, ...
    'pad', 0) ;
% 12 loss
net.layers{end+1} = struct('type', 'softmaxloss') ;

% --------------------------------------------------------------------
%                                                                Train
% --------------------------------------------------------------------

averageImagePath = fullfile(opts.expDir, 'average.mat') ;
load(averageImagePath, 'averageImage') ;
net.normalization.averageImage = averageImage ;
clear averageImage im temp ;
fn = getBatchWrapper(net.normalization) ;


[net,info] = cnn_train(net, imdb, fn, opts.train, ...
                        'val', find(imdb.images.set == 3),...
                        'conserveMemory', true) ;

% -------------------------------------------------------------------------
function fn = getBatchWrapper(opts)
% -------------------------------------------------------------------------
fn = @(imdb,batch) getBatch(imdb,batch,opts) ;

% -------------------------------------------------------------------------
function [im,labels] = getBatch(imdb, batch, opts)
% -------------------------------------------------------------------------
images = strcat([imdb.imageDir '/'], imdb.images.name(batch)) ;
im = cnn_tid_get_batch(images, opts, ...     
                            'augmentation', 'f25') ;
labels = imdb.images.label(batch) ;
