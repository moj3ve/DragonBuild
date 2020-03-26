//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, NSDictionary;

@interface PGMeaningfulEventAggregationMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSUInteger _numberOfUntimelyRejects;
    NSUInteger _extendedMeaning;
    NSDictionary *_graphRequiredCriteriaByIdentifier;
    NSDate *_lowerBoundLocalDate;
    NSUInteger _eventType;
    NSUInteger _meaning;
}

+ (id)_mostSpecificLabelForMeaning:(NSUInteger)arg1;
@property(nonatomic) NSUInteger meaning; // @synthesize meaning=_meaning;
@property(nonatomic) NSUInteger eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSDate *lowerBoundLocalDate; // @synthesize lowerBoundLocalDate=_lowerBoundLocalDate;
// - (void).cxx_destruct;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forAreaNode:(id)arg3;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forCityNode:(id)arg3;
- (id)_filterAssets:(id)arg1 withPositiveLocations:(id)arg2 negativeLocations:(id)arg3 maximumDistance:(double)arg4;
- (id)_filterAssets:(id)arg1 withLocation:(id)arg2;
- (BOOL)_computeRelevantAssetsForPotentialMemory:(id)arg1;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_expandedPotentialMemoriesFromPotentialMemory:(id)arg1;
- (id)_potentialOverTheYearsMemoriesForMeaning:(NSUInteger)arg1;
- (BOOL)_canMakeMemoryWithMeaningfulEvents:(id)arg1 forMeaning:(NSUInteger)arg2 isOverTheYears:(BOOL)arg3;
- (id)_stringForExtendedMeaning:(NSUInteger)arg1;
- (BOOL)_supportsAggregationsForMeaning:(NSUInteger)arg1 primaryFeatureType:(NSUInteger)arg2 secondaryFeatureType:(NSUInteger)arg3;
- (NSUInteger)_extendedMeaningForActivityEvent:(id)arg1;
- (NSUInteger)_extendedMeaningForRestaurantEvent:(id)arg1;
- (NSUInteger)_extendedMeaningForMeaning:(NSUInteger)arg1 meaningfulEvent:(id)arg2;
- (id)_extraFeatureNodesFromMeaningfulEvent:(id)arg1 meaning:(NSUInteger)arg2 featureType:(NSUInteger)arg3;
- (id)_nodesWithFeaturesOfType:(NSUInteger)arg1 fromMeaningfulEvent:(id)arg2;

@end

