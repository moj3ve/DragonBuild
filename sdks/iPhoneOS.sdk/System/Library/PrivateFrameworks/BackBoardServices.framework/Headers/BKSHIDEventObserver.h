//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceConnection, NSMapTable, NSSet;
@protocol OS_dispatch_queue;

@interface BKSHIDEventObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
//     struct os_unfair_lock_s _lock;
    NSMapTable *_lock_deferringAssertionsToObservers;
    NSSet *_lock_deferringResolutions;
    BSServiceConnection *_connection;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)didUpdateDeferringResolutions:(id)arg1;
- (void)_lock_disableObservation;
- (void)_lock_enableObservation;
@property(readonly, nonatomic) NSSet *deferringResolutions; // @dynamic deferringResolutions;
- (id)addDeferringObserver:(id)arg1;
- (id)_init;
- (id)init;

@end

