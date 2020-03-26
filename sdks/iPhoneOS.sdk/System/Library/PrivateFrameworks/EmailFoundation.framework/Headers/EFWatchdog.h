//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFLoggable-Protocol.h>
#import <EmailFoundation/SBSApplicationUserQuitMonitorDelegate-Protocol.h>

@class NSString, SBSApplicationUserQuitMonitor;

@interface EFWatchdog : NSObject <EFLoggable, SBSApplicationUserQuitMonitorDelegate>
{
    SBSApplicationUserQuitMonitor *_monitor;
    NSString *_monitoredBundleIdentifier;
}

+ (id)log;
@property(readonly, copy, nonatomic) NSString *monitoredBundleIdentifier; // @synthesize monitoredBundleIdentifier=_monitoredBundleIdentifier;
// - (void).cxx_destruct;
- (void)quitMonitor:(id)arg1 userClosedLastSceneOfApplicationWithBundleID:(id)arg2;
- (void)invalidate;
- (void)start;
- (id)initWithMonitoredBundleIdentifier:(id)arg1;

@end

