//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol MTClock
@property(readonly, nonatomic) long long runMode;
- (void)stop;
- (void)start;
- (void)updateTime;

@optional
- (double)coarseUpdateInterval;
- (double)updateInterval;
- (void)updateTimeContinuously:(long long)arg1;
- (void)updateFlutter;
@end

