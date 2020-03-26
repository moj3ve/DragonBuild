//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDSiriAccessoryMonitor;

@protocol HMDSiriAccessoryMonitorDelegate
- (void)monitorHasNoAccessoriesForDragonSiri:(HMDSiriAccessoryMonitor *)arg1;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 willNotAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 willAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 needsSiriCapabilityForAccessory:(id)arg2;
@end

