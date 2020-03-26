//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceProxy-Protocol.h>

@class MNSettings, NSHashTable, NSMutableArray, NSXPCConnection;
@protocol MNNavigationServiceClientInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceProxy>
{
    BOOL _applicationActive;
    NSXPCConnection *_connection;
    MNSettings *_settings;
    NSHashTable *_clients;
    NSMutableArray *_interruptionDates;
    BOOL _isReconnecting;
    id /* CDUnknownBlockType */ _predictionHandler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _sandboxHandle;
    id <MNNavigationServiceClientInterface> _delegate;
}

@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)checkinForNavigationService:(id /* CDUnknownBlockType */)arg1;
- (void)updateGuidanceWithData:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)interfaceHashesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(NSUInteger)arg1 forLegIndex:(NSUInteger)arg2;
- (void)setDisplayedStepIndex:(NSUInteger)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(NSUInteger)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)changeSettings:(id)arg1;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)switchToRoute:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinationsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)stopNavigation;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(id /* CDUnknownBlockType */)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(NSUInteger)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_releaseSandboxExtension;
- (void)_consumeSandboxExtension:(char )arg1;
- (id)_remoteObjectProxy;
- (void)_closeConnection;
- (BOOL)_shouldReconnectWithInterruptionOnDate:(id)arg1;
- (void)_restoreIdleConnection;
- (void)_restoreNavigationSession;
- (void)_restorePredictionSession;
- (void)_handleInterruption;
- (void)_openConnection;
- (void)_updateConnection;
@property(readonly, nonatomic) NSUInteger clientCount;
@property(readonly, nonatomic) NSUInteger interruptionCount;
- (BOOL)isOpenForClient:(id)arg1;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (void)dealloc;
- (id)init;

@end

