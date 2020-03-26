//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsResource.h>

#import <MetalTools/MTLTextureImplementation-Protocol.h>

@class MTLToolsPointerArray;
@protocol MTLBuffer, MTLResource, MTLTexture;

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation>
{
    MTLToolsPointerArray *_views;
    id <MTLTexture> _parentTexture;
    id <MTLBuffer> _buffer;
}

@property(readonly) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property(readonly) id <MTLTexture> parentTexture; // @synthesize parentTexture=_parentTexture;
@property(readonly, nonatomic) MTLToolsPointerArray *views; // @synthesize views=_views;
@property(readonly) NSUInteger uniqueIdentifier;
@property(readonly) BOOL isDrawable;
@property(readonly) NSUInteger numFaces;
@property(readonly) NSUInteger iosurfacePlane;
@property(readonly) struct __IOSurface iosurface;
@property(readonly) NSUInteger rotation;
- (void)generateMipmapLevel:(NSUInteger)arg1 slice:(NSUInteger)arg2;
- (BOOL)canGenerateMipmapLevels;
- (id)newCompressedTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 level:(NSUInteger)arg3 slice:(NSUInteger)arg4;
- (id)newTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(_NSRange)arg3 slices:(_NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;
- (id)newTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(_NSRange)arg3 slices:(_NSRange)arg4;
- (id)newTextureViewWithPixelFormat:(NSUInteger)arg1;
- (void)getBytes:(void )arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(NSUInteger)arg5 slice:(NSUInteger)arg6 options:(NSUInteger)arg7;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 withBytes:(const void )arg4 bytesPerRow:(NSUInteger)arg5 bytesPerImage:(NSUInteger)arg6 options:(NSUInteger)arg7;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 withBytes:(const void )arg4 bytesPerRow:(NSUInteger)arg5 bytesPerImage:(NSUInteger)arg6;
- (void)getBytes:(void )arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(NSUInteger)arg5 slice:(NSUInteger)arg6;
@property(readonly) BOOL allowGPUOptimizedContents;
@property(readonly) NSUInteger tailSizeInBytes;
- (NSUInteger)tailSize;
@property(readonly) NSUInteger firstMipmapInTail;
@property(readonly) NSUInteger sparseSurfaceDefaultValue;
@property(readonly, getter=isFramebufferOnly) BOOL framebufferOnly;
@property(readonly) BOOL isSparse;
@property(readonly) NSUInteger arrayLength;
@property(readonly) NSUInteger sampleCount;
@property(readonly) NSUInteger mipmapLevelCount;
@property(readonly) NSUInteger depth;
@property(readonly) NSUInteger height;
@property(readonly) NSUInteger width;
@property(readonly) NSUInteger usage;
@property(readonly) NSUInteger pixelFormat;
@property(readonly) NSUInteger textureType;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(NSUInteger)arg2 withBytes:(const void )arg3 bytesPerRow:(NSUInteger)arg4;
- (void)getBytes:(void )arg1 bytesPerRow:(NSUInteger)arg2 fromRegion:(CDStruct_1e3be3a8)arg3 mipmapLevel:(NSUInteger)arg4;
- (void)copyFromPixels:(const void )arg1 rowBytes:(NSUInteger)arg2 imageBytes:(NSUInteger)arg3 toSlice:(NSUInteger)arg4 mipmapLevel:(NSUInteger)arg5 origin:(CDStruct_14f26992)arg6 size:(CDStruct_14f26992)arg7;
- (void)copyFromSlice:(NSUInteger)arg1 mipmapLevel:(NSUInteger)arg2 origin:(CDStruct_14f26992)arg3 size:(CDStruct_14f26992)arg4 toPixels:(void )arg5 rowBytes:(NSUInteger)arg6 imageBytes:(NSUInteger)arg7;
@property(readonly) long long compressionFeedback;
@property(readonly) BOOL isCompressed;
@property(nonatomic) NSUInteger resourceIndex;
@property(readonly) unsigned int swizzleKey;
@property(readonly, nonatomic) CDStruct_a06f635e swizzle;
@property(readonly) NSUInteger bufferBytesPerRow;
@property(readonly) NSUInteger bufferOffset;
@property(readonly) NSUInteger parentRelativeSlice;
@property(readonly) NSUInteger parentRelativeLevel;
@property(readonly) id <MTLResource> rootResource;
- (id)realRootResource;
- (void)acceptVisitor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 buffer:(id)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 parentTexture:(id)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)formattedDescription:(NSUInteger)arg1;
- (void)dealloc;

@end

