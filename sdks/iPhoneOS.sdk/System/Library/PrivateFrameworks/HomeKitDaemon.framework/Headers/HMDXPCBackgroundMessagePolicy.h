//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy
{
    BOOL _requiresEntitlement;
}

+ (id)policyWithEntitlementRequirement:(BOOL)arg1;
@property(readonly) BOOL requiresEntitlement; // @synthesize requiresEntitlement=_requiresEntitlement;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithEntitlementRequirement:(BOOL)arg1;
- (id)init;

@end

