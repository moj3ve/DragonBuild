//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppConduit/ACXDeviceConnectionDelegateProtocol-Protocol.h>

@class NSHashTable, NSXPCConnection;
@protocol ACXDeviceConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol>
{
    id <ACXDeviceConnectionDelegate> _delegate;
    NSXPCConnection *_xpcConnection;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_source> *_observerReEstablishTimer;
}

+ (void)_removeFilesAtURL:(id)arg1;
+ (void)performUninstallationCleanup;
+ (id)sharedDeviceConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *observerReEstablishTimer; // @synthesize observerReEstablishTimer=_observerReEstablishTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <ACXDeviceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)acknowledgeTestFlightInstallBegunForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 error:(id )arg3;
- (BOOL)installRequestFailedForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 failureReason:(id)arg3 wasUserInitiated:(BOOL)arg4 error:(id )arg5;
- (void)systemAppIsInstallableOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)systemAppIsInstallableOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchInstallableSystemAppWithBundleID:(id)arg1 onDeviceWithPairingID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchInstallableSystemAppWithBundleID:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)enumerateInstallableSystemAppsOnDeviceWithPairingID:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateInstallableSystemAppsOnPairedDevice:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)copyLocalizedValuesFromAllDevicesForInfoPlistKeys:(id)arg1 forAppWithBundleID:(id)arg2 fetchingFirstMatchingLocalizationInList:(id)arg3 error:(id )arg4;
- (BOOL)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:(id)arg1 returningDatabaseUUID:(id )arg2 lastSequenceNumber:(NSUInteger )arg3 error:(id )arg4;
- (BOOL)fetchApplicationDatabaseSyncInformationForPairedDevice:(id)arg1 returningDatabaseUUID:(id )arg2 lastSequenceNumber:(NSUInteger )arg3 error:(id )arg4;
- (void)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)applicationIsInstalledOnAnyPairedDeviceWithBundleID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withCompanionBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)applicationIsInstalledOnPairedDevice:(id)arg1 withCompanionBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)applicationIsInstalledOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 options:(NSUInteger)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)fetchApplicationOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchApplicationOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)enumerateLocallyAvailableApplicationsForDeviceWithPairingID:(id)arg1 options:(NSUInteger)arg2 withBlock:(id /* CDUnknownBlockType */)arg3;
- (void)enumerateLocallyAvailableApplicationsForPairedDevice:(id)arg1 options:(NSUInteger)arg2 withBlock:(id /* CDUnknownBlockType */)arg3;
- (void)enumerateInstalledApplicationsOnDeviceWithPairingID:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateInstalledApplicationsOnPairedDevice:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)cancelUpdatePendingForCompanionApp:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setUpdatePendingForCompanionApp:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 writingToPreferencesLocation:(NSUInteger)arg3 forPairedDevice:(id)arg4 options:(NSUInteger)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setAllExistingAppsShouldBeInstalled:(BOOL)arg1 forNewDevice:(id)arg2;
- (void)getAlwaysInstallWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2;
- (void)setAlwaysInstall:(id)arg1;
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)removeApplication:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)installApplicationAtURL:(id)arg1 onDeviceWithPairingID:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)installApplicationAtURL:(id)arg1 onPairedDevice:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(id /* CDUnknownBlockType */)arg3;
- (void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)installApplication:(id)arg1 completionWithError:(id /* CDUnknownBlockType */)arg2;
- (void)retryPendingAppInstallationsForPairedDevice:(id)arg1;
- (void)cancelPendingInstallations;
- (void)installAllApplications;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)activeComplicationsForPairedDevice:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)activeComplicationsWithErrorCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchInstalledComplicationsWithErrorCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchInstalledApplicationsWithErrorCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(NSUInteger)arg3;
- (void)updatedInstallStateForApplicationsWithInfo:(id)arg1;
- (id)_synchronousProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_proxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_invalidateXPCConnection;
- (void)_onQueue_reEstablishObserverConnectionIfNeeded;
- (id)init;
- (BOOL)_onQueue_createXPCConnectionIfNecessary;

@end

