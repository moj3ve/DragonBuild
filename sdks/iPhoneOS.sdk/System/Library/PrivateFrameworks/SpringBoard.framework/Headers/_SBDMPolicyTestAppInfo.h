//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBApplicationInfo.h>

@interface _SBDMPolicyTestAppInfo : SBApplicationInfo
{
    BOOL _testAppBlocked;
}

@property(nonatomic) BOOL testAppBlocked; // @synthesize testAppBlocked=_testAppBlocked;
- (BOOL)isBlockedForScreenTimeExpiration;

@end

