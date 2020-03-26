//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSCH3DSceneRenderPipeline;

__attribute__((visibility("hidden")))
@interface TSCH3DChartLabelsContainingLabelRenderInfo : NSObject
{
    unsigned int _alignment;
    float _rotation;
    float _wrapWidth;
    TSCH3DSceneRenderPipeline *_pipeline;
    tvec2_3b141483 _index;
    NSString *_renderString;
    tvec2_84d5962d _offset2D;
    tvec2_3b141483 _resourceIndex;
    tvec2_84d5962d _alignmentPadding;
    tvec3_17f03ce0 _position;
    tvec3_17f03ce0 _offset;
}

+ (id)infoWithPipeline:(id)arg1 index:(tvec2_3b141483)arg2 resourceIndex:(tvec2_3b141483)arg3 renderString:(id)arg4 position:(tvec3_17f03ce0)arg5 offset:(tvec3_17f03ce0)arg6 alignment:(unsigned int)arg7 wrapWidth:(float)arg8 offset2D:(tvec2_84d5962d)arg9 rotation:(float)arg10 alignmentPadding:(tvec2_84d5962d)arg11;
@property(readonly, nonatomic) tvec2_84d5962d alignmentPadding; // @synthesize alignmentPadding=_alignmentPadding;
@property(readonly, nonatomic) float wrapWidth; // @synthesize wrapWidth=_wrapWidth;
@property(readonly, nonatomic) tvec2_3b141483 resourceIndex; // @synthesize resourceIndex=_resourceIndex;
@property(readonly, nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) tvec2_84d5962d offset2D; // @synthesize offset2D=_offset2D;
@property(readonly, nonatomic) unsigned int alignment; // @synthesize alignment=_alignment;
@property(readonly, nonatomic) tvec3_17f03ce0 offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) tvec3_17f03ce0 position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *renderString; // @synthesize renderString=_renderString;
@property(readonly, nonatomic) tvec2_3b141483 index; // @synthesize index=_index;
@property(readonly, retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline; // @synthesize pipeline=_pipeline;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithPipeline:(id)arg1 index:(tvec2_3b141483)arg2 resourceIndex:(tvec2_3b141483)arg3 renderString:(id)arg4 position:(tvec3_17f03ce0)arg5 offset:(tvec3_17f03ce0)arg6 alignment:(unsigned int)arg7 wrapWidth:(float)arg8 offset2D:(tvec2_84d5962d)arg9 rotation:(float)arg10 alignmentPadding:(tvec2_84d5962d)arg11;

@end

