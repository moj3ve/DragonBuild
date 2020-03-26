//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, PSSSSubscriptionManagerInternal;

@interface WBSParsecSubscriptionManager : NSObject
{
    PSSSSubscriptionManagerInternal *_thirdPartySubscriptionManager;
    NSMutableDictionary *_subscriptionsByProvider;
    BOOL _needsUpdate;
}

+ (id)sharedManager;
@property(readonly, nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
// - (void).cxx_destruct;
- (void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3;
- (void)_updateAppleMusicSubscription;
- (id)_init;
- (void)removeSubscriptionsAddedAfterDate:(id)arg1;
- (void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2;
- (void)updateSubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3;
@property(readonly, nonatomic) NSArray *subscriptionDictionaries;
- (id)init;

@end

