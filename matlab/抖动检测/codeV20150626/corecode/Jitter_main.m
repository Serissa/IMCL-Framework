function [ VideoInf ] = Jitter_main(aviVideo, Mrow, Mcol, EstShift, Thr, SearScop, xNum, yNum)
%%
[frameLen,SearScop] = getInit( aviVideo,SearScop ); % 根据搜索长度计算合适的帧采样数和搜索长度
startframe = 1+SearScop;
endframe = startframe+frameLen-1;
ImgInf = zeros(endframe-startframe+1,5);
%%
for fNo = startframe : endframe     
    curImg = read(aviVideo, fNo);
    curImg = preProcess(curImg, Mrow, Mcol);
    refNum = 0;
    for fCMP = fNo - 1 : -1 : fNo - SearScop   
        refImg = read(aviVideo, fCMP);       
        refImg = preProcess(refImg, Mrow, Mcol);         
        blockInf  = getBlockInf( curImg,refImg,Mrow, Mcol,xNum,yNum,EstShift); %计算图像块的偏移量，第一维是水平方向偏移量，第二维是垂直方向偏移量
        imageInf  = getImageInf( blockInf);  %根据块偏移量计算图像的抖动判断、方向、偏移量            
        if(imageInf(1) ~= 0)
            refNum = fCMP;
            break;
        end        
    end    
    ImgInf(fNo,:) = [imageInf,fNo,refNum];% 抖动判断、方向、偏移量、当前帧、参考帧  
end
VideoInf = judgeJitter(ImgInf,Thr);%根据图像信息计算视频的抖动判断、方向、频率、振幅
end


