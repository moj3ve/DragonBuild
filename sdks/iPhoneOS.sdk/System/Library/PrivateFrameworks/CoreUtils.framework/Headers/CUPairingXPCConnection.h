//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUPairingDaemonXPCInterface-Protocol.h>

@class CUPairingDaemon, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUPairingXPCConnection : NSObject <CUPairingDaemonXPCInterface>
{
    CUPairingDaemon *_daemon;
    BOOL _pmEntitledDeleteIdentity;
    BOOL _pmEntitledHomeKit;
    BOOL _pmEntitledRead;
    BOOL _pmEntitledRemoveAdmin;
    BOOL _pmEntitledRemovePeer;
    BOOL _pmEntitledWrite;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _monitoring;
    NSXPCConnection *_xpcCnx;
}

// - (void).cxx_destruct;
- (void)startMonitoringWithOptions:(NSUInteger)arg1;
- (void)showWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)removePairedPeer:(id)arg1 options:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)savePairedPeer:(id)arg1 options:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)findPairedPeer:(id)arg1 options:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getPairedPeersWithOptions:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deletePairingIdentityWithOptions:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getPairingIdentityWithOptions:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (int)_entitled:(id)arg1 state:(BOOL )arg2 label:(id)arg3;
- (void)connectionInvalidated;

@end

