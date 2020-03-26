//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebLowPowerModeObserver : NSObject
{
    BOOL _isLowPowerModeEnabled;
    struct LowPowerModeNotifier _notifier;
}

@property(readonly, nonatomic) BOOL isLowPowerModeEnabled; // @synthesize isLowPowerModeEnabled=_isLowPowerModeEnabled;
@property(nonatomic) struct LowPowerModeNotifier notifier; // @synthesize notifier=_notifier;
- (void)_didReceiveLowPowerModeChange;
- (void)dealloc;
- (id)initWithNotifier:(struct LowPowerModeNotifier )arg1;

@end

