//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class PETGoalConversionEventTracker;

@interface SBSystemHapticsPreferencesMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    PETGoalConversionEventTracker *_switchTracker;
}

// - (void).cxx_destruct;
- (BOOL)handleEvent:(NSUInteger)arg1 withContext:(id)arg2;
- (id)init;

@end

