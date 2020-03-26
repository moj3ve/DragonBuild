//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class CLLocation, NSArray;

@interface HMDHomeLocationEvent : HMDLogEvent <HMDAWDLogEvent>
{
    NSArray *_tuples;
    CLLocation *_selectedHomeLocation;
    NSUInteger _numOfIterations;
    CLLocation *_nearestLOI;
}

+ (id)eventWithLocationTuples:(id)arg1 selectedHomeLocation:(id)arg2 numberOfIterations:(NSUInteger)arg3 nearestLOI:(id)arg4;
+ (id)uuid;
+ (void)initialize;
@property(retain, nonatomic) CLLocation *nearestLOI; // @synthesize nearestLOI=_nearestLOI;
@property(nonatomic) NSUInteger numOfIterations; // @synthesize numOfIterations=_numOfIterations;
@property(retain, nonatomic) CLLocation *selectedHomeLocation; // @synthesize selectedHomeLocation=_selectedHomeLocation;
@property(copy, nonatomic) NSArray *tuples; // @synthesize tuples=_tuples;
// - (void).cxx_destruct;
- (id)awdLocationFromLocationTuple:(id)arg1;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

@end

