//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@class NSObject, NUColorSpace, NUImageLayout, NUPixelFormat;
@protocol NUMutablePurgeableImage, OS_dispatch_queue;

@interface NUImageAccumulationNode : NURenderNode
{
    id <NUMutablePurgeableImage> _image;
    NSObject<OS_dispatch_queue> *_queue;
    NUPixelFormat *_pixelFormat;
    NUColorSpace *_colorSpace;
    NUImageLayout *_layout;
    CDStruct_d58201db _imageSize;
}

@property(readonly, nonatomic) NUImageLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, nonatomic) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) CDStruct_912cb5d2 imageSize; // @synthesize imageSize=_imageSize;
// - (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)_newImage;
- (id)_image;
@property(readonly, nonatomic) id <NUMutablePurgeableImage> image;
- (id)initWithImageSize:(CDStruct_912cb5d2)arg1 tileSize:(CDStruct_912cb5d2)arg2 borderSize:(CDStruct_912cb5d2)arg3 pixelFormat:(id)arg4 colorSpace:(id)arg5 input:(id)arg6;
- (id)initWithSettings:(id)arg1 inputs:(NSDictionary )arg2;

@end

