//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>
#import <FrontBoardServices/FBSServiceFacilityClientConfiguring-Protocol.h>
#import <FrontBoardServices/FBSServiceFacilityClientMessaging-Protocol.h>

@class BSServiceConnection, BSServiceConnectionEndpoint, BSServiceInterface, BSServiceQuality, NSString;
@protocol OS_dispatch_queue;

@interface FBSServiceFacilityClient : NSObject <FBSServiceFacilityClientConfiguring, FBSServiceFacilityClientMessaging, BSInvalidatable>
{
    BSServiceConnectionEndpoint *_endpoint;
    NSString *_facilityID;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    id _configOnly_interfaceTarget;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _configured;
//     struct os_unfair_lock_s _lock;
    BSServiceConnection *_lock_connection;
    BOOL _lock_connectionDenied;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    BOOL _uisHack;
}

+ (id)defaultShellEndpoint;
@property(readonly, nonatomic, getter=isConfigured) BOOL configured; // @synthesize configured=_configured;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, nonatomic) BSServiceQuality *serviceQuality; // @synthesize serviceQuality=_serviceQuality;
// - (void).cxx_destruct;
- (void)_queue_handleMessage:(id)arg1;
- (void)_queue_handleError:(id)arg1;
- (void)_lock_activate;
- (void)_lock_invalidate;
- (BOOL)_isValid;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(id /* CDUnknownBlockType */)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;
- (void)sendMessage:(id)arg1 withType:(long long)arg2;
- (void)handleError:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)configureConnectMessage:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)activate;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)dealloc;
- (id)initWithConfigurator:(id /* CDUnknownBlockType */)arg1;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;
- (id)init;

@end

