//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMediaProvider.h>

#import <PhotosUICore/PXUIImageProvider-Protocol.h>

@interface PXUIMediaProvider : PXMediaProvider <PXUIImageProvider>
{
}

- (long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* CDUnknownBlockType */)arg5;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* CDUnknownBlockType */)arg5;

@end

