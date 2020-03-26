//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSync2Coordinator.h>

#import <CoreDuetSync/_CDRemoteUserContextServer-Protocol.h>
#import <CoreDuetSync/_DKSyncRemoteContextStorageDelegate-Protocol.h>

@class NSObject;
@protocol OS_os_transaction, _DKSyncRemoteContextStorage;

@interface _DKSync3Coordinator : _DKSync2Coordinator <_DKSyncRemoteContextStorageDelegate, _CDRemoteUserContextServer>
{
    NSUInteger _watchingDeviceTypes;
    NSObject<OS_os_transaction> *_watchingDevicesTransaction;
    id <_DKSyncRemoteContextStorage> _transportMDCSRapport;
}

@property(retain, nonatomic) id <_DKSyncRemoteContextStorage> transportMDCSRapport; // @synthesize transportMDCSRapport=_transportMDCSRapport;
// - (void).cxx_destruct;
- (void)handleContextChangedNotification:(id)arg1;
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;
- (id)multiDeviceContextStoreDevices;
- (void)start;
- (void)setupStorage;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)remoteContextStorage:(id)arg1 unsubscribeFromChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
- (void)remoteContextStorage:(id)arg1 subscribeToChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
- (void)remoteContextStorage:(id)arg1 registrationIdentifier:(id)arg2 setArchivedObjects:(id)arg3 peer:(id)arg4;
- (id)remoteContextStorage:(id)arg1 archivedObjectsForKeyPaths:(id)arg2;
- (BOOL)remoteContextStorage:(id)arg1 hasKnowledgeOfKeyPath:(id)arg2;
- (id)peersForContextStoreDeviceIDs:(id)arg1;
- (id)registrationIdentifierForPeer:(id)arg1 remoteRegistrationIdentifier:(id)arg2;
- (void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 keyPaths:(id)arg3;
- (void)setArchivedObjects:(id)arg1 peer:(id)arg2;
- (id)archivedObjectsForKeyPaths:(id)arg1;
- (id)keyPathsByDeviceIDFromRemoteKeyPaths:(id)arg1;
- (void)_requestActivateDevicesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)requestActivateDevicesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(NSUInteger)arg1 error:(id )arg2;
- (BOOL)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id )arg3;
- (BOOL)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id )arg3;
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(NSUInteger)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (id)sourceDeviceUUID;

@end

