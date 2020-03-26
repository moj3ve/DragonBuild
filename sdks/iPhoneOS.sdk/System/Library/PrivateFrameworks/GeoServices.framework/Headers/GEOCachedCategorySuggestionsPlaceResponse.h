//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDPlaceResponse, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_countryCode;
    NSString *_language;
    GEOPDPlaceResponse *_response;
    NSString *_sourceURL;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_timestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countryCode:1;
        unsigned int read_language:1;
        unsigned int read_response:1;
        unsigned int read_sourceURL:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_countryCode:1;
        unsigned int wrote_language:1;
        unsigned int wrote_response:1;
        unsigned int wrote_sourceURL:1;
        unsigned int wrote_timestamp:1;
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
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *language;
@property(readonly, nonatomic) BOOL hasLanguage;
- (void)_readLanguage;
@property(retain, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) BOOL hasCountryCode;
- (void)_readCountryCode;
@property(retain, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) BOOL hasSourceURL;
- (void)_readSourceURL;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) double timestamp;
@property(retain, nonatomic) GEOPDPlaceResponse *response;
@property(readonly, nonatomic) BOOL hasResponse;
- (void)_readResponse;
- (id)initWithData:(id)arg1;
- (id)init;

@end

