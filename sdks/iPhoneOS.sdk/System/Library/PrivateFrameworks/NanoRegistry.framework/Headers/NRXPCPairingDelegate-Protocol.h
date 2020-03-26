//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary, NSNumber, NSString, NSUUID;

@protocol NRXPCPairingDelegate
- (void)xpcIsAssertionActive:(NSString *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)xpcIsPhoneReadyToMigrateDevice:(NSUUID *)arg1 withCompletion:(void (^)(NSUInteger, NSError *))arg2;
- (void)xpcGetInitialSyncCompletedForPairingID:(NSUUID *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)xpcGetMigrationCountForPairingID:(NSUUID *)arg1 completion:(void (^)(NSUInteger, NSError *))arg2;
- (void)xpcGetLastSwitchIndex:(void (^)(NSUInteger, NSError *))arg1;
- (void)xpcFakePairedSyncIsCompleteWithCompletion:(void (^)(NSError *))arg1;
- (void)xpcClearRecoveryFlagWithCompletion:(void (^)(NSError *))arg1;
- (void)xpcCheckIfFlaggedForRecoveryWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:(NSString *)arg1 completion:(void (^)(BOOL, NRWatchPairingExtendedMetadata *))arg2;
- (void)xpcKeepPhoneUnlockedInternalTestSPI:(void (^)(void))arg1;
- (void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(void (^)(NSString *))arg1;
- (void)xpcBeginMigrationWithDeviceID:(NSUUID *)arg1 passcode:(NSString *)arg2 withBlock:(void (^)(void))arg3;
- (void)xpcSetMigrationConsented:(BOOL)arg1 forDeviceID:(NSUUID *)arg2 withBlock:(void (^)(void))arg3;
- (void)xpcScanForMigratableWatchesWithBlock:(void (^)(void))arg1;
- (void)xpcStopWatchSetupPushWithBlock:(void (^)(void))arg1;
- (void)xpcStartWatchSetupPushWithBlock:(void (^)(void))arg1;
- (void)xpcPingActiveGizmoWithPriority:(int)arg1 withMessageSize:(NSUInteger)arg2 withBlock:(void (^)(BOOL, double, double))arg3;
- (void)xpcSubmitServerRequestReportWithRequestType:(NSString *)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3 block:(void (^)(void))arg4;
- (void)xpcPutMigrationChallengeCharacteristicWriteData:(NSData *)arg1 completion:(void (^)(BOOL))arg2;
- (void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(void (^)(NSData *))arg1;
- (void)xpcSwitchToSimulator:(NSUUID *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)xpcUnpairWithSimulator:(NSUUID *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)xpcPairWithSimulator:(NSUUID *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)xpcBeginMigrationWithCompletion:(void (^)(NSError *))arg1;
- (void)xpcBeginMigrationWithDeviceID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)xpcActiveDeviceAssertions:(void (^)(NSDictionary *))arg1;
- (void)xpcInvalidateSwitchAssertionWithIdentifier:(NSString *)arg1 block:(void (^)(NSError *))arg2;
- (void)xpcSwitchActiveDeviceWithDeviceID:(NSUUID *)arg1 withAssertionHandler:(void (^)(NSError *, NSString *))arg2;
- (void)xpcSwitchActiveDeviceWithDeviceID:(NSUUID *)arg1 isMagicSwitch:(BOOL)arg2 operationHasCompleted:(void (^)(NSError *))arg3;
- (void)xpcPairingClientDidEnterPhase:(NSString *)arg1 withBlock:(void (^)(void))arg2;
- (void)xpcSubmitAlbertPairingReport:(void (^)(void))arg1;
- (void)xpcTriggerVersion4Workaround;
- (void)xpcRetriggerUnpairInfoDialogWithBlock:(void (^)(void))arg1;
- (void)xpcResumePairingClientCrashMonitoring:(void (^)(void))arg1;
- (void)xpcSuspendPairingClientCrashMonitoring:(void (^)(void))arg1;
- (void)xpcPairingShouldContinue;
- (void)xpcUnpairWithDeviceID:(NSUUID *)arg1 withOptions:(NSDictionary *)arg2 operationHasBegun:(void (^)(NSError *))arg3;
- (void)xpcNotifyPasscode:(NSNumber *)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcNotifyActivationCompleted:(NSUUID *)arg1 withSuccess:(BOOL)arg2;
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcAbortPairingReason:(NSString *)arg1 withBlock:(void (^)(void))arg2;
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(NSString *)arg1 operationHasBegun:(void (^)(NSError *))arg2;
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(NSString *)arg1 operationHasBegun:(void (^)(NSError *))arg2;
- (void)xpcCompanionPasscodePairWithDeviceID:(NSUUID *)arg1 withOptions:(NSDictionary *)arg2 operationHasBegun:(void (^)(NSError *))arg3;
- (void)xpcCompanionOOBDiscoverAndPairWithName:(NSString *)arg1 withOutOfBandPairingKey:(NSData *)arg2 withOptions:(NSDictionary *)arg3 operationHasBegun:(void (^)(NSError *))arg4;
- (void)xpcEndDiscoveryWithBlock:(void (^)(void))arg1;
- (void)xpcBeginDiscoveryWithBlock:(void (^)(void))arg1;
@end

