//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NUBufferImage.h>

#import <NeutrinoCore/NUMutablePurgeableSurfaceImage-Protocol.h>
#import <NeutrinoCore/NUMutableSurfaceImage-Protocol.h>
#import <NeutrinoCore/NUPurgeableSurfaceImage-Protocol.h>
#import <NeutrinoCore/NUSurfaceImage-Protocol.h>

@interface _NUSurfaceImage : _NUBufferImage <NUSurfaceImage, NUMutableSurfaceImage, NUPurgeableSurfaceImage, NUMutablePurgeableSurfaceImage>
{
}

- (BOOL)copyBufferStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (BOOL)copySurfaceStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id)arg4;
- (void)writeTextureRegion:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)readTextureRegion:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)writeSurfaceRegion:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)readSurfaceRegion:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;

@end

