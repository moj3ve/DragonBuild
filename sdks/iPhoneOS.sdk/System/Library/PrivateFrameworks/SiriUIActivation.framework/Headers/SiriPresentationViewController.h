//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SiriUIActivation/AFUISiriLanguageDelegate-Protocol.h>
#import <SiriUIActivation/AFUISiriSetupViewControllerDelegate-Protocol.h>
#import <SiriUIActivation/AFUISiriViewControllerDataSource-Protocol.h>
#import <SiriUIActivation/AFUISiriViewControllerDelegate-Protocol.h>
#import <SiriUIActivation/SASStateChangeListener-Protocol.h>
#import <SiriUIActivation/SiriPresentation-Protocol.h>

@class AFConnection, AFQueue, AFRequestCompletionOptions, AFUISiriLanguage, AFUISiriSetupViewController, AFUISiriViewController, AFWatchdogTimer, BSServiceConnection, NSArray, NSDate, NSMutableDictionary, NSObject, NSString, NSTimer, UIScreen;
@protocol OS_dispatch_queue, SiriPresentationControllerDelegate, SiriPresentationIntentUsageDelegate;

@interface SiriPresentationViewController : UIViewController <SASStateChangeListener, AFUISiriLanguageDelegate, AFUISiriViewControllerDelegate, AFUISiriViewControllerDataSource, AFUISiriSetupViewControllerDelegate, SiriPresentation>
{
    long long _identifier;
    BOOL _delaySessionEndForTTS;
    NSDate *_lastGuideCheck;
    AFRequestCompletionOptions *_completionOptions;
    NSMutableDictionary *_activePresentationProperties;
    UIScreen *_activeScreen;
    BOOL _activationHandled;
    BOOL _isIdleAndQuiet;
    id /* CDUnknownBlockType */ _buttonTrigger;
    BOOL _receivedIncomingPhoneCall;
    NSObject<OS_dispatch_queue> *_watchdogQueue;
    BOOL _springBoardIdleTimerDisabled;
    BOOL _waitingForTelephonyToStart;
    BOOL _startGuidedAccessOnDismissal;
    BOOL _pocketStateKeptScreenOffDuringActivation;
    BOOL _buttonDownEventDidOccur;
    BOOL _predictedRecordRouteIsZLL;
//     struct os_unfair_lock_s _lock;
    long long identifier;
    id <SiriPresentationControllerDelegate> siriPresentationControllerDelegate;
    BSServiceConnection *_connection;
    AFConnection *_unownedConnection;
    NSDate *_lastAppUpdateTimestamp;
    double _buttonDownTimestamp;
    NSTimer *_carSiriButtonHoldToTalkTimer;
    double _carSiriButtonTimeInterval;
    NSArray *_contextAppInfosForSiriViewController;
    NSArray *_currentCarPlaySupportedOEMAppIdList;
    NSArray *_starkAppBundleIdentifierContext;
    NSUInteger _currentLockState;
    AFWatchdogTimer *_activationTimer;
    AFUISiriLanguage *_language;
    id <SiriPresentationIntentUsageDelegate> _intentUsageDelegate;
    NSTimer *_clearSiriViewControllerTimer;
    AFUISiriViewController *_siriViewController;
    AFUISiriSetupViewController *_siriSetupViewController;
    NSString *__currentTestName;
    NSString *__currentTestID;
    AFQueue *_testInputQueue;
    CGRect _hostedPresentationFrame;
}

+ (BOOL)testIsSyntheticActivation:(id)arg1;
+ (id)extractTestingInputsFromContext:(id)arg1;
@property(copy, nonatomic, getter=_testInputQueue) AFQueue *testInputQueue; // @synthesize testInputQueue=_testInputQueue;
@property(copy, nonatomic, setter=_setCurrentTestID:) NSString *_currentTestID; // @synthesize _currentTestID=__currentTestID;
@property(copy, nonatomic, setter=_setCurrentTestName:) NSString *_currentTestName; // @synthesize _currentTestName=__currentTestName;
@property(retain, nonatomic) AFUISiriSetupViewController *siriSetupViewController; // @synthesize siriSetupViewController=_siriSetupViewController;
@property(retain, nonatomic) AFUISiriViewController *siriViewController; // @synthesize siriViewController=_siriViewController;
@property(retain, nonatomic) NSTimer *clearSiriViewControllerTimer; // @synthesize clearSiriViewControllerTimer=_clearSiriViewControllerTimer;
@property(retain, nonatomic) id <SiriPresentationIntentUsageDelegate> intentUsageDelegate; // @synthesize intentUsageDelegate=_intentUsageDelegate;
@property(readonly, nonatomic, getter=_language) AFUISiriLanguage *language; // @synthesize language=_language;
@property(retain, nonatomic) AFWatchdogTimer *activationTimer; // @synthesize activationTimer=_activationTimer;
@property(nonatomic) NSUInteger currentLockState; // @synthesize currentLockState=_currentLockState;
@property(nonatomic) BOOL predictedRecordRouteIsZLL; // @synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL;
@property(retain, nonatomic) NSArray *starkAppBundleIdentifierContext; // @synthesize starkAppBundleIdentifierContext=_starkAppBundleIdentifierContext;
@property(retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList; // @synthesize currentCarPlaySupportedOEMAppIdList=_currentCarPlaySupportedOEMAppIdList;
@property(retain, nonatomic) NSArray *contextAppInfosForSiriViewController; // @synthesize contextAppInfosForSiriViewController=_contextAppInfosForSiriViewController;
@property(nonatomic, getter=_carSiriButtonTimeInterval, setter=_setCarSiriButtonTimeInterval:) double carSiriButtonTimeInterval; // @synthesize carSiriButtonTimeInterval=_carSiriButtonTimeInterval;
@property(retain, nonatomic, getter=_carSiriButtonHoldToTalkTimer, setter=_setCarSiriButtonHoldToTalkTimer:) NSTimer *carSiriButtonHoldToTalkTimer; // @synthesize carSiriButtonHoldToTalkTimer=_carSiriButtonHoldToTalkTimer;
@property(nonatomic, getter=_buttonDownTimestamp, setter=_setButtonDownTimestamp:) double buttonDownTimestamp; // @synthesize buttonDownTimestamp=_buttonDownTimestamp;
@property(nonatomic, getter=_buttonDownEventDidOccur, setter=_setButtonDownEventDidOccur:) BOOL buttonDownEventDidOccur; // @synthesize buttonDownEventDidOccur=_buttonDownEventDidOccur;
@property(nonatomic, getter=_pocketStateKeptScreenOffDuringActivation, setter=_setPocketStateKeptScreenOffDuringActivation:) BOOL pocketStateKeptScreenOffDuringActivation; // @synthesize pocketStateKeptScreenOffDuringActivation=_pocketStateKeptScreenOffDuringActivation;
@property(nonatomic, getter=_startGuidedAccessOnDismissal, setter=_setStartGuidedAccessOnDismissal:) BOOL startGuidedAccessOnDismissal; // @synthesize startGuidedAccessOnDismissal=_startGuidedAccessOnDismissal;
@property(nonatomic, getter=_isWaitingForTelephonyToStart, setter=_setWaitingForTelephonyToStart:) BOOL waitingForTelephonyToStart; // @synthesize waitingForTelephonyToStart=_waitingForTelephonyToStart;
@property(nonatomic, getter=_isSpringBoardIdleTimerDisabled, setter=_setSpringBoardIdleTimerDisabled:) BOOL springBoardIdleTimerDisabled; // @synthesize springBoardIdleTimerDisabled=_springBoardIdleTimerDisabled;
@property(retain, nonatomic, getter=_lastAppUpdateTimestamp, setter=_setLastAppUpdateTimestamp:) NSDate *lastAppUpdateTimestamp; // @synthesize lastAppUpdateTimestamp=_lastAppUpdateTimestamp;
@property(retain, nonatomic) AFConnection *unownedConnection; // @synthesize unownedConnection=_unownedConnection;
@property(nonatomic) CGRect hostedPresentationFrame; // @synthesize hostedPresentationFrame=_hostedPresentationFrame;
@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
// @property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) id <SiriPresentationControllerDelegate> siriPresentationControllerDelegate; // @synthesize siriPresentationControllerDelegate;
// - (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)_updateLanguageCode;
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1;
- (void)_watchdogQueue_stopActivationWatchdogTimerIfNeededThen:(id /* CDUnknownBlockType */)arg1 onQueue:(id)arg2;
- (void)stopActivationWatchdogTimerIfNeededThen:(id /* CDUnknownBlockType */)arg1 onQueue:(id)arg2;
- (void)_watchdogQueue_startActivationWatchdogTimer;
- (void)startActivationWatchdogTimer;
- (void)siriSetupViewControllerDidChangeVisibility:(id)arg1;
- (void)openSiriRequestedBySiriSetupViewController:(id)arg1;
- (void)disableSiriActivationRequestedBySiriSetupViewController:(id)arg1;
- (BOOL)siriSetupViewController:(id)arg1 openURL:(id)arg2;
- (void)dismissSiriSetupViewController:(id)arg1;
- (void)_removeSetupViewControllerIfNecessary;
- (void)_setupSiriViewControllerPresentedSuccessHandler;
- (void)_showSetupViewControllerIfNecessary;
- (void)callStateChangedToIsActive:(BOOL)arg1 isOutgoing:(BOOL)arg2;
- (BOOL)presentationHostedInSpringBoard;
- (void)_ttsQueueDidEmpty:(id)arg1;
- (void)_endDelayingSessionEndForTTS;
- (void)_beginDelayingSessionEndForTTS;
- (BOOL)_isDelayingSessionEnd;
- (void)extendCurrentTTSRequested;
- (void)_callIsActiveDidChangeNotification:(id)arg1;
- (void)_sendTelephonyHasStartedAfterDelay:(double)arg1;
- (void)_telephonyHasStarted;
- (BOOL)_cancelPendingPhoneCall;
- (void)_applicationsDidChange;
- (void)_checkForGuideUpdatesIfNecessary;
- (id)starkAppBundleIdentifierContextForSiriViewController:(id)arg1;
- (id)currentCarPlaySupportedOEMAppsForSiriViewController:(id)arg1;
- (id)contextAppInfosForSiriViewController:(id)arg1;
- (NSUInteger)lockStateForSiriViewController:(id)arg1;
- (id)siriViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
- (void)siriViewControllerSpeechRequestCancelledFromSiriOrb;
- (void)siriViewControllerSpeechRequestStartedFromSiriOrb;
- (void)siriViewController:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
- (id)bulletinsForSiriViewController:(id)arg1;
- (void)userRelevantEventDidOccurInSiriViewController:(id)arg1;
- (void)siriViewController:(id)arg1 presentedIntentWithBundleId:(id)arg2;
- (void)siriViewController:(id)arg1 didChangePresentationPeekMode:(NSUInteger)arg2;
- (void)siriViewController:(id)arg1 requestsDismissal:(id /* CDUnknownBlockType */)arg2;
- (void)siriViewController:(id)arg1 requestsPresentation:(id /* CDUnknownBlockType */)arg2;
- (void)siriViewController:(id)arg1 didCompleteRequestWithError:(id)arg2;
- (BOOL)siriViewControllerShouldSupportTextInput:(id)arg1;
- (void)siriViewController:(id)arg1 didHideStatusView:(BOOL)arg2;
- (BOOL)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)_openURL:(id)arg1 bundleId:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 punchoutStyle:(long long)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (BOOL)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
- (void)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
- (void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
- (void)siriViewControllerDidChangeVisibility:(id)arg1;
- (BOOL)siriViewControllerShouldEndSession:(id)arg1;
- (void)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(id /* CDUnknownBlockType */)arg5;
- (id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2;
- (void)startGuidedAccessForSiriViewController:(id)arg1;
- (void)dismissSiriViewController:(id)arg1 delayForTTS:(BOOL)arg2;
- (void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2;
- (void)siriViewControllerSessionDidResetContext:(id)arg1;
- (void)siriViewControllerDidFinishDismissing:(id)arg1;
- (void)_dismissDueToUnexpectedError:(id)arg1;
- (void)_enableSpringBoardIdleTimer;
- (BOOL)_isDeviceButton:(long long)arg1;
- (BOOL)_releaseExistingTrigger;
- (void)_siriDidOpenURL:(id)arg1;
- (void)_wasDismissed;
- (void)_dismissSiriSetup;
- (void)_handleContextClearForRequestOptions:(id)arg1;
- (void)_invalidateCarSiriButtonHoldToTalkTimer;
- (void)_finishClearingSiriViewController:(id)arg1;
- (void)_clearSiriViewController;
- (void)_cleanupUnownedConnection;
- (void)_processConnectionHouseKeeping;
- (void)_scheduleConnectionHouseKeepingAfterDelay:(double)arg1;
- (BOOL)siriViewControllerConfigured;
- (id)_createSiriViewControllerWithRequestOptions:(id)arg1;
- (void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
- (void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
- (void)bulletinManagerDidChangeBulletins;
- (BOOL)_buttonIdentifierIsHoldToTalkTrigger:(long long)arg1;
- (void)_cancelPendingActivationWithReason:(NSUInteger)arg1;
- (oneway void)cancelPendingActivationEventWithReason:(id)arg1;
- (void)_carSiriButtonHoldToTalkIntervalFiredWithButtonIdentifier:(long long)arg1;
- (void)_requestDismissal;
- (oneway void)updateCurrentLockState:(id)arg1;
- (oneway void)updateActiveInterfaceOrientation:(id)arg1 willAnimationWithDuration:(id)arg2;
- (BOOL)_handleTapDismissal:(long long)arg1;
- (BOOL)_handleTapButtonBehavior:(long long)arg1;
- (oneway void)handleButtonLongPressFromButtonIdentifier:(id)arg1 timestamp:(id)arg2;
- (oneway void)handleButtonTapFromButtonIdentifier:(id)arg1;
- (oneway void)handleButtonUpFromButtonIdentifier:(id)arg1 timestamp:(id)arg2;
- (oneway void)handleButtonDownFromButtonIdentifier:(id)arg1 timestamp:(id)arg2;
- (oneway void)cancelPreheat;
- (oneway void)preheat;
- (void)_setUpUnownedConnectionIfNecessary;
- (oneway void)cancelTTS;
- (oneway void)presentationDismissalRequestedWithOptions:(id)arg1;
- (id)_fallbackScreenForIdentifier:(long long)arg1;
- (CGRect)_fallbackFrameForScreen:(id)arg1 withIdentifier:(long long)arg2;
- (void)_updateActivePresentationPropertiesForPresentationIdentifier:(id)arg1;
- (id)_uiPresentationIdentifier;
- (void)activateWithSource:(long long)arg1 requestOptions:(id)arg2 timestamp:(id)arg3;
- (long long)viewModeForRequestOptions:(id)arg1;
- (void)activateWithSource:(long long)arg1 timestamp:(id)arg2;
- (void)activateWithRequestOptions:(id)arg1;
- (oneway void)handleRequestWithOptions:(id)arg1;
- (void)_presentationRequestedHandlerWithRequestOptions:(id)arg1;
- (void)_prepareSiriViewControllerWithRequestOptions:(id)arg1;
- (void)_activateWithRequestOptions:(id)arg1;
- (void)_presentSiriViewControllerWithPresentationOptions:(id)arg1 requestOptions:(id)arg2;
- (void)_updateHostedPresentationFrame;
- (oneway void)turnOnScreenAfterPocketStateFetch;
- (BOOL)_shouldShowSetupViewController;
- (void)_presentationRequestedWithPresentationOptions:(id)arg1 requestOptions:(id)arg2;
- (oneway void)presentationRequestedWithPresentationOptions:(id)arg1 requestOptions:(id)arg2;
- (BOOL)presentationisIdleAndQuiet;
- (void)animatedDisappearanceWithFactory:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)animatedAppearanceWithFactory:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isEnabled;
- (void)dismissWithOptions:(id)arg1;
- (void)dismiss;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier;
- (void)invalidate;
- (void)dealloc;
- (id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(CGRect)arg2;
- (id)initWithIdentifier:(long long)arg1;
- (long long)preferredFlamesViewFidelity;
- (void)prewarmFlamesViewShadersInBackgroundForScreen:(id)arg1 activeFrame:(CGRect)arg2;
- (id)_updateTestStartedTimeInTestOptions:(id)arg1 toTime:(id)arg2;
- (void)_enableAudioInjection:(BOOL)arg1 audioFiles:(id)arg2;
- (void)_removePreviousInjectAudioSettings;
- (void)_removePreviousConversationIfNeededWithTestName:(id)arg1 testOptions:(id)arg2;
- (void)_dismissTest:(id)arg1 afterTimeoutWithTestOptions:(id)arg2 finishTest:(BOOL)arg3;
- (void)_startUIRequestWithText:(id)arg1 testName:(id)arg2;
- (BOOL)_broadcastPlistDictionaryWithTestName:(id)arg1 testOptions:(id)arg2;
- (void)_runSyntheticButtonActivationTest;
- (void)_runSiriBringupCarPlayButtonToSpeechRecordingWithoutPrewarmTestWithTestName:(id)arg1 testOptions:(id)arg2;
- (void)_runSiriBringupNetworkEnabledTestWithTestName:(id)arg1 testOptions:(id)arg2 dismissUIAfterTimeout:(BOOL)arg3 finishTestAfterTimeout:(BOOL)arg4;
- (void)_runSiriBringupInjectAudioTestWithTestName:(id)arg1 testOptions:(id)arg2 dismissUIAfterTimeout:(BOOL)arg3 finishTestAfterTimeout:(BOOL)arg4;
- (void)_runSiriBringupToConversationMainTestWithTestName:(id)arg1 testOptions:(id)arg2;
- (void)_runSiriBringupToConversationTestWithTestName:(id)arg1 testOptions:(id)arg2;
- (void)_runSiriBringupSnippetTestWithTestName:(id)arg1 testOptions:(id)arg2 dismissUIAfterTimeout:(BOOL)arg3 finishTestAfterTimeout:(BOOL)arg4;
- (void)_runSiriBringupListeningStateTestWithTestName:(id)arg1 testOptions:(id)arg2;
- (id)_dequeueTestingInput;
- (BOOL)_hasTestingInput;
- (void)_enqueueTestInput:(id)arg1;
- (void)_clearAllTestingInputs;
- (BOOL)_handlePPTActivation:(id)arg1;
- (void)_processIncomingRequestOptionsForTestingPayload:(id)arg1;
- (void)siriViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;
- (void)siriViewController:(id)arg1 didFinishTest:(id)arg2;
- (void)siriViewController:(id)arg1 willStartTest:(id)arg2;
- (void)runTest:(id)arg1 testOptions:(id)arg2;

@end

