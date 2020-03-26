//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionManifest : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_actionComponentMapEntries;
    NSMutableArray *_searchAttributionSources;
    NSString *_sourceURL;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_timestamp:1;
        unsigned int read_actionComponentMapEntries:1;
        unsigned int read_searchAttributionSources:1;
        unsigned int read_sourceURL:1;
        unsigned int wrote_actionComponentMapEntries:1;
        unsigned int wrote_searchAttributionSources:1;
        unsigned int wrote_sourceURL:1;
        unsigned int wrote_timestamp:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)actionComponentMapEntriesType;
+ (Class)searchAttributionSourcesType;
// - (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) BOOL hasSourceURL;
- (void)_readSourceURL;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) double timestamp;
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
- (id)actionComponentMapEntriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)actionComponentMapEntriesCount;
- (void)_addNoFlagsActionComponentMapEntries:(id)arg1;
- (void)addActionComponentMapEntries:(id)arg1;
- (void)clearActionComponentMapEntries;
@property(retain, nonatomic) NSMutableArray *actionComponentMapEntries;
- (void)_readActionComponentMapEntries;
- (id)searchAttributionSourcesAtIndex:(NSUInteger)arg1;
- (NSUInteger)searchAttributionSourcesCount;
- (void)_addNoFlagsSearchAttributionSources:(id)arg1;
- (void)addSearchAttributionSources:(id)arg1;
- (void)clearSearchAttributionSources;
@property(retain, nonatomic) NSMutableArray *searchAttributionSources;
- (void)_readSearchAttributionSources;
- (id)initWithData:(id)arg1;
- (id)init;

@end

