//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLocation, GEOMapRegion, GEOPlaceSearchRequest, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapQuery : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    struct GEOSessionID _sessionID;
    GEOMapRegion *_mapRegion;
    GEOPlaceSearchRequest *_placeSearchRequest;
    NSString *_query;
    GEOLocation *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _clientImgFmt;
    int _clientImgMaxHeight;
    int _clientImgMaxWidth;
    int _mapCenterX;
    int _mapCenterY;
    int _mapSpanX;
    int _mapSpanY;
    int _requestType;
    int _tilesizeX;
    int _tilesizeY;
    int _zoomlevel;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_clientImgFmt:1;
        unsigned int has_clientImgMaxHeight:1;
        unsigned int has_clientImgMaxWidth:1;
        unsigned int has_mapCenterX:1;
        unsigned int has_mapCenterY:1;
        unsigned int has_mapSpanX:1;
        unsigned int has_mapSpanY:1;
        unsigned int has_requestType:1;
        unsigned int has_tilesizeX:1;
        unsigned int has_tilesizeY:1;
        unsigned int has_zoomlevel:1;
        unsigned int read_mapRegion:1;
        unsigned int read_placeSearchRequest:1;
        unsigned int read_query:1;
        unsigned int read_userLocation:1;
        unsigned int wrote_sessionID:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_placeSearchRequest:1;
        unsigned int wrote_query:1;
        unsigned int wrote_userLocation:1;
        unsigned int wrote_clientImgFmt:1;
        unsigned int wrote_clientImgMaxHeight:1;
        unsigned int wrote_clientImgMaxWidth:1;
        unsigned int wrote_mapCenterX:1;
        unsigned int wrote_mapCenterY:1;
        unsigned int wrote_mapSpanX:1;
        unsigned int wrote_mapSpanY:1;
        unsigned int wrote_requestType:1;
        unsigned int wrote_tilesizeX:1;
        unsigned int wrote_tilesizeY:1;
        unsigned int wrote_zoomlevel:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
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
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;
@property(readonly, nonatomic) BOOL hasPlaceSearchRequest;
- (void)_readPlaceSearchRequest;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;
@property(retain, nonatomic) GEOLocation *userLocation;
@property(readonly, nonatomic) BOOL hasUserLocation;
- (void)_readUserLocation;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) BOOL hasMapRegion;
- (void)_readMapRegion;
@property(nonatomic) BOOL hasClientImgMaxHeight;
@property(nonatomic) int clientImgMaxHeight;
@property(nonatomic) BOOL hasClientImgMaxWidth;
@property(nonatomic) int clientImgMaxWidth;
@property(nonatomic) BOOL hasTilesizeY;
@property(nonatomic) int tilesizeY;
@property(nonatomic) BOOL hasTilesizeX;
@property(nonatomic) int tilesizeX;
- (int)StringAsClientImgFmt:(id)arg1;
- (id)clientImgFmtAsString:(int)arg1;
@property(nonatomic) BOOL hasClientImgFmt;
@property(nonatomic) int clientImgFmt;
@property(nonatomic) BOOL hasZoomlevel;
@property(nonatomic) int zoomlevel;
@property(nonatomic) BOOL hasMapSpanY;
@property(nonatomic) int mapSpanY;
@property(nonatomic) BOOL hasMapSpanX;
@property(nonatomic) int mapSpanX;
@property(nonatomic) BOOL hasMapCenterY;
@property(nonatomic) int mapCenterY;
@property(nonatomic) BOOL hasMapCenterX;
@property(nonatomic) int mapCenterX;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestType;
@property(nonatomic) int requestType;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)_readQuery;
- (id)initWithData:(id)arg1;
- (id)init;

@end

