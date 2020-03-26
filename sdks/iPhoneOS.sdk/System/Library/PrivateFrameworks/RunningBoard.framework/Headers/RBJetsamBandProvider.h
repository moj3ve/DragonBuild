//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBJetsamBandProviding-Protocol.h>

@protocol RBEntitlementManaging;

@interface RBJetsamBandProvider : NSObject <RBJetsamBandProviding>
{
    id <RBEntitlementManaging> _entitlementManager;
}

// - (void).cxx_destruct;
- (int)_foregroundJetsamPriorityForProcess:(id)arg1 state:(id)arg2;
- (int)_backgroundJetsamPriorityForProcess:(id)arg1 state:(id)arg2;
- (int)_inactiveJetsamPriorityForProcess:(id)arg1 state:(id)arg2;
- (int)defaultPriorityForProcess:(id)arg1 inBand:(unsigned char)arg2;
- (int)jetsamPriorityForProcess:(id)arg1 withState:(id)arg2;
- (id)initWithEntitlementManager:(id)arg1;
- (id)init;

@end

