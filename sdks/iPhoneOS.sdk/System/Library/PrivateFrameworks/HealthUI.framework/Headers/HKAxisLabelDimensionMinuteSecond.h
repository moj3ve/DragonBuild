//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKAxisLabelDimensionScalar.h>

@class NSDate, NSDateFormatter;

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar
{
    NSDateFormatter *_dateFormatter;
    NSDate *_startDate;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
// - (void).cxx_destruct;
- (id)stringForLocation:(id)arg1;
- (id)initWithStartDate:(id)arg1;

@end

