//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOTrafficSnapshotMetaData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficTrafficSnapshot : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_colors;
    NSMutableArray *_incidents;
    NSUInteger _receivedTime;
    GEOTrafficSnapshotMetaData *_snapshotMetaData;
    NSMutableArray *_speeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_receivedTime:1;
        unsigned int read_colors:1;
        unsigned int read_incidents:1;
        unsigned int read_snapshotMetaData:1;
        unsigned int read_speeds:1;
        unsigned int wrote_colors:1;
        unsigned int wrote_incidents:1;
        unsigned int wrote_receivedTime:1;
        unsigned int wrote_snapshotMetaData:1;
        unsigned int wrote_speeds:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)colorsType;
+ (Class)incidentsType;
+ (Class)speedsType;
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
@property(nonatomic) BOOL hasReceivedTime;
@property(nonatomic) NSUInteger receivedTime;
- (id)colorsAtIndex:(NSUInteger)arg1;
- (NSUInteger)colorsCount;
- (void)_addNoFlagsColors:(id)arg1;
- (void)addColors:(id)arg1;
- (void)clearColors;
@property(retain, nonatomic) NSMutableArray *colors;
- (void)_readColors;
- (id)incidentsAtIndex:(NSUInteger)arg1;
- (NSUInteger)incidentsCount;
- (void)_addNoFlagsIncidents:(id)arg1;
- (void)addIncidents:(id)arg1;
- (void)clearIncidents;
@property(retain, nonatomic) NSMutableArray *incidents;
- (void)_readIncidents;
- (id)speedsAtIndex:(NSUInteger)arg1;
- (NSUInteger)speedsCount;
- (void)_addNoFlagsSpeeds:(id)arg1;
- (void)addSpeeds:(id)arg1;
- (void)clearSpeeds;
@property(retain, nonatomic) NSMutableArray *speeds;
- (void)_readSpeeds;
@property(retain, nonatomic) GEOTrafficSnapshotMetaData *snapshotMetaData;
@property(readonly, nonatomic) BOOL hasSnapshotMetaData;
- (void)_readSnapshotMetaData;
- (id)initWithData:(id)arg1;
- (id)init;

@end

