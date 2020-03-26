//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLSimResource.h>

#import <MTLSimDriver/MTLBufferSPI-Protocol.h>
#import <MTLSimDriver/MTLSerializerBuffer-Protocol.h>
#import <MTLSimDriver/MTLSerializerResource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLSimBuffer : MTLSimResource <MTLSerializerBuffer, MTLSerializerResource, MTLBufferSPI>
{
    unsigned int _bufferRef;
    void _content;
    void _pointer;
    id /* CDUnknownBlockType */ _deallocator;
    NSUInteger _length;
    struct __IOSurface _iosurface;
}

@property(readonly) struct __IOSurface iosurface; // @synthesize iosurface=_iosurface;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 bytesPerImage:(NSUInteger)arg4;
- (void)removeAllDebugMarkers;
- (void)didModifyRange:(_NSRange)arg1;
- (void )contents;
- (void)addDebugMarker:(id)arg1 range:(_NSRange)arg2;
- (id)newTextureWithDescriptor:(id)arg1 offset:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3;
- (id)newRemoteBufferViewForDevice:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(NSUInteger)arg1;
@property(readonly) unsigned int bufferRef;
@property(readonly) NSUInteger length; // @dynamic length;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 bufferRef:(unsigned int)arg2 content:(void )arg3 pointer:(void )arg4 length:(NSUInteger)arg5 options:(NSUInteger)arg6 heap:(id)arg7 deallocator:(id /* CDUnknownBlockType */)arg8;

@end

