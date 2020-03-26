//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIShelfViewController.h>

#import <VideosUI/TVShelfViewLayoutDelegate-Protocol.h>
#import <VideosUI/VUIDialogInteractionControllerDelegate-Protocol.h>
#import <VideosUI/VUIEpisodeDetailViewControllerDelegate-Protocol.h>
#import <VideosUI/VUILibraryDownloadPopoverViewControllerDelegate-Protocol.h>
#import <VideosUI/VUILocalContentProtocol-Protocol.h>

@class NSArray, NSIndexPath, VUIDialogInteractionController, VUIEpisodeDetailViewController, VUILibraryEpisodeListCell;
@protocol VUILibraryEpisodeShelfViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeShelfViewController : VUIShelfViewController <UICollectionViewDataSource, UICollectionViewDelegate, TVShelfViewLayoutDelegate, VUIEpisodeDetailViewControllerDelegate, VUIDialogInteractionControllerDelegate, VUILibraryDownloadPopoverViewControllerDelegate, VUILocalContentProtocol>
{
    VUILibraryEpisodeListCell *_sizingCell;
    VUIDialogInteractionController *_dialogInteractionController;
    BOOL _onlyShowLocalContent;
    BOOL _shouldIgnoreSelectEvent;
    id <VUILibraryEpisodeShelfViewControllerDelegate> _delegate;
    NSArray *_episodeViewModels;
    VUIEpisodeDetailViewController *_episodeDetailViewController;
    NSIndexPath *_popoverIndexPath;
}

@property(nonatomic) BOOL shouldIgnoreSelectEvent; // @synthesize shouldIgnoreSelectEvent=_shouldIgnoreSelectEvent;
@property(retain, nonatomic) NSIndexPath *popoverIndexPath; // @synthesize popoverIndexPath=_popoverIndexPath;
@property(retain, nonatomic) VUIEpisodeDetailViewController *episodeDetailViewController; // @synthesize episodeDetailViewController=_episodeDetailViewController;
@property(copy, nonatomic) NSArray *episodeViewModels; // @synthesize episodeViewModels=_episodeViewModels;
@property(nonatomic) __weak id <VUILibraryEpisodeShelfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL onlyShowLocalContent; // @synthesize onlyShowLocalContent=_onlyShowLocalContent;
// - (void).cxx_destruct;
- (void)_updateHeaderView;
- (BOOL)_canRemoveEpisodeAtIndexPath:(id)arg1;
- (void)_configureShelfLayout:(id)arg1;
- (id)_episodeWithIdentifier:(id)arg1;
- (id)_episodeViewModelsWithFetchedEpisodes:(id)arg1;
- (void)_updateViewWithFetchedEpisodes:(id)arg1 andChangeSet:(id)arg2;
- (void)dialogInteractionController:(id)arg1 interactionDidEndForIndexPath:(id)arg2;
- (void)dialogInteractionController:(id)arg1 interactionDidBeginForIndexPath:(id)arg2;
- (BOOL)dialogInteractionController:(id)arg1 shouldBeginInteractionForIndexPath:(id)arg2;
- (void)removeDownloadDismissed;
- (void)removeDownloadPressed;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)episodeDetailViewControllerWasDismissed:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updateShelfLayout:(id)arg1;
- (void)configureWithCollectionView:(id)arg1;
- (void)updateWithEpisodes:(id)arg1 andChangeSet:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithEpisodes:(id)arg1;

@end

