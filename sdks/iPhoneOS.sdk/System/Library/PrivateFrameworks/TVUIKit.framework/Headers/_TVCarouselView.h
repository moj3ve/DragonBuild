//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class CADisplayLink, NSArray, NSDate, NSDictionary, NSIndexPath, NSObject, UIFocusGuide, _TVCarouselCollectionView;
@protocol OS_dispatch_source, TVCarouselViewDataSource, TVCarouselViewDelegate;

@interface _TVCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    struct {
        unsigned int delegateWasNonNil:1;
        unsigned int delegateShouldHighlightItemAtIndex:1;
        unsigned int delegateDidHighlightItemAtIndex:1;
        unsigned int delegateDidUnhighlightItemAtIndex:1;
        unsigned int delegateShouldSelectItemAtIndex:1;
        unsigned int delegateShouldDeselectItemAtIndex:1;
        unsigned int delegateDidSelectItemAtIndex:1;
        unsigned int delegateDidDeselectItemAtIndex:1;
        unsigned int delegateWillDisplayCellForItemAtIndex:1;
        unsigned int delegateDidEndDisplayingCellForItemAtIndex:1;
        unsigned int delegateCarouselViewDidScroll:1;
        unsigned int delegateDidFocusItemAtIndex:1;
        unsigned int delegateDidPlayItemAtIndex:1;
        unsigned int delegateWillDisplayItemAtIndex:1;
        unsigned int delegateDidEndDisplayingItemAtIndex:1;
    } _carouselViewFlags;
    NSObject<OS_dispatch_source> *_autoScrollTimer;
    _TVCarouselCollectionView *_collectionView;
    NSUInteger _indexToDeque;
    NSIndexPath *_focusedIndexPath;
    NSUInteger _numberOfRealItemsForDataSource;
    double _originalSelectionDuration;
    double _originalUnselectionDuration;
    long long _numFocusChangesInInterval;
    NSDictionary *_previousCollectionToDatasourceIndexMap;
    struct {
        BOOL layoutUpdateInProgress;
        BOOL firstLayoutPass;
    } _flags;
    BOOL _shouldScaleOnIdleFocus;
    id <TVCarouselViewDataSource> _dataSource;
    id <TVCarouselViewDelegate> _delegate;
    double _interitemSpacing;
    NSUInteger _scrollMode;
    double _autoscrollInterval;
    double _unitScrollDuration;
    UIView *_headerView;
    double _showcaseFactor;
    NSDictionary *_collectionToDatasourceIndexMap;
    UIFocusGuide *_focusGuide;
    CADisplayLink *_displayLink;
    double _previousDisplayLinkTimestamp;
    double _offsetChangePerSecond;
    NSDate *_firstFocusChangeInInterval;
    double _focusThrottleTimeInterval;
    CGSize _itemSize;
    CGPoint _focusDirection;
    CGPoint _targetContentOffset;
}

@property(nonatomic) double focusThrottleTimeInterval; // @synthesize focusThrottleTimeInterval=_focusThrottleTimeInterval;
@property(retain, nonatomic) NSDate *firstFocusChangeInInterval; // @synthesize firstFocusChangeInInterval=_firstFocusChangeInInterval;
@property(nonatomic) double offsetChangePerSecond; // @synthesize offsetChangePerSecond=_offsetChangePerSecond;
@property(nonatomic) CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) double previousDisplayLinkTimestamp; // @synthesize previousDisplayLinkTimestamp=_previousDisplayLinkTimestamp;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIFocusGuide *focusGuide; // @synthesize focusGuide=_focusGuide;
@property(retain, nonatomic) NSDictionary *collectionToDatasourceIndexMap; // @synthesize collectionToDatasourceIndexMap=_collectionToDatasourceIndexMap;
@property(nonatomic) BOOL shouldScaleOnIdleFocus; // @synthesize shouldScaleOnIdleFocus=_shouldScaleOnIdleFocus;
@property(nonatomic) double showcaseFactor; // @synthesize showcaseFactor=_showcaseFactor;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property(nonatomic) double unitScrollDuration; // @synthesize unitScrollDuration=_unitScrollDuration;
@property(nonatomic) double autoscrollInterval; // @synthesize autoscrollInterval=_autoscrollInterval;
@property(nonatomic) NSUInteger scrollMode; // @synthesize scrollMode=_scrollMode;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) __weak id <TVCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TVCarouselViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (double)_centeringAnimationDuration;
- (CGSize)_collectionViewLayoutItemSize;
- (NSUInteger)_itemIndexForIndexPath:(id)arg1;
- (NSUInteger)_previousItemIndexForIndexPath:(id)arg1;
- (void)_updateIdleModeLayoutAttributes;
- (void)_stopAutoScrollTimer;
- (void)_startAutoScrollTimer;
- (void)_updateAutoScrollTimer;
- (BOOL)_canScrollCarouselView;
- (void)_animatePagedCenteringAnimated:(BOOL)arg1 animations:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_updateCollectionViewLayoutAnimated:(BOOL)arg1;
- (void)_updateCollectionViewLayout;
- (double)_contentOffsetXForCollectionViewIndex:(long long)arg1;
- (id)_prepareIndexMap:(long long)arg1;
- (void)_updateCarouselWithDataSource:(id)arg1 indicesToRemove:(id)arg2 indicesToAdd:(id)arg3 indicesToReload:(id)arg4;
- (void)_setContentOffsetForCollectionViewIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_setContentOffsetForCollectionViewIndex:(long long)arg1;
- (void)_focusItemAtIndex:(long long)arg1;
- (void)calculateChangeSetForFocusedIndex:(long long)arg1 newDataSourceMap:(id)arg2 indexesToRemove:(inout id )arg3 indexesToAdd:(inout id )arg4 indexesToReload:(inout id )arg5;
- (long long)_numberOfCells;
- (long long)_centerCollectionViewCellIndex;
- (void)_updateContentForNewCenterIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *visibleCells;
- (void)setInteritemSpacing:(double)arg1 animated:(BOOL)arg2;
- (void)reloadData;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (NSUInteger)indexForCell:(id)arg1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(NSUInteger)arg2;
- (id)focusedCell;
- (id)_cellForItemAtIndex:(NSUInteger)arg1;
- (void)_handlePlayGesture:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)preferredFocusedView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)didMoveToWindow;
- (id)_collectionView;
- (void)dealloc;
- (void)_stopContinuousScroll;
- (void)displayLinkDidFire:(id)arg1;
- (void)_startContinuousScroll;
- (void)layoutSubviews;
- (void)tv_setShowcaseFactor:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

