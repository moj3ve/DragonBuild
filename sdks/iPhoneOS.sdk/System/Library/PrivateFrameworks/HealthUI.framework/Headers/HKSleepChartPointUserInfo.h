//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinateInfo-Protocol.h>
#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class HKSleepDay, NSArray, NSDate;

@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData>
{
    NSArray *_titles;
    NSArray *_values;
    NSDate *_date;
    HKSleepDay *_sleepDay;
}

@property(retain, nonatomic) HKSleepDay *sleepDay; // @synthesize sleepDay=_sleepDay;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfColumns;

@end

