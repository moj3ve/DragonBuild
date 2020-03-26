//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLComputeCommandEncoder, MTLRenderCommandEncoder, MTLTexture;

@interface PKMetalRenderState : NSObject
{
    NSMutableArray *_commandBuffers;
    BOOL _liveRendering;
    BOOL _waitUntilCompletedOnCommit;
    BOOL _msaaRendering;
    BOOL _renderOnPaper;
    BOOL _needRenderMask;
    id <MTLCommandQueue> _commandQueue;
    id <MTLCommandBuffer> _commandBuffer;
    id <MTLCommandBuffer> _computeCommandBuffer;
    id <MTLCommandBuffer> _maskCommandBuffer;
    id <MTLRenderCommandEncoder> _renderEncoder;
    id <MTLComputeCommandEncoder> _computeEncoder;
    id <MTLRenderCommandEncoder> _maskRenderEncoder;
    NSUInteger _vertexEncodeCount;
    id <MTLTexture> _destinationTexture;
    NSUInteger _destinationColorAttachmentIndex;
    CDStruct_5f3a0cd7 _scissorRect;
}

+ (void)renderTargetBarrierForRenderEncoder:(id)arg1;
@property(nonatomic) CDStruct_5f3a0cd7 scissorRect; // @synthesize scissorRect=_scissorRect;
@property(nonatomic) BOOL needRenderMask; // @synthesize needRenderMask=_needRenderMask;
@property(nonatomic) BOOL renderOnPaper; // @synthesize renderOnPaper=_renderOnPaper;
@property(nonatomic) BOOL msaaRendering; // @synthesize msaaRendering=_msaaRendering;
@property(nonatomic) BOOL waitUntilCompletedOnCommit; // @synthesize waitUntilCompletedOnCommit=_waitUntilCompletedOnCommit;
@property(nonatomic) BOOL liveRendering; // @synthesize liveRendering=_liveRendering;
@property(nonatomic) NSUInteger destinationColorAttachmentIndex; // @synthesize destinationColorAttachmentIndex=_destinationColorAttachmentIndex;
@property(retain, nonatomic) id <MTLTexture> destinationTexture; // @synthesize destinationTexture=_destinationTexture;
@property(nonatomic) NSUInteger vertexEncodeCount; // @synthesize vertexEncodeCount=_vertexEncodeCount;
@property(retain, nonatomic) id <MTLRenderCommandEncoder> maskRenderEncoder; // @synthesize maskRenderEncoder=_maskRenderEncoder;
@property(retain, nonatomic) id <MTLComputeCommandEncoder> computeEncoder; // @synthesize computeEncoder=_computeEncoder;
@property(retain, nonatomic) id <MTLRenderCommandEncoder> renderEncoder; // @synthesize renderEncoder=_renderEncoder;
@property(readonly, nonatomic) id <MTLCommandBuffer> maskCommandBuffer; // @synthesize maskCommandBuffer=_maskCommandBuffer;
@property(readonly, nonatomic) id <MTLCommandBuffer> computeCommandBuffer; // @synthesize computeCommandBuffer=_computeCommandBuffer;
@property(readonly, nonatomic) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
// - (void).cxx_destruct;
- (void)renderTargetBarrier;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)addCommandBuffer:(id)arg1;
- (void)cancel;
- (void)commitAndPurgeResourceSet:(id)arg1;
- (void)commitMaskCommandBuffer;
- (void)commit;
- (id)maskCommandBufferCreateIfNecessary;
- (id)computeCommandBufferCreateIfNecessary;
- (id)commandBufferCreateIfNecessary;
- (void)dealloc;
- (id)initWithCommandQueue:(id)arg1 liveRendering:(BOOL)arg2;

@end

