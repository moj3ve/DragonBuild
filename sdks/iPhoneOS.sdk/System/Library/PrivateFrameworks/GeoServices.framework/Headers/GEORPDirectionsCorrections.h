//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEORPCorrectedCoordinate, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPDirectionsCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPCorrectedCoordinate *_arrivalCoordinate;
    NSData *_directionsResponseId;
    NSMutableArray *_instructionCorrections;
    NSString *_overviewScreenshotImageId;
    NSMutableArray *_problematicRouteIndexs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    BOOL _noGoodRoutesShown;
    struct {
        unsigned int has_noGoodRoutesShown:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arrivalCoordinate:1;
        unsigned int read_directionsResponseId:1;
        unsigned int read_instructionCorrections:1;
        unsigned int read_overviewScreenshotImageId:1;
        unsigned int read_problematicRouteIndexs:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_arrivalCoordinate:1;
        unsigned int wrote_directionsResponseId:1;
        unsigned int wrote_instructionCorrections:1;
        unsigned int wrote_overviewScreenshotImageId:1;
        unsigned int wrote_problematicRouteIndexs:1;
        unsigned int wrote_noGoodRoutesShown:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)instructionCorrectionType;
+ (Class)problematicRouteIndexType;
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
@property(nonatomic) BOOL hasNoGoodRoutesShown;
@property(nonatomic) BOOL noGoodRoutesShown;
@property(retain, nonatomic) GEORPCorrectedCoordinate *arrivalCoordinate;
@property(readonly, nonatomic) BOOL hasArrivalCoordinate;
- (void)_readArrivalCoordinate;
@property(retain, nonatomic) NSString *overviewScreenshotImageId;
@property(readonly, nonatomic) BOOL hasOverviewScreenshotImageId;
- (void)_readOverviewScreenshotImageId;
- (id)instructionCorrectionAtIndex:(NSUInteger)arg1;
- (NSUInteger)instructionCorrectionsCount;
- (void)_addNoFlagsInstructionCorrection:(id)arg1;
- (void)addInstructionCorrection:(id)arg1;
- (void)clearInstructionCorrections;
@property(retain, nonatomic) NSMutableArray *instructionCorrections;
- (void)_readInstructionCorrections;
- (id)problematicRouteIndexAtIndex:(NSUInteger)arg1;
- (NSUInteger)problematicRouteIndexsCount;
- (void)_addNoFlagsProblematicRouteIndex:(id)arg1;
- (void)addProblematicRouteIndex:(id)arg1;
- (void)clearProblematicRouteIndexs;
@property(retain, nonatomic) NSMutableArray *problematicRouteIndexs;
- (void)_readProblematicRouteIndexs;
@property(retain, nonatomic) NSData *directionsResponseId;
@property(readonly, nonatomic) BOOL hasDirectionsResponseId;
- (void)_readDirectionsResponseId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

