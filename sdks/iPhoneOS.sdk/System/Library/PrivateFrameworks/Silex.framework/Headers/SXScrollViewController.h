//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/SXAdControllerPresentationDelegate-Protocol.h>
#import <Silex/SXComponentHosting-Protocol.h>
#import <Silex/SXContextMenuManagerDelegate-Protocol.h>
#import <Silex/SXDocumentSectionHosting-Protocol.h>
#import <Silex/SXFormatInteractorDelegate-Protocol.h>
#import <Silex/SXKeyboardSupport-Protocol.h>
#import <Silex/SXPresentationDelegate-Protocol.h>
#import <Silex/SXPresentationEnvironment-Protocol.h>
#import <Silex/SXScrollPositionRestoring-Protocol.h>
#import <Silex/SXScrollViewDelegate-Protocol.h>
#import <Silex/SXTangierControllerDelegate-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSMutableArray, NSOrderedSet, SXComponentAnimationController, SXComponentBehaviorController, SXComponentView, SXContext, SXDocumentProvider, SXFontIndex, SXFullscreenCanvasController, SXFullscreenCanvasViewController, SXFullscreenVideoPlaybackManager, SXMediaPlaybackController, SXPresentationAttributes, SXScrollPosition, SXTangierController, SXVideoPlayerViewControllerManager, SXViewControllerPresentingManager, SXViewport, SXViewportDebugger, UIResponder, UIScrollView;
@protocol SXAdControllerContainer, SXAdDocumentStateManager, SXAnalyticsReportingContainer, SXAppStateMonitor, SXComponentController, SXComponentInteractionManager, SXContextMenuManager, SXDOMObjectProviding, SXDocumentControllerContainer, SXDocumentSectionBlueprint, SXDocumentSectionManager, SXDocumentStyleRenderer, SXFormatInteractor, SXMediaSharingPolicyProvider, SXPresentationAttributesManager, SXPresentationDelegateContainer, SXResourceDataSourceContainer, SXScrollPositionManager, SXScrollReporting, SXScrollViewControllerDelegate, SXTextSelectionManager, SXTransitionDataSourceProvider, UIViewControllerPreviewing;

@interface SXScrollViewController : UIViewController <SXFormatInteractorDelegate, SXDocumentSectionHosting, SXPresentationDelegate, SXScrollViewDelegate, SXComponentHosting, UIGestureRecognizerDelegate, SXTangierControllerDelegate, SXViewportChangeListener, SXAdControllerPresentationDelegate, SXContextMenuManagerDelegate, SXPresentationEnvironment, SXKeyboardSupport, SXScrollPositionRestoring>
{
    BOOL _restoreScrollPositionOnNextLayout;
    BOOL _isPreviewing;
    BOOL _transitioning;
    SXComponentAnimationController *_animationController;
    SXComponentBehaviorController *_behaviorController;
    id <SXComponentController> _componentController;
    SXMediaPlaybackController *_mediaPlaybackController;
    SXFullscreenVideoPlaybackManager *_fullscreenVideoPlaybackManager;
    id <SXAdDocumentStateManager> _adDocumentStateManager;
    id <SXTextSelectionManager> _textSelectionManager;
    SXContext *_context;
    UIScrollView *_scrollView;
    id <SXScrollViewControllerDelegate> _delegate;
    SXPresentationAttributes *_presentationAttributes;
    id <SXTransitionDataSourceProvider> _transitionDataSourceProvider;
    id <SXDocumentControllerContainer> _documentControllerContainer;
    id <SXResourceDataSourceContainer> _resourceDataSourceContainer;
    id <SXAnalyticsReportingContainer> _analyticsReportingContainer;
    id <SXPresentationDelegateContainer> _presentationDelegateContainer;
    id <SXAdControllerContainer> _adControllerContainer;
    id <SXAppStateMonitor> _appStateMonitor;
    id <SXPresentationAttributesManager> _presentationAttributesManager;
    SXViewControllerPresentingManager *_viewControllerPresentingManager;
    id <SXScrollPositionManager> _scrollPositionManager;
    id <SXComponentInteractionManager> _componentInteractionManager;
    id <SXContextMenuManager> _contextMenuManager;
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
    id <SXFormatInteractor> _interactor;
    id <SXDocumentSectionManager> _documentSectionManager;
    id <SXDocumentSectionBlueprint> _headerBlueprint;
    id <SXDocumentSectionBlueprint> _footerBlueprint;
    id <SXDocumentSectionBlueprint> _contentOverlayBlueprint;
    SXViewport *_viewport;
    SXViewportDebugger *_viewportDebugger;
    SXComponentView *_focussedComponentView;
    SXFullscreenCanvasViewController *_fullscreenCanvasViewController;
    SXFullscreenCanvasController *_currentCanvasController;
    SXScrollPosition *_restoredScrollPosition;
    NSOrderedSet *_snapLines;
    id <SXDocumentStyleRenderer> _documentStyleRenderer;
    SXTangierController *_tangierController;
    NSMutableArray *_articleScrollEvents;
    id <UIViewControllerPreviewing> _previewingContext;
    id <SXScrollReporting> _scrollReporter;
    SXVideoPlayerViewControllerManager *_videoPlayerViewControllerManager;
    SXFontIndex *_fontIndex;
    SXDocumentProvider *_documentProvider;
    double _headerHeight;
    double _contentOverlayTopOffset;
    id <SXDOMObjectProviding> _DOMObjectProvider;
}

@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
@property(nonatomic) BOOL transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) double contentOverlayTopOffset; // @synthesize contentOverlayTopOffset=_contentOverlayTopOffset;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(readonly, nonatomic) SXDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
@property(readonly, nonatomic) SXFontIndex *fontIndex; // @synthesize fontIndex=_fontIndex;
@property(readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager; // @synthesize videoPlayerViewControllerManager=_videoPlayerViewControllerManager;
@property(readonly, nonatomic) id <SXScrollReporting> scrollReporter; // @synthesize scrollReporter=_scrollReporter;
@property(nonatomic) BOOL isPreviewing; // @synthesize isPreviewing=_isPreviewing;
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain, nonatomic) NSMutableArray *articleScrollEvents; // @synthesize articleScrollEvents=_articleScrollEvents;
@property(retain, nonatomic) SXTangierController *tangierController; // @synthesize tangierController=_tangierController;
@property(readonly, nonatomic) id <SXDocumentStyleRenderer> documentStyleRenderer; // @synthesize documentStyleRenderer=_documentStyleRenderer;
@property(retain, nonatomic) NSOrderedSet *snapLines; // @synthesize snapLines=_snapLines;
@property(nonatomic) BOOL restoreScrollPositionOnNextLayout; // @synthesize restoreScrollPositionOnNextLayout=_restoreScrollPositionOnNextLayout;
@property(retain, nonatomic) SXScrollPosition *restoredScrollPosition; // @synthesize restoredScrollPosition=_restoredScrollPosition;
@property(retain, nonatomic) SXFullscreenCanvasController *currentCanvasController; // @synthesize currentCanvasController=_currentCanvasController;
@property(retain, nonatomic) SXFullscreenCanvasViewController *fullscreenCanvasViewController; // @synthesize fullscreenCanvasViewController=_fullscreenCanvasViewController;
@property(retain, nonatomic) SXComponentView *focussedComponentView; // @synthesize focussedComponentView=_focussedComponentView;
@property(retain, nonatomic) SXViewportDebugger *viewportDebugger; // @synthesize viewportDebugger=_viewportDebugger;
@property(retain, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) id <SXDocumentSectionBlueprint> contentOverlayBlueprint; // @synthesize contentOverlayBlueprint=_contentOverlayBlueprint;
@property(readonly, nonatomic) id <SXDocumentSectionBlueprint> footerBlueprint; // @synthesize footerBlueprint=_footerBlueprint;
@property(readonly, nonatomic) id <SXDocumentSectionBlueprint> headerBlueprint; // @synthesize headerBlueprint=_headerBlueprint;
@property(readonly, nonatomic) id <SXDocumentSectionManager> documentSectionManager; // @synthesize documentSectionManager=_documentSectionManager;
@property(readonly, nonatomic) id <SXFormatInteractor> interactor; // @synthesize interactor=_interactor;
@property(readonly, nonatomic) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider; // @synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider;
@property(readonly, nonatomic) id <SXContextMenuManager> contextMenuManager; // @synthesize contextMenuManager=_contextMenuManager;
@property(readonly, nonatomic) id <SXComponentInteractionManager> componentInteractionManager; // @synthesize componentInteractionManager=_componentInteractionManager;
@property(readonly, nonatomic) id <SXScrollPositionManager> scrollPositionManager; // @synthesize scrollPositionManager=_scrollPositionManager;
@property(readonly, nonatomic) SXViewControllerPresentingManager *viewControllerPresentingManager; // @synthesize viewControllerPresentingManager=_viewControllerPresentingManager;
@property(readonly, nonatomic) id <SXPresentationAttributesManager> presentationAttributesManager; // @synthesize presentationAttributesManager=_presentationAttributesManager;
@property(readonly, nonatomic) id <SXAppStateMonitor> appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(readonly, nonatomic) id <SXAdControllerContainer> adControllerContainer; // @synthesize adControllerContainer=_adControllerContainer;
@property(readonly, nonatomic) id <SXPresentationDelegateContainer> presentationDelegateContainer; // @synthesize presentationDelegateContainer=_presentationDelegateContainer;
@property(readonly, nonatomic) id <SXAnalyticsReportingContainer> analyticsReportingContainer; // @synthesize analyticsReportingContainer=_analyticsReportingContainer;
@property(readonly, nonatomic) id <SXResourceDataSourceContainer> resourceDataSourceContainer; // @synthesize resourceDataSourceContainer=_resourceDataSourceContainer;
@property(readonly, nonatomic) id <SXDocumentControllerContainer> documentControllerContainer; // @synthesize documentControllerContainer=_documentControllerContainer;
@property(readonly, nonatomic) id <SXTransitionDataSourceProvider> transitionDataSourceProvider; // @synthesize transitionDataSourceProvider=_transitionDataSourceProvider;
@property(readonly, nonatomic) SXPresentationAttributes *presentationAttributes; // @synthesize presentationAttributes=_presentationAttributes;
@property(nonatomic) __weak id <SXScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) SXContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <SXTextSelectionManager> textSelectionManager; // @synthesize textSelectionManager=_textSelectionManager;
@property(readonly, nonatomic) id <SXAdDocumentStateManager> adDocumentStateManager; // @synthesize adDocumentStateManager=_adDocumentStateManager;
@property(readonly, nonatomic) SXFullscreenVideoPlaybackManager *fullscreenVideoPlaybackManager; // @synthesize fullscreenVideoPlaybackManager=_fullscreenVideoPlaybackManager;
@property(readonly, nonatomic) SXMediaPlaybackController *mediaPlaybackController; // @synthesize mediaPlaybackController=_mediaPlaybackController;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIEdgeInsets safeAreaInsets;
@property(readonly, nonatomic) CGSize viewportSize;
- (id)canvasViewController;
- (id)interactiveCanvasController;
- (BOOL)isValidBlueprintForCurrentSize:(id)arg1;
- (void)showScrollViewIfNeeded;
- (void)_applicationWillEnterForeground:(id)arg1;
- (double)snaplineForContentOffset:(double)arg1 velocity:(double)arg2;
- (void)finishArticleScrollEvents;
- (void)willEndPreviewingForContextMenuManager:(id)arg1;
- (void)willStartPreviewingForContextMenuManager:(id)arg1;
- (BOOL)shouldStartPreviewForContextMenuManager:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)spacebarPressedWithModifierFlags:(long long)arg1;
- (void)tangierController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint )arg4;
- (void)tangierController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3;
- (void)tangierController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)tangierControllerDidStopScrolling:(id)arg1;
- (void)tangierControllerWillStartScrolling:(id)arg1;
- (void)tangierControllerDidScroll:(id)arg1;
- (BOOL)accessibilityShouldScrollForScrollView:(id)arg1 defaultValue:(BOOL)arg2;
- (BOOL)scrollView:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
- (BOOL)shouldPreventDraggingForScrollView:(id)arg1;
- (void)updateBehaviorForComponentView:(id)arg1;
- (id)presentingContentViewController;
- (void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2;
- (BOOL)isScrolling;
- (void)dismissFullscreenCanvasForComponent:(id)arg1;
- (id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 canvasController:(id)arg2 withCompletionBlock:(id /* CDUnknownBlockType */)arg3;
- (id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)removeInteractivityFocusForComponent:(id)arg1;
- (BOOL)addInteractivityFocusForComponent:(id)arg1;
- (BOOL)allowInteractivityFocusForComponent:(id)arg1;
@property(readonly, nonatomic) SXComponentAnimationController *animationController; // @synthesize animationController=_animationController;
@property(readonly, nonatomic) SXComponentBehaviorController *behaviorController; // @synthesize behaviorController=_behaviorController;
@property(readonly, nonatomic) id <SXComponentController> componentController; // @synthesize componentController=_componentController;
- (BOOL)shouldRestoreScrollPositionForLayoutBlueprint:(id)arg1;
- (void)updateScrollPosition:(id)arg1 animated:(BOOL)arg2;
- (id)textScrollPositionForComponentViews:(id)arg1;
- (id)scrollPositionForPlayingVideoComponentInComponentViews:(id)arg1;
- (void)dictionaryWithComponentOffsets:(id)arg1 forComponentViews:(id)arg2;
- (id)scrollPositionForComponentViews:(id)arg1;
- (id)scrollPosition;
- (id)headlineAccessibilityElement;
@property(nonatomic) BOOL textSelectionEnabled;
- (id)videoComponentViewForVideoPlayerViewController:(id)arg1;
- (CGRect)frameOfComponentWithVideoPlayerViewController:(id)arg1;
@property(readonly, nonatomic) BOOL isPresentingFullscreenCanvas;
- (void)updateViewportForBlueprint:(id)arg1;
- (id)presentingViewControllerForAdController:(id)arg1;
- (void)removeComponentView:(id)arg1;
- (void)addComponentView:(id)arg1;
- (void)displayContentsAfterLayoutWithInteractor:(id)arg1;
- (void)hideContentsForLayoutWithInteractor:(id)arg1;
- (void)interactor:(id)arg1 didIntegrateBlueprint:(id)arg2;
- (void)interactor:(id)arg1 willIntegrateBlueprint:(id)arg2;
- (void)interactor:(id)arg1 willLayoutWithOptions:(id)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(NSUInteger)arg2;
- (id)sectionHostingView;
- (id)sectionHostingViewController;
- (void)updateStickyHeaders;
- (void)applyContentOverlayBlueprint:(id)arg1 topOffset:(double)arg2;
- (void)applyFooterBlueprint:(id)arg1;
- (void)applyHeaderBlueprint:(id)arg1;
@property(readonly, nonatomic) UIResponder *responder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)assistiveTechnologyStatusDidChange:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updatePresentationWithAttributes:(id)arg1;
- (void)loadContext:(id)arg1 analyticsReporting:(id)arg2 adControllerFactory:(id)arg3;
- (void)viewDidLoad;
- (id)initWithScrollView:(id)arg1 documentControllerContainer:(id)arg2 resourceDataSourceContainer:(id)arg3 analyticsReportingContainer:(id)arg4 presentationDelegateContainer:(id)arg5 adControllerContainer:(id)arg6 presentationAttributeManager:(id)arg7 viewport:(id)arg8 tangierController:(id)arg9 componentController:(id)arg10 interactor:(id)arg11 appStateMonitor:(id)arg12 viewControllerPresentingManager:(id)arg13 scrollPositionManager:(id)arg14 documentStyleRenderer:(id)arg15 componentInteractionManager:(id)arg16 contextMenuManager:(id)arg17 scrollReporter:(id)arg18 videoPlayerViewControllerManager:(id)arg19 mediaSharingPolicyProvider:(id)arg20 fontIndex:(id)arg21 documentProvider:(id)arg22 transitionDataSourceProvider:(id)arg23 DOMObjectProvider:(id)arg24;
- (id)scrollViewForFullscreenGalleryWithComponentIdentifier:(id)arg1;
- (void)presentFullscreenGalleryWithComponentIdentifier:(id)arg1;
- (id)scrollViewForStripGalleryWithComponentIdentifier:(id)arg1;

@end

