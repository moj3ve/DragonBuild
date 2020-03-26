//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSDate;

@interface PGBestOfTimeMemoryTitleGenerator : PGTitleGenerator
{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _year;
}

@property(readonly, nonatomic) long long year; // @synthesize year=_year;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
// - (void).cxx_destruct;
- (id)_generateSubtitle;
- (id)_bestOfYearTitle;
- (id)_bestOfPastTimeTitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* CDUnknownBlockType */)arg1;
- (id)initWithYear:(long long)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

@end

