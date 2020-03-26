//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class VUICollectionView, VUILibraryMenuItemViewCell, VUIMenuDataSource, VUIMenuSectionHeaderCollectionViewCell;
@protocol VUICategoryMenuViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUICategoryMenuViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _shouldShowBackButton;
    id <VUICategoryMenuViewControllerDelegate> _delegate;
    VUIMenuDataSource *_categories;
    VUICollectionView *_menuCollectionView;
    VUILibraryMenuItemViewCell *_sizingCell;
    VUIMenuSectionHeaderCollectionViewCell *_sectionHeaderSizingCell;
}

@property(retain, nonatomic) VUIMenuSectionHeaderCollectionViewCell *sectionHeaderSizingCell; // @synthesize sectionHeaderSizingCell=_sectionHeaderSizingCell;
@property(retain, nonatomic) VUILibraryMenuItemViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) VUICollectionView *menuCollectionView; // @synthesize menuCollectionView=_menuCollectionView;
@property(retain, nonatomic) VUIMenuDataSource *categories; // @synthesize categories=_categories;
@property(nonatomic) BOOL shouldShowBackButton; // @synthesize shouldShowBackButton=_shouldShowBackButton;
@property(nonatomic) __weak id <VUICategoryMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_backSelected:(id)arg1;
- (void)_updateCollectionLayout;
- (void)_updateNavigationBarPadding;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)updateWithCategories:(id)arg1 updateEntitiesIfNecessaryBlock:(id /* CDUnknownBlockType */)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithCategories:(id)arg1;

@end

