//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/AVPlayerViewControllerDelegatePrivate-Protocol.h>
#import <VideosUI/VUINowPlayingFeatureMonitorDelegate-Protocol.h>
#import <VideosUI/VideosExtrasContextDelegate-Protocol.h>

@class AVExternalPlaybackController, AVPlayerViewController, MPAVRoutingController, TVPStateMachine, UIButton, UIImage, UIViewController, VUINowPlayingFeatureMonitor, VUIPlayer, VUIVideoAdvisoryLogoImageDownloader, VUIVideoAdvisoryView, VideosExtrasContext, VideosExtrasPresenter;
@protocol TVPMediaItem;

@interface VUIPlaybackManager : NSObject <AVPlayerViewControllerDelegatePrivate, VideosExtrasContextDelegate, VUINowPlayingFeatureMonitorDelegate>
{
    BOOL _requiresLinearPlayback;
    BOOL _shouldDisplayTVRatingWhenVideoBoundsIsAvailable;
    BOOL _shouldAnimateTVRatingView;
    VUIPlayer *_mainPlayer;
    VUIPlayer *_backgroundAudioPlayer;
    VUIPlayer *_extrasPlayer;
    VUIPlayer *_activePlayer;
    TVPStateMachine *_stateMachine;
    VideosExtrasContext *_extrasContext;
    AVPlayerViewController *_avPlayerViewController;
    AVPlayerViewController *_mainAVPlayerViewController;
    AVPlayerViewController *_extrasAVPlayerViewController;
    UIViewController *_presentingViewController;
    long long _dismissalOperation;
    MPAVRoutingController *_routingController;
    AVExternalPlaybackController *_avExternalPlaybackController;
    VideosExtrasPresenter *_extrasPresenter;
    VUINowPlayingFeatureMonitor *_featureMonitor;
    UIButton *_skipButton;
    VUIVideoAdvisoryLogoImageDownloader *_logoImageDownloader;
    UIImage *_ratingImage;
    VUIVideoAdvisoryView *_ratingView;
}

+ (id)sharedInstance;
+ (void)_performRatingAndAgeVerificationWithMediaItem:(id)arg1 presentingController:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (void)_verifyMediaItemIsPlayableOnCellular:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
+ (void)_showCellularPlaybackQualityOptionsForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
+ (BOOL)_shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg1;
+ (void)_presentCellularPlaybackIsDisabledAlertControllerWithPresentingViewController:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
+ (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)_rentalPlaybackStartDateWithMediaItem:(id)arg1;
+ (BOOL)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1;
+ (void)preflightPlaybackWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
@property(nonatomic) BOOL shouldAnimateTVRatingView; // @synthesize shouldAnimateTVRatingView=_shouldAnimateTVRatingView;
@property(nonatomic) BOOL shouldDisplayTVRatingWhenVideoBoundsIsAvailable; // @synthesize shouldDisplayTVRatingWhenVideoBoundsIsAvailable=_shouldDisplayTVRatingWhenVideoBoundsIsAvailable;
@property(retain, nonatomic) VUIVideoAdvisoryView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) UIImage *ratingImage; // @synthesize ratingImage=_ratingImage;
@property(retain, nonatomic) VUIVideoAdvisoryLogoImageDownloader *logoImageDownloader; // @synthesize logoImageDownloader=_logoImageDownloader;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) VUINowPlayingFeatureMonitor *featureMonitor; // @synthesize featureMonitor=_featureMonitor;
@property(retain, nonatomic) VideosExtrasPresenter *extrasPresenter; // @synthesize extrasPresenter=_extrasPresenter;
@property(retain, nonatomic) AVExternalPlaybackController *avExternalPlaybackController; // @synthesize avExternalPlaybackController=_avExternalPlaybackController;
@property(nonatomic) BOOL requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property(retain, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(nonatomic) long long dismissalOperation; // @synthesize dismissalOperation=_dismissalOperation;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) AVPlayerViewController *extrasAVPlayerViewController; // @synthesize extrasAVPlayerViewController=_extrasAVPlayerViewController;
@property(retain, nonatomic) AVPlayerViewController *mainAVPlayerViewController; // @synthesize mainAVPlayerViewController=_mainAVPlayerViewController;
@property(retain, nonatomic) AVPlayerViewController *avPlayerViewController; // @synthesize avPlayerViewController=_avPlayerViewController;
@property(retain, nonatomic) VideosExtrasContext *extrasContext; // @synthesize extrasContext=_extrasContext;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) __weak VUIPlayer *activePlayer; // @synthesize activePlayer=_activePlayer;
@property(retain, nonatomic) VUIPlayer *extrasPlayer; // @synthesize extrasPlayer=_extrasPlayer;
@property(retain, nonatomic) VUIPlayer *backgroundAudioPlayer; // @synthesize backgroundAudioPlayer=_backgroundAudioPlayer;
@property(retain, nonatomic) VUIPlayer *mainPlayer; // @synthesize mainPlayer=_mainPlayer;
// - (void).cxx_destruct;
- (void)_registerStateMachineHandlers;
- (void)_avPlayerViewControllerPresentationDidTimeout;
- (void)_updateStopWhenBackgroundedFeatureForApplicationState:(long long)arg1 isFullScreen:(BOOL)arg2;
- (void)_showStillWatchingAlertFeature:(id)arg1;
- (void)_updateTimeTriggeredFeature:(id)arg1 animated:(BOOL)arg2;
- (id)_stillWatchingAlertDurationOverride;
- (void)_configureStillWatchingFeatureMonitoringIfLivePlayback;
- (void)_handleTapGesture:(id)arg1;
- (void)_removeTappableViewForSkipButtonIfNeeded;
- (void)_addTappableViewToRemoveSkipButton;
- (void)_updateRequiresLinearPlayback;
- (void)_skipButtonTapped:(id)arg1;
- (void)_showSkipButtonWithTitle:(id)arg1 show:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_showTVRating:(BOOL)arg1 withImage:(id)arg2 animated:(BOOL)arg3;
- (void)_showOrUpdateTVRatingIfNeeded;
- (void)_updateTimeBoundFeature:(id)arg1 animated:(BOOL)arg2;
- (void)_addSkipInfoFeaturesFromMediaItem:(id)arg1;
- (void)_addRollsInfoFeaturesFromMediaItem:(id)arg1;
- (void)_addTVRatingFeatureFromMediaItem:(id)arg1;
- (void)_downloadRatingImageIfAvailable:(id)arg1;
- (void)_updateRollsInfoFromMainPlayersCurrentMediaItem;
- (void)_setExtrasButtonVisible:(BOOL)arg1;
- (void)_notifyAVPlayerViewControllerDisplaySize;
- (void)featureMonitor:(id)arg1 featureDidChangeState:(id)arg2 animated:(BOOL)arg3;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_registerApplicationNotifications;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)_externalPlaybackTypeDidChange:(id)arg1;
- (void)_playbackErrorDidOccur:(id)arg1;
- (void)_currentMediaItemDidChange:(id)arg1;
- (void)_playbackStateDidChange:(id)arg1;
- (void)extrasContext:(id)arg1 extrasVisibilityNeedsUpdate:(BOOL)arg2;
- (void)extrasContextDidLoadMainMenuItems:(id)arg1;
- (void)extrasContext:(id)arg1 hadFatalError:(id)arg2;
- (void)extrasRequestReloadWithContext:(id)arg1;
- (void)extrasBackButtonPressed;
- (void)extrasMenuItemSelected:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)extrasDoneButtonPressed;
- (void)extrasRequestsPlaybackStop;
- (void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2;
- (void)playerViewController:(id)arg1 contentViewWillTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
@property(readonly, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
@property(readonly, nonatomic) BOOL isPIPing;
@property(readonly, nonatomic) BOOL isPlaybackUIBeingShown;
@property(readonly, nonatomic) BOOL isFullscreenPlaybackUIBeingShown;
- (void)dismissPlaybackAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)presentExtrasWithURL:(id)arg1 storeID:(id)arg2 actionParams:(id)arg3 fromViewController:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)presentPlaylist:(id)arg1 fromViewController:(id)arg2 dismissalOperation:(long long)arg3 animated:(BOOL)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (id)init;

@end

