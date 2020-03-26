//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>
#import <RunningBoard/RBEntitlementPossessing-Protocol.h>

@class NSSet, NSString;

@interface RBEntitlements : NSObject <BSDescriptionProviding, RBEntitlementPossessing>
{
    NSSet *_entitlements;
}

// - (void).cxx_destruct;
- (id)_entitlementsForOption:(NSUInteger)arg1;
- (id)_entitlementsForOptions:(NSUInteger)arg1;
- (id)_initWithEntitlements:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)hasEntitlementDomain:(NSUInteger)arg1;
- (BOOL)hasEntitlement:(id)arg1;
- (id)init;

@end

