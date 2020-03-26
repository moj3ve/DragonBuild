//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PXGMetalRenderPassState;
@protocol MTLBuffer, MTLDevice;

@interface PXGMetalRenderState : NSObject
{
    CDStruct_b1513b2e _uniforms;
    long long _shaderFlagsByEffectIdCount;
    long long _shaderFlagsByEffectIdCapacity;
    id <MTLDevice> _device;
    const CDStruct_9d1ebe49 _spriteInfos;
    const CDStruct_3ab912e1 _originalSpriteGeometries;
    int _shaderFlagsByEffectId;
    PXGMetalRenderPassState *_currentRenderPassState;
    NSArray *_textures;
    NSArray *_captureSpriteTextures;
    id <MTLBuffer> _spriteGeometriesBuffer;
    id <MTLBuffer> _spriteStylesBuffer;
    id <MTLBuffer> _resizableCapInsetsBuffer;
    id <MTLBuffer> _effectDataBuffer;
}

@property(readonly, nonatomic) id <MTLBuffer> effectDataBuffer; // @synthesize effectDataBuffer=_effectDataBuffer;
@property(readonly, nonatomic) id <MTLBuffer> resizableCapInsetsBuffer; // @synthesize resizableCapInsetsBuffer=_resizableCapInsetsBuffer;
@property(readonly, nonatomic) id <MTLBuffer> spriteStylesBuffer; // @synthesize spriteStylesBuffer=_spriteStylesBuffer;
@property(readonly, nonatomic) id <MTLBuffer> spriteGeometriesBuffer; // @synthesize spriteGeometriesBuffer=_spriteGeometriesBuffer;
@property(retain, nonatomic) NSArray *captureSpriteTextures; // @synthesize captureSpriteTextures=_captureSpriteTextures;
@property(retain, nonatomic) NSArray *textures; // @synthesize textures=_textures;
@property(readonly, nonatomic) PXGMetalRenderPassState *currentRenderPassState; // @synthesize currentRenderPassState=_currentRenderPassState;
@property(readonly, nonatomic) int shaderFlagsByEffectId; // @synthesize shaderFlagsByEffectId=_shaderFlagsByEffectId;
@property(nonatomic) const CDStruct_3ab912e1 originalSpriteGeometries; // @synthesize originalSpriteGeometries=_originalSpriteGeometries;
@property(nonatomic) const CDStruct_9d1ebe49 spriteInfos; // @synthesize spriteInfos=_spriteInfos;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)prepareForCommit;
@property(readonly, nonatomic) CDStruct_b1513b2e uniforms;
@property(readonly, nonatomic) const CDStruct_506f5052 spriteStyles;
@property(readonly, nonatomic) const CDStruct_869f9c67 spriteGeometries;
- (void)_setShaderFlagsByEffectId:(const int )arg1 withCount:(long long)arg2;
- (void)setEffectData:(const CDStruct_ee569e91 )arg1 shaderFlags:(const int )arg2 withCount:(long long)arg3;
- (CDStruct_ee569e91 )effectDataBufferWithCount:(long long)arg1;
- (CDStruct_0054b44d )resizableCapInsetsBufferWithCount:(long long)arg1;
- (id)renderPassStateForSpriteCount:(long long)arg1;
- (CDStruct_506f5052 )spriteStylesBufferWithCount:(long long)arg1;
- (CDStruct_869f9c67 )spriteGeometriesBufferWithCount:(long long)arg1;
- (id)_resizedBufferIfNeeded:(id)arg1 neededLength:(long long)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end

