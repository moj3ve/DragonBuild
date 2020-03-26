//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <PassKitUI/PKDashboardLayout-Protocol.h>

@class NSIndexPath;

@interface PKTransactionHistoryLayout : UICollectionViewFlowLayout <PKDashboardLayout>
{
    NSIndexPath *_headerIndexPath;
    BOOL _needsCustomLocation;
    BOOL _useStickyHeader;
    BOOL _useCompactInsetForTitle;
}

@property(nonatomic) BOOL useCompactInsetForTitle; // @synthesize useCompactInsetForTitle=_useCompactInsetForTitle;
@property(nonatomic) BOOL useStickyHeader; // @synthesize useStickyHeader=_useStickyHeader;
// - (void).cxx_destruct;
- (BOOL)_indexPathIsHeaderIndexPath:(id)arg1;
- (id)_customAttributesForStickyHeader:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (UIEdgeInsets)insetsForSection:(long long)arg1;
- (id)init;

@end

