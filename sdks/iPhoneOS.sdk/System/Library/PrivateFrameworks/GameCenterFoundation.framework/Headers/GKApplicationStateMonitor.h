//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor;

@interface GKApplicationStateMonitor : NSObject
{
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

@property(retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
- (void)startObservingStateChangesForBundleID:(id)arg1;
- (BOOL)observingStateChangesForBundleID:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handler;
- (void)dealloc;
- (id)init;

@end

