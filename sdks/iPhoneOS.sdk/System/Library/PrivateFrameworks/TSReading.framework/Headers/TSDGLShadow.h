//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDGLShadow : NSObject
{
}

+ (id)sharedContext;
+ (id)renderQueue;
- (void)createOffscreenRenderBuffer:(CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(BOOL)arg3 colorRenderBuffer:(unsigned int )arg4 depthRenderBuffer:(unsigned int )arg5;
- (CGImage )newCGImageFromGLBuffer:(char )arg1;
- (void)setupGLTextureParameters;

@end

