//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet, NSString;

@interface FCBundleSubscription : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isPurchaser;
    BOOL _isAmplifyUser;
    NSString *_bundlePurchaseID;
    NSSet *_bundleChannelIDs;
    NSUInteger _unprotectedSubscriptionState;
}

+ (BOOL)supportsSecureCoding;
+ (id)subscriptionWithSubscriptionState:(NSUInteger)arg1 bundleChannelIDs:(id)arg2;
@property(nonatomic) NSUInteger unprotectedSubscriptionState; // @synthesize unprotectedSubscriptionState=_unprotectedSubscriptionState;
@property(nonatomic) BOOL isAmplifyUser; // @synthesize isAmplifyUser=_isAmplifyUser;
@property(nonatomic) BOOL isPurchaser; // @synthesize isPurchaser=_isPurchaser;
@property(copy, nonatomic) NSSet *bundleChannelIDs; // @synthesize bundleChannelIDs=_bundleChannelIDs;
@property(copy, nonatomic) NSString *bundlePurchaseID; // @synthesize bundlePurchaseID=_bundlePurchaseID;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)containsTagID:(id)arg1;
@property(readonly, nonatomic) BOOL isSubscribed;
@property(readonly, nonatomic) NSUInteger subscriptionState;
- (id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 isAmplifyUser:(BOOL)arg5;
- (BOOL)containsHeadline:(id)arg1;

@end

