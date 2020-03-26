//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppleAccount-Protocol.h>

@class ACAccount, ACAccountStore, NSArray, NSString;

@interface FCAppleAccount : NSObject <FCAppleAccount>
{
    BOOL _runningPPT;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
    ACAccount *_iTunesAccount;
    NSString *_DSID;
    NSString *_userStoreFrontID;
    NSString *_contentStoreFrontID;
    NSString *_overrideContentStoreFrontID;
}

+ (id)sharedAccount;
+ (void)enableStoreFrontLocking;
@property(copy, nonatomic) NSString *overrideContentStoreFrontID; // @synthesize overrideContentStoreFrontID=_overrideContentStoreFrontID;
@property(copy, nonatomic) NSString *contentStoreFrontID; // @synthesize contentStoreFrontID=_contentStoreFrontID;
@property(copy, nonatomic) NSString *userStoreFrontID; // @synthesize userStoreFrontID=_userStoreFrontID;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(retain) ACAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property(retain) ACAccount *primaryAccount; // @synthesize primaryAccount=_primaryAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(getter=isRunningPPT) BOOL runningPPT; // @synthesize runningPPT=_runningPPT;
// - (void).cxx_destruct;
- (void)t_stopOverridingContentStoreFrontID;
- (void)t_startOverridingContentStoreFrontID:(id)arg1;
- (void)_reloadAccountsFromAccountStore;
- (void)_accountStoreDidChange;
- (void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(BOOL)arg1;
@property(readonly, nonatomic) ACAccount *activeiTunesAccount;
- (void)checkAllDevicesRunningMinimumiOSVersion:(CDStruct_912cb5d2)arg1 macOSVersion:(CDStruct_912cb5d2)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(CDStruct_912cb5d2)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)loadStoreFrontWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)currentStoreFrontID;
@property(readonly, nonatomic) NSString *primaryLanguageCode;
@property(readonly, nonatomic) NSArray *supportedLanguageCodes;
@property(readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, nonatomic) BOOL isContentStoreFrontSupported;
- (void)reloadiTunesAccount;
- (BOOL)isUserSignedIntoiTunes;
- (id)iCloudAccountDSID;
- (id)iTunesAccountDSID;
- (id)iTunesAccountName;
@property(readonly, nonatomic) NSString *endpointConnectionClientID;
- (BOOL)isPrimaryAccountEmailAddress;
@property(readonly, nonatomic, getter=isUserSignedInToiCloud) BOOL userSignedInToiCloud;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled;
- (id)init;

@end

