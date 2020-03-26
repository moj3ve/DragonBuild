//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, NSMutableArray;
@protocol ICDocCamThumbnailViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailCollectionViewLayout : UICollectionViewLayout
{
    BOOL _transitioning;
    BOOL _compactLayout;
    id <ICDocCamThumbnailViewLayoutDelegate> _delegate;
    NSDictionary *_layoutInfo;
    NSMutableArray *_deleteIndexPaths;
    NSMutableArray *_insertIndexPaths;
    CGSize _itemSize;
}

@property(retain, nonatomic) NSMutableArray *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(retain, nonatomic) NSMutableArray *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(retain, nonatomic) NSDictionary *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) BOOL compactLayout; // @synthesize compactLayout=_compactLayout;
@property(nonatomic) BOOL transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) __weak id <ICDocCamThumbnailViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CGSize itemSize; // @synthesize itemSize=_itemSize;
// - (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGRect)frameForThumbnailAtIndexPath:(id)arg1;
- (CGRect)compactFrameForThumbnailAtIndexPath:(id)arg1 withSize:(CGSize)arg2;
- (CGSize)frameSizeForImageSize:(CGSize)arg1;
- (void)finalizeLayoutTransition;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(CGRect)arg1;
- (void)prepareLayout:(BOOL)arg1;
- (void)prepareLayout;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

