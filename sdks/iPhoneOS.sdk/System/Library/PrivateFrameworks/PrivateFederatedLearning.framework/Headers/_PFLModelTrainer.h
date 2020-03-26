//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ETModelDefMLP, ETTaskClassifier;

@interface _PFLModelTrainer : NSObject
{
    ETTaskClassifier *_task;
    ETModelDefMLP *_mlp;
    NSUInteger _imageCount;
}

+ (NSUInteger)countSubDirectoryInDirectory:(id)arg1;
+ (NSUInteger)countFilesInDirectory:(id)arg1;
@property NSUInteger imageCount; // @synthesize imageCount=_imageCount;
@property(retain) ETModelDefMLP *mlp; // @synthesize mlp=_mlp;
@property(retain) ETTaskClassifier *task; // @synthesize task=_task;
// - (void).cxx_destruct;
- (void)updateLayerNamed:(id)arg1 withWeights:(float )arg2 weightCount:(NSUInteger)arg3 andBiases:(float )arg4 biasCount:(NSUInteger)arg5;
- (BOOL)copyWeightsAndBiasesForLayerNamed:(id)arg1 combinedWeightBiasesOut:(float )arg2 weightCountOut:(NSUInteger )arg3 biasCountOut:(NSUInteger )arg4;
- (id)sdpWithInitVector:(id)arg1 currentVector:(id)arg2 gamma:(double)arg3 nu:(double)arg4;
- (id)sdpWithInitWeights:(id)arg1 currentWeights:(id)arg2 initBiases:(id)arg3 currentBiases:(id)arg4 diffOnly:(BOOL)arg5 gamma:(double)arg6 nu:(double)arg7;
- (void)trainNumberModel:(id)arg1 epoch:(NSUInteger)arg2 dataSource:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)trainImageModel:(id)arg1 epoch:(NSUInteger)arg2 imageDirectory:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end

