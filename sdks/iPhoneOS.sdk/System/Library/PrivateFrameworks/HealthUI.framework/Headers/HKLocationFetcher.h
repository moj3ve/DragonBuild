//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, _HKLocationShifter, _HKWorkoutRouteStore;

@interface HKLocationFetcher : NSObject
{
    _HKLocationShifter *_shifter;
    _HKWorkoutRouteStore *_routesStore;
    HKHealthStore *_healthStore;
    HKAnchoredObjectQuery *_routesQuery;
}

@property(retain, nonatomic) HKAnchoredObjectQuery *routesQuery; // @synthesize routesQuery=_routesQuery;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) _HKWorkoutRouteStore *routesStore; // @synthesize routesStore=_routesStore;
@property(retain, nonatomic) _HKLocationShifter *shifter; // @synthesize shifter=_shifter;
// - (void).cxx_destruct;
- (id)_workoutRoutesQueryForWorkout:(id)arg1 withUpdateHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchRoutesFromWorkout:(id)arg1 withUpdateHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_handleAndShiftLocations:(id)arg1 forWorkout:(id)arg2 withSamplesHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_routesAreSmoothed:(id)arg1;
- (void)fetchLocationsFromWorkout:(id)arg1 applyThreshold:(BOOL)arg2 withSamplesHandler:(id /* CDUnknownBlockType */)arg3;
- (void)fetchLocationsFromWorkout:(id)arg1 withSamplesHandler:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;

@end

