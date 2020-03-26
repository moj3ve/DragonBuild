//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUPowerSourceMonitor, HKObserverSet;
@protocol OS_dispatch_queue;

@interface HDDevicePowerMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    CUPowerSourceMonitor *_monitor;
    BOOL _isCharging;
}

// - (void).cxx_destruct;
@property(readonly) BOOL primarySourceIsCharging;
- (void)_queue_updatePrimaryPowerSourceState:(int)arg1;
- (void)powerSource:(id)arg1 changed:(unsigned int)arg2;
- (void)powerSourceLost:(id)arg1;
- (void)powerSourceFound:(id)arg1;
- (void)removeDevicePowerObserver:(id)arg1;
- (void)addDevicePowerObserver:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

