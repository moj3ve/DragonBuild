//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCyclesDaemon/HDMCAnalysisManagerObserver-Protocol.h>
#import <HealthMenstrualCyclesDaemon/HKMCSettingsManagerObserver-Protocol.h>

@class HDMCAnalysisManager, HDProfile, HDRestorableAlarm, HKMCAnalysis, HKMCSettingsManager;
@protocol OS_dispatch_queue;

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver>
{
    HDProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _observingAnalysisUpdates;
    HKMCAnalysis *_lastAnalysis;
    HDRestorableAlarm *_scheduler;
}

@property(readonly, nonatomic) HDRestorableAlarm *scheduler; // @synthesize scheduler=_scheduler;
// - (void).cxx_destruct;
- (void)_queue_removeAllScheduledNotifications;
- (void)_queue_rescheduleNotificationsForAnalysis:(id)arg1;
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;
- (void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2;
- (id)scheduledNotificationsWithError:(id )arg1;
- (void)invalidate;
- (void)start;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3;

@end

