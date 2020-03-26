//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLocalizedString, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPerformer : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_itunesId;
    NSString *_itunesUrl;
    GEOLocalizedString *_name;
    NSString *_performerId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_itunesId:1;
        unsigned int read_itunesUrl:1;
        unsigned int read_name:1;
        unsigned int read_performerId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_itunesId:1;
        unsigned int wrote_itunesUrl:1;
        unsigned int wrote_name:1;
        unsigned int wrote_performerId:1;
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
@property(retain, nonatomic) NSString *itunesUrl;
@property(readonly, nonatomic) BOOL hasItunesUrl;
- (void)_readItunesUrl;
@property(retain, nonatomic) NSString *itunesId;
@property(readonly, nonatomic) BOOL hasItunesId;
- (void)_readItunesId;
@property(retain, nonatomic) NSString *performerId;
@property(readonly, nonatomic) BOOL hasPerformerId;
- (void)_readPerformerId;
@property(retain, nonatomic) GEOLocalizedString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

