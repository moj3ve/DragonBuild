//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSUUID;

@interface GEOComposedRouteTraffic : NSObject <NSSecureCoding>
{
    NSUUID *_routeID;
    NSArray *_trafficIncidents;
    NSArray *_trafficIncidentOffsets;
    NSData *_trafficColors;
    NSData *_trafficColorOffsets;
    NSArray *_enrouteNotices;
}

+ (id)trafficForNewAlternateRoute:(id)arg1 existingAlternateRoute:(id)arg2 incidents:(id)arg3;
+ (id)trafficForGEORoute:(id)arg1 routeInitializerData:(id)arg2 route:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *enrouteNotices; // @synthesize enrouteNotices=_enrouteNotices;
@property(retain, nonatomic) NSArray *trafficIncidentOffsets; // @synthesize trafficIncidentOffsets=_trafficIncidentOffsets;
@property(retain, nonatomic) NSArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property(readonly, nonatomic) NSUUID *routeID; // @synthesize routeID=_routeID;
// - (void).cxx_destruct;
- (id)_colorStringForIndex:(NSUInteger)arg1;
- (id)description;
- (id)enrouteNoticeWithIdentifier:(id)arg1;
- (void)createTrafficIncidentsForRoute:(id)arg1 initializerData:(id)arg2;
- (void)setRoute:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSUInteger trafficColorOffsetsCount;
@property(readonly, nonatomic) unsigned int trafficColorOffsets;
@property(readonly, nonatomic) NSUInteger trafficColorsCount;
@property(readonly, nonatomic) unsigned int trafficColors;
- (id)initWithRouteID:(id)arg1;

@end

