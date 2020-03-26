//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class PMLMutableDenseVector, PMLSparseMatrix, PMLSparseVector;

@protocol PMLNoiseStrategy <NSObject, PMLPlistAndChunksSerializableProtocol>
- (BOOL)scaleAndAddNoiseToDenseVector:(PMLMutableDenseVector *)arg1 usingNorm:(BOOL)arg2 scaleFactor:(float )arg3;
- (void)addNoiseToSparseMatrix:(PMLSparseMatrix *)arg1;
- (void)addNoiseToSparseVector:(PMLSparseVector *)arg1;
@end

