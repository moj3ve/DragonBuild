//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class AWDHomeKitMessageLocation, NSMutableArray;

@interface AWDHomeKitMessageHomeLocationReport : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    AWDHomeKitMessageLocation *_nearestLOI;
    unsigned int _numIterationToConverge;
    NSMutableArray *_rawLocations;
    AWDHomeKitMessageLocation *_selectedHomeLocation;
    struct {
        unsigned int timestamp:1;
        unsigned int numIterationToConverge:1;
    } _has;
}

+ (Class)rawLocationsType;
@property(retain, nonatomic) AWDHomeKitMessageLocation *nearestLOI; // @synthesize nearestLOI=_nearestLOI;
@property(nonatomic) unsigned int numIterationToConverge; // @synthesize numIterationToConverge=_numIterationToConverge;
@property(retain, nonatomic) AWDHomeKitMessageLocation *selectedHomeLocation; // @synthesize selectedHomeLocation=_selectedHomeLocation;
@property(retain, nonatomic) NSMutableArray *rawLocations; // @synthesize rawLocations=_rawLocations;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasNearestLOI;
@property(nonatomic) BOOL hasNumIterationToConverge;
@property(readonly, nonatomic) BOOL hasSelectedHomeLocation;
- (id)rawLocationsAtIndex:(NSUInteger)arg1;
- (NSUInteger)rawLocationsCount;
- (void)addRawLocations:(id)arg1;
- (void)clearRawLocations;
@property(nonatomic) BOOL hasTimestamp;

@end

