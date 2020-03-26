//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/WDChartDetailViewDataSource-Protocol.h>

@class HKSleepAnalysis, HKSleepDay, HKSleepPeriod;

__attribute__((visibility("hidden")))
@interface WDSleepDetailViewDurationDataSource : NSObject <WDChartDetailViewDataSource>
{
    HKSleepAnalysis *_sleepAnalysis;
    HKSleepDay *_sleepDay;
    HKSleepPeriod *_sleepPeriod;
}

@property(readonly, nonatomic) HKSleepPeriod *sleepPeriod; // @synthesize sleepPeriod=_sleepPeriod;
@property(readonly, nonatomic) HKSleepDay *sleepDay; // @synthesize sleepDay=_sleepDay;
@property(readonly, nonatomic) HKSleepAnalysis *sleepAnalysis; // @synthesize sleepAnalysis=_sleepAnalysis;
// - (void).cxx_destruct;
- (id)detailSectionForRow:(long long)arg1 column:(long long)arg2;
- (id)mainSection;
- (long long)numberOfColumnsForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSleepAnalysis:(id)arg1;

@end

