//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedLayoutSearchConfiguration-Protocol.h>

@class NSArray;

@interface NFLSingleAggregateTileFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration>
{
    BOOL _showAccessoryText;
    Class _subBatchLayoutTilingOperationClass;
    Class _rankedLayoutGenerationOperationClass;
    long long _cellType;
    long long _rowSpan;
}

@property(nonatomic) long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) Class rankedLayoutGenerationOperationClass; // @synthesize rankedLayoutGenerationOperationClass=_rankedLayoutGenerationOperationClass;
@property(retain, nonatomic) Class subBatchLayoutTilingOperationClass; // @synthesize subBatchLayoutTilingOperationClass=_subBatchLayoutTilingOperationClass;
@property(nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText; // @synthesize showAccessoryText=_showAccessoryText;
// - (void).cxx_destruct;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (double)transitionRankFromRowTypeToNone:(NSUInteger)arg1;
- (double)transitionRankFromRowType:(NSUInteger)arg1 toRowType:(NSUInteger)arg2;
- (id)nextRowTypeCandidatesForRowType:(NSUInteger)arg1;
- (double)transitionRankFromNoneToRowType:(NSUInteger)arg1;
- (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(NSUInteger)arg1 withTileInfos:(id)arg2;
- (Class)subBatchLayoutTilingOperationClassForRowType:(NSUInteger)arg1;
- (NSUInteger)numberOfTileInfosUsedByRowType:(NSUInteger)arg1;
- (id)descriptionForRowType:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *allRowTypes;
@property(readonly, nonatomic) NSUInteger preferredTileInfoBatchSize;
- (BOOL)supportsTileInfoType:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSubBatchLayoutTilingOperationClass:(Class)arg1 rankedLayoutGenerationOperationClass:(Class)arg2 cellType:(long long)arg3 rowSpan:(long long)arg4;
- (id)init;

@end

