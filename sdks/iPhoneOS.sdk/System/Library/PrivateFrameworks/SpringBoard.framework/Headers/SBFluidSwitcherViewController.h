//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSUIScrollViewDelegate-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyPathObserver-Protocol.h>
#import <SpringBoard/SBAppSwitcherReusableSnapshotViewDelegate-Protocol.h>
#import <SpringBoard/SBAppSwitcherSnapshotImageCacheDelegate-Protocol.h>
#import <SpringBoard/SBChainableModifierDelegate-Protocol.h>
#import <SpringBoard/SBFluidSwitcherItemContainerDelegate-Protocol.h>
#import <SpringBoard/SBFluidSwitcherPageContentViewProviderDelegate-Protocol.h>
#import <SpringBoard/SBFluidSwitcherScrollProvidingDelegate-Protocol.h>
#import <SpringBoard/SBHistorianSwitcherModifierDelegate-Protocol.h>
#import <SpringBoard/SBIconViewObserver-Protocol.h>
#import <SpringBoard/SBSearchGestureObserver-Protocol.h>
#import <SpringBoard/SBSwitcherContentViewControlling-Protocol.h>
#import <SpringBoard/SBSwitcherLiveContentOverlayCoordinatorDelegate-Protocol.h>
#import <SpringBoard/SBTetheredSwitcherContentViewControlling-Protocol.h>

@class BSAnimationSettings, NSArray, NSMutableArray, NSMutableDictionary, NSString, SBAppSwitcherScrollView, SBAppSwitcherSettings, SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, SBBestAppSuggestion, SBFHomeGrabberSettings, SBFloatingDockBehaviorAssertion, SBFloatingDockWindowLevelAssertion, SBFluidSwitcherButton, SBFluidSwitcherContentView, SBFluidSwitcherLayoutContext, SBFluidSwitcherModifierTimelineController, SBFluidSwitcherPageContentViewProvider, SBFluidSwitcherTitledButton, SBLayoutStateTransitionCoordinator, SBSceneManager, SBSwitcherModifier, SBViewMorphAnimator, SBWorkspaceApplicationSceneTransitionContext, UIApplicationSceneDeactivationAssertion, UILabel, UINotificationFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol BSInvalidatable, SBFluidSwitcherScrollProviding, SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherLiveContentOverlayCoordinating, SBTetheredSwitcherContentViewControlling;

@interface SBFluidSwitcherViewController : UIViewController <SBFluidSwitcherPageContentViewProviderDelegate, SBChainableModifierDelegate, SBAppSwitcherSnapshotImageCacheDelegate, BSUIScrollViewDelegate, SBFluidSwitcherItemContainerDelegate, SBIconViewObserver, BSDescriptionProviding, UIGestureRecognizerDelegate, SBSearchGestureObserver, PTSettingsKeyObserver, PTSettingsKeyPathObserver, SBFluidSwitcherScrollProvidingDelegate, SBHistorianSwitcherModifierDelegate, SBSwitcherLiveContentOverlayCoordinatorDelegate, SBAppSwitcherReusableSnapshotViewDelegate, SBSwitcherContentViewControlling, SBTetheredSwitcherContentViewControlling>
{
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    SBSceneManager *_sceneManager;
    id <SBSwitcherLiveContentOverlayCoordinating> _liveContentOverlayCoordinator;
    NSMutableDictionary *_liveContentOverlays;
    NSMutableDictionary *_appLayoutToHeaderItemController;
    _NSRange _visibleItemRange;
    CGPoint _scrollViewLastContentOffset;
    BOOL _scrollViewLastScrolledForward;
    SBFluidSwitcherPageContentViewProvider *_pageContentViewProvider;
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    SBAppSwitcherSettings *_settings;
    UIApplicationSceneDeactivationAssertion *_transitionBeginResignActiveAssertion;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    NSString *_fluidSwitcherAssertionReason;
    NSString *_tapticEngineEmptySwitcherReason;
    NSString *_tapticEngineForcePressPreviewReason;
    NSString *_tapticEngineForcePressCommitReason;
    SBWorkspaceApplicationSceneTransitionContext *_pendingTransitionContext;
    UINotificationFeedbackGenerator *_emptySwitcherFeedbackGenerator;
    UINotificationFeedbackGenerator *_flyInFeedbackGenerator;
    UINotificationFeedbackGenerator *_reduceMotionFeedbackGenerator;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    UIView *_crossfadeSnapshotView;
    UIView *_hitTestBlockerView;
    BOOL _currentWallpaperRequiredForSwitcher;
    long long _currentWallpaperStyle;
    BOOL _currentHomeScreenContentRequired;
    long long _currentBackdropBlurType;
    long long _currentKeyboardSuppressionMode;
    SBFluidSwitcherModifierTimelineController *_modifierTimelineController;
    NSArray *_cachedAdjustedAppLayouts;
    id /* CDUnknownBlockType */ _activeTransitionSubcompletionGenerator;
    BOOL _currentlyRequestingTethering;
    NSUInteger _ignoreNotifyTetheredControllerReasonCount;
    BOOL _isTetheree;
    NSString *_debugName;
    BOOL _isShowingModifierTimeline;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    UIPanGestureRecognizer *_borrowableScrollViewPanGestureRecognizer;
    SBFluidSwitcherContentView *_stashedContentView;
    BOOL _liveContentRasterizationDisabled;
    id <SBTetheredSwitcherContentViewControlling> _tetheredViewController;
    id <SBSwitcherContentViewControllerDelegate> _delegate;
    id <SBSwitcherContentViewControllerDataSource> _dataSource;
    SBBestAppSuggestion *_bestAppSuggestion;
    long long _contentOrientation;
    SBAppSwitcherScrollView *_scrollView;
    SBFluidSwitcherContentView *_contentView;
    SBFluidSwitcherLayoutContext *_layoutContext;
    NSMutableDictionary *_visibleItemContainers;
    NSMutableArray *_hiddenRecycledItemContainers;
    SBFluidSwitcherButton *_plusButton;
    SBFluidSwitcherTitledButton *_reopenClosedWindowsButton;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_rootModifier;
    SBSwitcherModifier *_reduceMotionModifier;
    NSMutableDictionary *_hiddenIconViews;
    SBFloatingDockBehaviorAssertion *_inAppFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_transientOverlayFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_switcherFloatingDockBehaviorAssertion;
    SBFloatingDockWindowLevelAssertion *_switcherFloatingDockWindowLevelAssertion;
    SBFloatingDockWindowLevelAssertion *_transientOverlayFloatingDockWindowLevelAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    SBViewMorphAnimator *_morphToPiPAnimator;
    UILabel *_modifierStackDebugLabel;
    id <BSInvalidatable> _wallpaperRequireAssertion;
}

@property(retain, nonatomic) id <BSInvalidatable> wallpaperRequireAssertion; // @synthesize wallpaperRequireAssertion=_wallpaperRequireAssertion;
@property(retain, nonatomic) UILabel *modifierStackDebugLabel; // @synthesize modifierStackDebugLabel=_modifierStackDebugLabel;
@property(nonatomic) __weak SBViewMorphAnimator *morphToPiPAnimator; // @synthesize morphToPiPAnimator=_morphToPiPAnimator;
@property(retain, nonatomic) SBFHomeGrabberSettings *grabberSettings; // @synthesize grabberSettings=_grabberSettings;
@property(retain, nonatomic) SBFloatingDockWindowLevelAssertion *transientOverlayFloatingDockWindowLevelAssertion; // @synthesize transientOverlayFloatingDockWindowLevelAssertion=_transientOverlayFloatingDockWindowLevelAssertion;
@property(retain, nonatomic) SBFloatingDockWindowLevelAssertion *switcherFloatingDockWindowLevelAssertion; // @synthesize switcherFloatingDockWindowLevelAssertion=_switcherFloatingDockWindowLevelAssertion;
@property(retain, nonatomic) SBFloatingDockBehaviorAssertion *switcherFloatingDockBehaviorAssertion; // @synthesize switcherFloatingDockBehaviorAssertion=_switcherFloatingDockBehaviorAssertion;
@property(retain, nonatomic) SBFloatingDockBehaviorAssertion *transientOverlayFloatingDockBehaviorAssertion; // @synthesize transientOverlayFloatingDockBehaviorAssertion=_transientOverlayFloatingDockBehaviorAssertion;
@property(retain, nonatomic) SBFloatingDockBehaviorAssertion *inAppFloatingDockBehaviorAssertion; // @synthesize inAppFloatingDockBehaviorAssertion=_inAppFloatingDockBehaviorAssertion;
@property(retain, nonatomic) NSMutableDictionary *hiddenIconViews; // @synthesize hiddenIconViews=_hiddenIconViews;
@property(retain, nonatomic) SBSwitcherModifier *reduceMotionModifier; // @synthesize reduceMotionModifier=_reduceMotionModifier;
@property(retain, nonatomic) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *rootModifier; // @synthesize rootModifier=_rootModifier;
@property(retain, nonatomic) SBFluidSwitcherTitledButton *reopenClosedWindowsButton; // @synthesize reopenClosedWindowsButton=_reopenClosedWindowsButton;
@property(retain, nonatomic) SBFluidSwitcherButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain, nonatomic) NSMutableArray *hiddenRecycledItemContainers; // @synthesize hiddenRecycledItemContainers=_hiddenRecycledItemContainers;
@property(retain, nonatomic) NSMutableDictionary *visibleItemContainers; // @synthesize visibleItemContainers=_visibleItemContainers;
@property(retain, nonatomic) SBFluidSwitcherLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(retain, nonatomic) SBFluidSwitcherContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SBAppSwitcherScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic, getter=isLiveContentRasterizationDisabled) BOOL liveContentRasterizationDisabled; // @synthesize liveContentRasterizationDisabled=_liveContentRasterizationDisabled;
@property(nonatomic) long long contentOrientation; // @synthesize contentOrientation=_contentOrientation;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // @synthesize bestAppSuggestion=_bestAppSuggestion;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SBTetheredSwitcherContentViewControlling> tetheredViewController; // @synthesize tetheredViewController=_tetheredViewController;
// - (void).cxx_destruct;
- (void)reduceMotionStatusDidChange:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_updateModifierStackDebugLabel;
- (void)_updateModifierTimelinePresence;
@property(nonatomic, getter=isShowingModifierTimeline) BOOL showModifierTimeline;
- (void)_updateModifierStackDebugLabelPresence;
- (void)_performModifierInvalidateReopenButtonTextAction:(id)arg1;
- (void)_performActivatePlusButtonSwitcherModifierAction:(id)arg1;
- (void)_performBlurItemContainerAction:(id)arg1;
- (void)_performModifierDosidoScaleAnimationAction:(id)arg1;
- (void)_performModifierInvalidateAdjustedAppLayoutsAction:(id)arg1;
- (void)_performModifierTimerEventAction:(id)arg1;
- (void)_performModifierMatchMoveToIconViewAction:(id)arg1;
- (void)_performModifierIconViewVisibilityUpdateAction:(id)arg1;
- (void)_performModifierIconOverlayVisibilityUpdateAction:(id)arg1;
- (void)_performModifierScrollToAppLayoutAction:(id)arg1;
- (void)_performModifierUpdateLayoutAction:(id)arg1;
- (void)_performModifierEmitSBEventAction:(id)arg1;
- (void)_performModifierEmitStudyLogAction:(id)arg1;
- (void)_performModifierInjectVelocityAction:(id)arg1;
- (void)_performModifierHapticAction:(id)arg1;
- (void)_performModifierReachabilityAction:(id)arg1;
- (void)_performModifierCompletionAction:(id)arg1;
- (void)_performModifierPerformTransitionAction:(id)arg1;
- (void)_performModifierGroupAction:(id)arg1;
- (void)_performModifierAction:(id)arg1;
- (void)_handleModifierAction:(id)arg1;
- (void)_updateTetheredScrolling;
- (void)_dispatchEventAndHandleAction:(id)arg1;
- (id)_dispatchEventAndReturnAction:(id)arg1;
- (id)_transitionEventForTransitionWithContext:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4;
- (id)_transitionEventForTransitionToLayoutState:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4;
- (void)_setupMorphToPiPIfNeededForTransitionContext:(id)arg1;
- (BOOL)_shouldInterruptPresentationAndDismiss;
- (void)_handleDismissTapGesture:(id)arg1;
- (BOOL)_isLayoutStateSwitcher:(id)arg1 allowTransitions:(BOOL)arg2;
- (id)_activeTransientOverlayPresentedAppLayout;
- (void)_updateFloatingDockWindowLevelAssertion;
- (void)_updateFloatingDockBehaviorAssertion;
- (void)_acquireKeyboardSuppressionAssertionForMode:(long long)arg1;
- (void)_acquireResignActiveAssertionWithReason:(long long)arg1;
- (id /* CDUnknownBlockType */)_sceneDeactivationPredicateMatchingAppLayouts;
- (void)_updateKeyboardSuppressionAssertion;
- (void)_updateResignActiveAssertion;
- (void)_updateLiveContentRasterization;
- (void)_updateAsynchronousSurfaceRetentionAssertion;
- (void)_updateBackdropType;
- (void)_updateHomeScreenContentRequirement;
- (void)_updateWallpaperStyle;
- (void)handleReopenClosedWindowsButtonTapped:(id)arg1;
- (void)_handlePlusButtonTapped:(id)arg1;
- (BOOL)_shouldItemContainersUseDarkLabels;
- (void)_updateHeaderItemsLabelColor;
- (void)_updateReopenClosedWindowsButtonWithMode:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_updatePlusButtonStyleWithMode:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_updateAppExposeAccessoryButtonsExtendedTouchRegions;
- (void)_updateReopenClosedWindowsButtonText;
- (void)_updateReopenClosedWindowsButtonPresence;
- (void)_updatePlusButtonPresence;
- (void)_rebuildCachedAdjustedAppLayouts;
- (id)_unadjustedAppLayouts;
- (CGRect)_frameForInlineAppExposeItemAspectFill:(BOOL)arg1;
- (CGRect)_frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (CGRect)_frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3;
- (BOOL)_allowsHeaderItemsForAppLayout:(id)arg1;
- (void)_setScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_setupLiveContentOverlayForAppLayout:(id)arg1 itemContainer:(id)arg2 overlay:(id)arg3;
- (BOOL)_isScrollingConsideringTetheredSwitcher:(BOOL)arg1;
- (void)_updateSnapshotCacheReloadingForActiveInterfaceOrientationChange;
- (void)_coolDownEmptyAppSwitcherHaptic;
- (void)_actuateEmptyAppSwitcherHaptic;
- (void)_warmupEmptyAppSwitcherHaptic;
- (void)_updateSpringBoardStatusBarAssertionAnimated:(BOOL)arg1;
- (void)_updateAppStatusBarAndHomeGrabberVisibilityAnimated:(BOOL)arg1;
- (void)_updateStatusBarAndHomeGrabberVisibilityForAppLayout:(id)arg1 animated:(BOOL)arg2;
- (id)_appLayoutForWorkspaceTransientOverlay:(id)arg1;
- (id)_appLayoutForItemContainerAtLocation:(CGPoint)arg1;
- (id)_itemContainerAtLocation:(CGPoint)arg1;
- (void)_configureTransitionRequestForGestureBegin:(id)arg1;
- (id)_createWorkspaceTransientOverlayForAppLayout:(id)arg1;
- (void)_scrollToAppLayout:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_setContentViewAlpha:(double)arg1 withMode:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (CGPoint)gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2;
- (void)gestureHandlingModifierRequestsUpdate:(id)arg1;
- (BOOL)shouldUseBackgroundWallpaperTreatmentForItemContainer:(id)arg1;
- (double)switcherCardScale;
- (long long)homeScreenInterfaceOrientation;
- (void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2;
- (CGRect)frameForPageViewOfContainer:(id)arg1 fullyPresented:(BOOL)arg2;
- (void)didSelectContainer:(id)arg1;
- (BOOL)canSelectContainer:(id)arg1 numberOfTaps:(long long)arg2;
- (void)killContainer:(id)arg1 forReason:(long long)arg2;
- (CGRect)layoutFrameForItemWithRole:(long long)arg1 inAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 forSnapshotView:(id)arg4;
- (CGSize)snapshotSizeForItemWithRole:(long long)arg1 inAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 inImageCache:(id)arg4;
- (id)defaultAppLayoutsForImageCache:(id)arg1;
- (id)appLayoutsForWhichToGenerateFullSizeSnapshotsInImageCache:(id)arg1;
- (double)scaleForDownscaledSnapshotsForImageCache:(id)arg1;
- (long long)orientationForSnapshotOfAppLayout:(id)arg1 inImageCache:(id)arg2;
- (id)highPriorityAppLayoutsForImageCache:(id)arg1;
- (BOOL)biasForwardForImageCache:(id)arg1;
- (_NSRange)visibleAppLayoutRangeForImageCache:(id)arg1;
- (id)appLayoutsForImageCache:(id)arg1;
- (id)delegateForForSnapshotPageViewFromProvider:(id)arg1;
- (id)viewControllerForTransientOverlayAppLayout:(id)arg1 fromProvider:(id)arg2;
- (id)containerViewControllerForPageViewFromProvider:(id)arg1;
- (CGSize)sizeForAppLayout:(id)arg1 fromProvider:(id)arg2;
- (long long)orientationForPageViewFromProvider:(id)arg1;
- (CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double )arg6 verticalVelocity:(inout double )arg7;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidScroll:(id)arg1 withContext:(CDStruct_3b09cf25)arg2;
- (id)_itemContainerForAppLayoutIfExists:(id)arg1;
- (id)_appLayoutForItemContainerIfExists:(id)arg1;
- (void)_applyStyleToLiveContentOverlay:(id)arg1 forItemContainer:(id)arg2;
- (void)_applyStyleToItemContainer:(id)arg1 withMode:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_applyStyleToVisibleItemContainersWithMode:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_updateStyleWithBehaviorMode:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_appLayoutWantsToBeKeptInViewHierarchy:(id)arg1;
- (void)_addVisibleItemContainerForAppLayout:(id)arg1;
- (BOOL)_removeVisibleItemContainerForAppLayout:(id)arg1;
- (void)_performCrossfadeIfNeededWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_prepareForCrossfadeIfNeeded;
- (void)_updateVisibleItems;
- (void)_ensureCardSubviewOrdering;
- (void)_updateContentViewPassesTouchesThrough;
- (void)_updateScrollViewScrollEnabled;
- (void)_updateScrollViewSizeAndSpacing;
- (void)_layoutAppLayout:(id)arg1 behaviorMode:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_layoutVisibleItemsWithBehaviorMode:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_updateLayoutWithBehaviorMode:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_updateVisibleItemsLayoutAndStyleWithBehaviorMode:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_configureApplicationAndTransientOverlayDockBehaviorAssertionsForContext:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)noteAppLayoutsDidChange;
- (id)dispatchAndReturnTetheredRemovalEventWithID:(id)arg1 phase:(NSUInteger)arg2;
- (void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(BOOL)arg3;
- (id)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (BOOL)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (id)dispatchAndReturnTetheredInsertionEventWithID:(id)arg1 phase:(NSUInteger)arg2;
- (void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(BOOL)arg3;
- (id)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (BOOL)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (void)iconViewWasRecycled:(id)arg1;
- (void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)folderScrolledEnoughToClipSwitcherIconView:(id)arg1;
- (void)folderExpansionAnimationWillBegin:(id)arg1;
- (void)_temporarilyHideMatchMovedZoomDownAnimationViewAnimated:(BOOL)arg1;
- (BOOL)_isPerformingMatchMoveToIconView;
- (void)_unblurItemContainer:(id)arg1;
- (void)_blurItemContainerWithAnimation:(id)arg1;
- (void)_performContentViewScaleAnimationForDosido;
- (void)_cancelInProcessAnimations;
- (id)_rotationAnimationSettingsForTransitionContext:(id)arg1;
- (void)_makeAppLayoutVisibleForTransitionWithContext:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (double)_delayForTransitionWithContext:(id)arg1 animated:(BOOL)arg2;
- (void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
@property(readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property(readonly, nonatomic) BOOL canInterruptActiveTransition;
- (void)_performWithoutNotifyingTetheredViewController:(id /* CDUnknownBlockType */)arg1;
- (void)prepareToReopenClosedWindowsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)returnScrollViewPanGestureRecognizer:(id)arg1;
- (id)borrowScrollViewPanGestureRecognizer;
- (BOOL)hasItemContainerAtLocationInContentView:(CGPoint)arg1;
- (void)dispatchAndHandleTetheredRemovalEvent:(id)arg1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
- (NSUInteger)numberOfAppLayouts;
- (BOOL)isScrolling;
- (CGSize)contentSize;
- (void)tetheredViewController:(id)arg1 didPerformTransitionWithMode:(long long)arg2;
- (void)setTetheredContentView:(id)arg1;
- (void)setTetheredScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)endTetheringWithViewController:(id)arg1;
- (void)beginTetheringWithViewController:(id)arg1 asTetheree:(BOOL)arg2;
- (void)_updateLayoutForInterfaceOrientation:(long long)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (id)parentViewControllerForContentOverlay;
- (id)switcherWindow;
- (void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg1;
- (BOOL)areLiveContentOverlayUpdatesSuspended;
- (void)removeLiveContentOverlayForAppLayout:(id)arg1 animated:(BOOL)arg2;
- (void)addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(BOOL)arg3;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (id)enterAppExposeForBundleID:(id)arg1;
- (void)handleModifierAction:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg1;
- (BOOL)isStatusBarHiddenForAppLayout:(id)arg1;
- (BOOL)shouldRubberbandHomeGrabberView;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (BOOL)isUserInteractionEnabled;
- (BOOL)isWindowVisible;
- (BOOL)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(BOOL)arg3;
- (void)relinquishTransientOverlayViewController:(id)arg1;
- (void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;
- (double)minimumHomeScreenScale;
- (double)snapshotScale;
- (double)snapshotScaleForSceneHandle:(id)arg1;
- (void)historianModifier:(id)arg1 didRecordEntry:(id)arg2;
- (id)handleGestureDidEnd:(id)arg1;
- (id)handleGestureDidUpdate:(id)arg1;
- (id)handleGestureDidBegin:(id)arg1;
- (CGPoint)scrollProvidingModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg2;
- (CGPoint)scrollProvidingModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(CGPoint)arg2;
- (double)morphToPiPSourceAlpha;
- (double)morphToPiPTargetScale;
- (CGPoint)morphToPiPTargetCenter;
- (double)floatingDockWindowLevel;
- (double)switcherWindowLevel;
- (CGRect)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (BOOL)isAppLayoutHigherPriorityInTetheredSwitcher:(id)arg1;
- (BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1;
- (id)homeScreenIconLocationForAppLayout:(id)arg1;
- (double)homeScreenIconCornerRadiusForAppLayout:(id)arg1;
- (double)homeScreenIconScaleForAppLayout:(id)arg1;
- (CGRect)homeScreenIconFrameForAppLayout:(id)arg1;
- (BOOL)isStudyLogEnabled;
- (BOOL)isRTLEnabled;
- (BOOL)isReduceMotionEnabled;
- (BOOL)hasHomeButton;
- (BOOL)isDevicePad;
- (long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1;
- (long long)numberOfVisibleCards;
- (id)entityRemovalSettings;
- (id)medusaSettings;
- (id)homeGestureSettings;
- (id)switcherSettings;
- (BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg1;
- (BOOL)isHomeScreenSidebarVisible;
- (BOOL)isShowingSpotlightOrTodayView;
- (BOOL)homeScreenHasOpenFolderInLocation:(id)arg1;
- (BOOL)homeScreenHasOpenFolder;
- (BOOL)isFloatingDockGesturePossible;
- (BOOL)isFloatingDockFullyPresented;
- (double)floatingDockViewTopMargin;
- (double)floatingDockHeight;
- (double)displayCornerRadius;
- (long long)switcherInterfaceOrientation;
- (double)distanceToTetheredLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
- (CGSize)tetheredScrollViewContentSize;
- (CGPoint)scrollViewContentOffset;
- (CGRect)switcherViewBounds;
- (CGRect)containerViewBounds;
- (id)activatingDisplayItemForAppLayout:(id)arg1;
- (NSUInteger)numberOfTetheredAppLayouts;
@property(readonly, nonatomic) NSArray *appLayouts;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_setupContentAndTransientViews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_resetLastScrollViewState;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3;
- (CGRect)_iconImageFrameForIconView:(id)arg1;
- (id)_iconViewForDisplayItem:(id)arg1 isVisible:(BOOL )arg2;
- (id)iconLeafIdentifierForDisplayItem:(id)arg1;
- (id)_floatingDockIconLocationForTransitionSource:(long long)arg1;
- (id)_iconForApplicationSceneEntity:(id)arg1;
- (CGSize)defaultHomeScreenIconSize;
- (CGRect)iconImageFrameForAppLayout:(id)arg1;
- (id)iconViewForAppLayout:(id)arg1;
- (BOOL)shouldMorphToPiPForTransitionContext:(id)arg1;

@end

