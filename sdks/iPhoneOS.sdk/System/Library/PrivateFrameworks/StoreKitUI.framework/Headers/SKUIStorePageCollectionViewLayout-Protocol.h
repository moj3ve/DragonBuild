//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSIndexPath, NSString, UICollectionViewLayoutAttributes;

@protocol SKUIStorePageCollectionViewLayout <NSObject>
@property(nonatomic) BOOL rendersWithPerspective;
@property(nonatomic) BOOL rendersWithParallax;
@property(copy, nonatomic) NSArray *indexPathsForGradientItems;
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
@property(copy, nonatomic) NSString *backdropGroupName;
- (NSArray *)pinnedLayoutAttributesForItemsInRect:(CGRect)arg1;
- (UICollectionViewLayoutAttributes *)layoutAttributesForUnpinnedItemAtIndexPath:(NSIndexPath *)arg1;
@end

