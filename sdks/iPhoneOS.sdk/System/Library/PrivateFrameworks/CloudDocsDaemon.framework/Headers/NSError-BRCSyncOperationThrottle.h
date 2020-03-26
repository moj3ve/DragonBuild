//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (BRCSyncOperationThrottle)
+ (void)initialize;
+ (id)brc_daemonAccessDisabledError;
+ (id)brc_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;
- (int)brc_syncOperationErrorKind;
- (id)brc_description;
- (id)brc_wrappedError;
- (id)brc_strippedError;
- (BOOL)brc_isCloudKitPCSDecryptionFailure;
- (id)brc_staleUpdateRecordIDs;
- (BOOL)brc_isCloudKitErrorNeedsPCSPrep;
- (BOOL)brc_isCloudKitErrorZoneMigrated;
- (BOOL)brc_isCloudKitErrorZoneUndergoingMigration;
- (BOOL)brc_isCloudKitErrorImplyingZoneNeedsCreation;
- (BOOL)_brc_isCloudKitZoneUserDeletedError;
- (BOOL)_brc_isCloudKitZoneNotFoundError;
- (BOOL)brc_isOutOfSpaceError;
- (BOOL)brc_isBlacklistError;
- (BOOL)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;
- (BOOL)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;
- (BOOL)brc_isCloudKitErrorRequiringSkipThrottling;
- (BOOL)brc_isIndividualItemBlacklistError;
- (BOOL)brc_isCloudKitErrorChainedToNewParent:(id )arg1;
- (BOOL)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id )arg1;
- (BOOL)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id )arg1;
- (id)_brc_cloudKitPluginErrorPayload;
- (BOOL)_brc_isCloudKitPluginErrorCode:(long long)arg1;
- (BOOL)brc_isCloudKitErrorRequiringAssetReupload;
- (BOOL)brc_isCloudKitErrorRequiringAssetRescan;
- (BOOL)brc_isCloudKitUnknownItemError;
- (BOOL)brc_isCloudKitPCSError;
- (BOOL)brc_isCloudKitAtomicFailure;
- (BOOL)brc_isBatchRequestFailed;
- (BOOL)brc_isCloudKitOutOfQuota;
- (BOOL)brc_isCloudKitAssetFileModified;
- (BOOL)brc_isCloudKitCancellationError;
- (id)brc_cloudKitErrorForZone:(id)arg1;
- (id)brc_cloudKitErrorForRecordID:(id)arg1;
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;
- (id)br_cloudKitErrorForIdentifier:(id)arg1;
- (BOOL)brc_containsCloudKitInternalErrorCode:(long long)arg1;
- (BOOL)_brc_isCloudKitInternalErrorCode:(long long)arg1;
- (id)_brc_cloudKitInternalWithErrorCode:(long long)arg1;
- (BOOL)brc_containsCloudKitErrorCode:(long long)arg1;
- (BOOL)_brc_isCloudKitErrorCode:(long long)arg1;
- (BOOL)brc_checkErrorsFromCloudKit:(id /* CDUnknownBlockType */)arg1;
- (BOOL)brc_isEverRetriable;
- (BOOL)brc_isUserInitiatedRetriable;
- (BOOL)brc_isRetriable;
- (double)br_suggestedRetryTimeInterval;
- (NSUInteger)brc_containerResetErrorForSharedZone:(BOOL)arg1 resetReason:(const char )arg2;
- (BOOL)brc_isResetError;
@end

