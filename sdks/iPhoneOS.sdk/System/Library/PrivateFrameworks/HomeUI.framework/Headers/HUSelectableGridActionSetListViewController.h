//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridActionSetListViewController.h>

@class HFMutableSetDiff;
@protocol HUSelectableGridActionSetListViewControllerDelegate;

@interface HUSelectableGridActionSetListViewController : HUGridActionSetListViewController
{
    id <HUSelectableGridActionSetListViewControllerDelegate> _delegate;
    HFMutableSetDiff *_mutableSelectedActionSets;
}

@property(retain, nonatomic) HFMutableSetDiff *mutableSelectedActionSets; // @synthesize mutableSelectedActionSets=_mutableSelectedActionSets;
@property(nonatomic) __weak id <HUSelectableGridActionSetListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateSelectionState:(BOOL)arg1 forCell:(id)arg2;
- (void)_selectedItemStateChanged:(id)arg1 isSelected:(BOOL)arg2 accessoryViewCell:(id)arg3;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)selectedActionSetStateChanged:(id)arg1 isSelected:(BOOL)arg2;
- (id)initWithRoom:(id)arg1 selectedActionSets:(id)arg2;
- (id)init;

@end

