//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol GEOVenueFloorInfo;

@protocol GEOVenueComponentIdentifier <NSObject>
@property(readonly, nonatomic) NSUInteger fixtureID;
@property(readonly, nonatomic, getter=_hasFixtureID) BOOL hasFixtureID;
@property(readonly, nonatomic) NSUInteger unitID;
@property(readonly, nonatomic, getter=_hasUnitID) BOOL hasUnitID;
@property(readonly, nonatomic) NSArray *sectionIDs;
@property(readonly, nonatomic) id <GEOVenueFloorInfo> floorInfo;
@property(readonly, nonatomic) NSUInteger buildingID;
@property(readonly, nonatomic, getter=_hasBuildingID) BOOL hasBuildingID;
@end

