//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCloudUserProvider-Protocol.h>

@class ACAccountStore, CRKCloudUser, CRKSecureCodedUserDefaultsObject, NSMutableDictionary;

@interface CRKSystemCloudUserProvider : NSObject <CRKCloudUserProvider>
{
    ACAccountStore *_store;
    CRKSecureCodedUserDefaultsObject *_persistedCloudUser;
    NSMutableDictionary *_isHSA2ByIdentifier;
    CRKCloudUser *_cloudUser;
}

@property(retain, nonatomic) CRKCloudUser *cloudUser; // @synthesize cloudUser=_cloudUser;
@property(readonly, nonatomic) NSMutableDictionary *isHSA2ByIdentifier; // @synthesize isHSA2ByIdentifier=_isHSA2ByIdentifier;
@property(readonly, nonatomic) CRKSecureCodedUserDefaultsObject *persistedCloudUser; // @synthesize persistedCloudUser=_persistedCloudUser;
@property(readonly, nonatomic) ACAccountStore *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (void)flushHSA2Cache;
- (BOOL)isAccountHSA2:(id)arg1;
- (id)uniqueKeyForAccount:(id)arg1;
- (id)cloudUserWithAccount:(id)arg1;
- (void)latchCloudUser:(id)arg1;
- (void)updateCloudUser;
- (void)updateCloudUserDebounced;
- (void)accountStoreDidChange:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)init;

@end

