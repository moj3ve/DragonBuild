//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDAutocompletePlaceContextMetadata, GEOPDSearchPlaceContextMetadata, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceContextMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompletePlaceContextMetadata *_autocompletePlaceContextMetadata;
    NSUInteger _muid;
    GEOPDSearchPlaceContextMetadata *_searchPlaceContextMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _placeContextMetadataType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_placeContextMetadataType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autocompletePlaceContextMetadata:1;
        unsigned int read_searchPlaceContextMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_autocompletePlaceContextMetadata:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_searchPlaceContextMetadata:1;
        unsigned int wrote_placeContextMetadataType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) GEOPDAutocompletePlaceContextMetadata *autocompletePlaceContextMetadata;
@property(readonly, nonatomic) BOOL hasAutocompletePlaceContextMetadata;
- (void)_readAutocompletePlaceContextMetadata;
@property(retain, nonatomic) GEOPDSearchPlaceContextMetadata *searchPlaceContextMetadata;
@property(readonly, nonatomic) BOOL hasSearchPlaceContextMetadata;
- (void)_readSearchPlaceContextMetadata;
- (int)StringAsPlaceContextMetadataType:(id)arg1;
- (id)placeContextMetadataTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceContextMetadataType;
@property(nonatomic) int placeContextMetadataType;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) NSUInteger muid;
- (id)initWithData:(id)arg1;
- (id)init;

@end

