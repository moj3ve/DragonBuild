//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

@interface ICUserIdentity : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_deviceIdentifier;
    BOOL _allowsDelegation;
    BOOL _allowsAccountEstablishment;
    long long _type;
    NSUInteger _creationTime;
    NSNumber *_DSID;
}

+ (BOOL)supportsSecureCoding;
+ (id)specificAccountWithDSID:(id)arg1;
+ (id)nullIdentity;
+ (id)carrierBundleWithDeviceIdentifier:(id)arg1;
+ (id)autoupdatingActiveLockerAccount;
+ (id)autoupdatingActiveAccount;
+ (id)activeLockerAccount;
+ (id)activeAccount;
@property(readonly, copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(readonly, nonatomic) NSUInteger creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL allowsAccountEstablishment; // @synthesize allowsAccountEstablishment=_allowsAccountEstablishment;
@property(readonly, nonatomic) BOOL allowsDelegation; // @synthesize allowsDelegation=_allowsDelegation;
// - (void).cxx_destruct;
- (void)_resolveDSIDForEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqualToIdentity:(id)arg1;
- (void)_setResolvedDSID:(id)arg1;
- (id)identityAllowingEstablishment:(BOOL)arg1;
- (id)identityAllowingDelegation:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier;
- (id)init;

@end

