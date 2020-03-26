//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGHighlightItemEnrichmentRule-Protocol.h>

@class PGManager;

@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>
{
    PGManager *_manager;
}

@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
// - (void).cxx_destruct;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (double)promotionScoreForHighlightItemList:(id)arg1;
- (id)initWithManager:(id)arg1;

@end

