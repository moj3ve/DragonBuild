//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDate, NSDictionary, NSString;

@protocol MCXPCProtocol <NSObject>
- (void)managingOrganizationInformationWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)createMDMUnlockTokenIfNeededWithPasscode:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)isPasscodeCompliantWithNamedPolicy:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)mayShareToAirDropForOriginatingAppBundleID:(NSString *)arg1 originatingAccountIsManaged:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)mayShareToMessagesForOriginatingAppBundleID:(NSString *)arg1 originatingAccountIsManaged:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)cancelFeaturePromptWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)showFeaturePromptForSetting:(NSString *)arg1 configurationUUID:(NSString *)arg2 promptOptions:(NSDictionary *)arg3 promptIdentifier:(NSString *)arg4 completion:(void (^)(int, NSError *))arg5;
- (void)shutDownWithCompletion:(void (^)(NSError *))arg1;
- (void)recomputeProfileRestrictionsWithCompletionBlock:(void (^)(NSError *))arg1;
- (void)validateAppBundleIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setupAssistantDidFinishCompletion:(void (^)(NSError *))arg1;
- (void)hasMailAccountsWithFilteringEnabled:(BOOL)arg1 sourceAccountManagement:(int)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(NSArray *)arg1 hostAppBundleID:(NSString *)arg2 accountIsManaged:(BOOL)arg3 completion:(void (^)(NSArray *))arg4;
- (void)unstashWhitelistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)stashWhitelistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)unstashBlacklistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)stashBlacklistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)removeWebContentFilterUserBlacklistedURLString:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unstashUserBookmarksFromLabel:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)stashUserBookmarks:(NSArray *)arg1 withLabel:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)setUserBookmarks:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)storeActivationRecord:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createActivationLockBypassCodeWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)cloudConfigurationStoreDetails:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)cloudConfigurationMachineInfoDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)rereadManagedAppAttributesWithCompletion:(void (^)(NSError *))arg1;
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)profileDataStoredForPurpose:(int)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)storeProfileData:(NSData *)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(void (^)(NSError *))arg4;
- (void)removeExpiredProfilesWithCompletion:(void (^)(NSError *))arg1;
- (void)managedAppIDsWithFlags:(int)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)setUserInfo:(NSDictionary *)arg1 forClientUUID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)resetAllSettingsToDefaultsIsUserInitiated:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)recomputePerClientUserComplianceWithCompletion:(void (^)(NSError *))arg1;
- (void)recomputeUserComplianceWarningWithCompletion:(void (^)(NSError *))arg1;
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(NSDate *)arg1 completion:(void (^)(NSError *))arg2;
- (void)notifyStartComplianceTimer:(NSDate *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeProvisioningProfileWithUUID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)installProvisioningProfileData:(NSData *)arg1 managingProfileIdentifer:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)storeCertificateData:(NSData *)arg1 forIPCUIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)openSensitiveURL:(NSString *)arg1 unlock:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeValueSetting:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeBoolSetting:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setParametersForSettingsByType:(NSDictionary *)arg1 configurationUUID:(NSString *)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(NSString *)arg5 credentialSet:(NSData *)arg6 completion:(void (^)(NSError *))arg7;
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)managedWiFiNetworkNamesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)managedSystemConfigurationServiceIDsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)removeOrphanedClientRestrictionsWithCompletion:(void (^)(NSError *))arg1;
- (void)resetPasscodeMetadataWithCompletion:(void (^)(NSError *))arg1;
- (void)clearPasscodeWithEscrowKeybagData:(NSData *)arg1 secret:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)changePasscode:(NSString *)arg1 oldPasscode:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)applyRestrictionDictionary:(NSDictionary *)arg1 appsAndOptions:(NSArray *)arg2 clientType:(NSString *)arg3 clientUUID:(NSString *)arg4 localizedClientDescription:(NSString *)arg5 localizedWarningMessage:(NSString *)arg6 completion:(void (^)(BOOL, BOOL, NSError *))arg7;
- (void)removeProtectedProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeUninstalledProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 targetDeviceType:(NSUInteger)arg3 completion:(void (^)(NSError *))arg4;
- (void)removeProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateProfileIdentifier:(NSString *)arg1 interactive:(BOOL)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)peekProfileDataFromPurgatoryForDeviceType:(NSUInteger)arg1 withCompletion:(void (^)(NSData *, NSError *))arg2;
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)queueProfileDataForInstallation:(NSData *)arg1 originalFileName:(NSString *)arg2 originatingBundleID:(NSString *)arg3 transitionToUI:(BOOL)arg4 completion:(void (^)(NSString *, NSUInteger, NSError *))arg5;
- (void)installProfileData:(NSData *)arg1 interactive:(BOOL)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)isProfileInstalledWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *, BOOL))arg2;
- (void)defaultAppBundleIDForCommunicationServiceType:(NSString *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)notifyDeviceUnlockedWithCompletion:(void (^)(NSError *))arg1;
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(void (^)(NSError *))arg1;
- (void)waitForMigrationIncludingPostRestoreMigration:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)addBookmark:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addAllowedURLString:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setAllowedURLStrings:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setSpellCheckAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setKeyboardShortcutsAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setContinuousPathKeyboardAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setPredictiveKeyboardAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setSmartPunctuationAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setAutoCorrectionAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)allowedImportFromAppBundleIDs:(NSArray *)arg1 importingAppBundleID:(NSString *)arg2 importingIsManaged:(BOOL)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)allowedOpenInAppBundleIDs:(NSArray *)arg1 originatingAppBundleID:(NSString *)arg2 originatingIsManaged:(BOOL)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)checkCarrierProfileAndForceReinstallation:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)checkInWithCompletion:(void (^)(NSError *))arg1;
@end

