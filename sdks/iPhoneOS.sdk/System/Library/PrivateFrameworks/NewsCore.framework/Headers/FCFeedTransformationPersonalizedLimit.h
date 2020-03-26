//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedLimit : NSObject <FCFeedTransforming>
{
    id <FCFeedPersonalizing> _feedPersonalizer;
    double _timeInterval;
}

+ (id)transformationWithPersonalizer:(id)arg1 timeInterval:(double)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 dateRange:(id)arg2;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
// - (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

@end

