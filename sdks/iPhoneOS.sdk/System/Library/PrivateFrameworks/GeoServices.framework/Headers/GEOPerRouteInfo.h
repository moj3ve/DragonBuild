//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface GEOPerRouteInfo : PBCodable <NSCopying>
{
    struct GEOSessionID _routeUuid;
    NSUInteger _etaServiceTravelTime;
    NSUInteger _originalTravelTime;
    struct {
        unsigned int has_routeUuid:1;
        unsigned int has_etaServiceTravelTime:1;
        unsigned int has_originalTravelTime:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRouteUuid;
@property(nonatomic) struct GEOSessionID routeUuid;
@property(nonatomic) BOOL hasEtaServiceTravelTime;
@property(nonatomic) NSUInteger etaServiceTravelTime;
@property(nonatomic) BOOL hasOriginalTravelTime;
@property(nonatomic) NSUInteger originalTravelTime;

@end

