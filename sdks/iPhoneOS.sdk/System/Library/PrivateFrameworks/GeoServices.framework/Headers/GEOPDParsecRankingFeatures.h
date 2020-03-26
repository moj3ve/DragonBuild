//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDParsecRankingFeatures : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _distanceFromContainment;
    double _distanceFromDeviceLocation;
    double _expectedCtr;
    BOOL _isRecallMismatch;
    BOOL _isSpellCorrected;
    struct {
        unsigned int has_distanceFromContainment:1;
        unsigned int has_distanceFromDeviceLocation:1;
        unsigned int has_expectedCtr:1;
        unsigned int has_isRecallMismatch:1;
        unsigned int has_isSpellCorrected:1;
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
@property(nonatomic) BOOL hasIsRecallMismatch;
@property(nonatomic) BOOL isRecallMismatch;
@property(nonatomic) BOOL hasIsSpellCorrected;
@property(nonatomic) BOOL isSpellCorrected;
@property(nonatomic) BOOL hasDistanceFromContainment;
@property(nonatomic) double distanceFromContainment;
@property(nonatomic) BOOL hasDistanceFromDeviceLocation;
@property(nonatomic) double distanceFromDeviceLocation;
@property(nonatomic) BOOL hasExpectedCtr;
@property(nonatomic) double expectedCtr;

@end

