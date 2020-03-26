//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface CLPPipelineDiagnosticReport : PBCodable <NSCopying>
{
    struct {
        double list;
        NSUInteger count;
        NSUInteger size;
    } _prbOnFloorEstimates;
    double _prbCoarseIndoorSaysIndoor;
    double _prbGpsSaysIndoor;
    double _prbInjectionGainRetryLimitOk;
    double _prbInjectionOccupancyRetryLimitOk;
    double _prbInlierEstimate;
    double _prbLocalizerIoWrapperSaysWifiOk;
    double _prbOnFloorsEstimate;
    double _prbParticleFilterSaysYield;
    double _prbPipelinedSaysYield;
    double _prbWifiSaysIndoor;
    int _pfYieldStatusBeforeCalculatePose;
    int _yieldStatusBeforeCalculatePose;
    int _yieldType;
    struct {
        unsigned int prbCoarseIndoorSaysIndoor:1;
        unsigned int prbGpsSaysIndoor:1;
        unsigned int prbInjectionGainRetryLimitOk:1;
        unsigned int prbInjectionOccupancyRetryLimitOk:1;
        unsigned int prbInlierEstimate:1;
        unsigned int prbLocalizerIoWrapperSaysWifiOk:1;
        unsigned int prbOnFloorsEstimate:1;
        unsigned int prbParticleFilterSaysYield:1;
        unsigned int prbPipelinedSaysYield:1;
        unsigned int prbWifiSaysIndoor:1;
        unsigned int pfYieldStatusBeforeCalculatePose:1;
        unsigned int yieldStatusBeforeCalculatePose:1;
        unsigned int yieldType:1;
    } _has;
}

@property(nonatomic) double prbInjectionGainRetryLimitOk; // @synthesize prbInjectionGainRetryLimitOk=_prbInjectionGainRetryLimitOk;
@property(nonatomic) double prbInjectionOccupancyRetryLimitOk; // @synthesize prbInjectionOccupancyRetryLimitOk=_prbInjectionOccupancyRetryLimitOk;
@property(nonatomic) double prbLocalizerIoWrapperSaysWifiOk; // @synthesize prbLocalizerIoWrapperSaysWifiOk=_prbLocalizerIoWrapperSaysWifiOk;
@property(nonatomic) double prbInlierEstimate; // @synthesize prbInlierEstimate=_prbInlierEstimate;
@property(nonatomic) double prbOnFloorsEstimate; // @synthesize prbOnFloorsEstimate=_prbOnFloorsEstimate;
@property(nonatomic) double prbParticleFilterSaysYield; // @synthesize prbParticleFilterSaysYield=_prbParticleFilterSaysYield;
@property(nonatomic) double prbGpsSaysIndoor; // @synthesize prbGpsSaysIndoor=_prbGpsSaysIndoor;
@property(nonatomic) double prbWifiSaysIndoor; // @synthesize prbWifiSaysIndoor=_prbWifiSaysIndoor;
@property(nonatomic) double prbCoarseIndoorSaysIndoor; // @synthesize prbCoarseIndoorSaysIndoor=_prbCoarseIndoorSaysIndoor;
@property(nonatomic) double prbPipelinedSaysYield; // @synthesize prbPipelinedSaysYield=_prbPipelinedSaysYield;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsYieldStatusBeforeCalculatePose:(id)arg1;
- (id)yieldStatusBeforeCalculatePoseAsString:(int)arg1;
@property(nonatomic) BOOL hasYieldStatusBeforeCalculatePose;
@property(nonatomic) int yieldStatusBeforeCalculatePose; // @synthesize yieldStatusBeforeCalculatePose=_yieldStatusBeforeCalculatePose;
- (int)StringAsPfYieldStatusBeforeCalculatePose:(id)arg1;
- (id)pfYieldStatusBeforeCalculatePoseAsString:(int)arg1;
@property(nonatomic) BOOL hasPfYieldStatusBeforeCalculatePose;
@property(nonatomic) int pfYieldStatusBeforeCalculatePose; // @synthesize pfYieldStatusBeforeCalculatePose=_pfYieldStatusBeforeCalculatePose;
@property(nonatomic) BOOL hasPrbInjectionGainRetryLimitOk;
@property(nonatomic) BOOL hasPrbInjectionOccupancyRetryLimitOk;
@property(nonatomic) BOOL hasPrbLocalizerIoWrapperSaysWifiOk;
@property(nonatomic) BOOL hasPrbInlierEstimate;
- (void)setPrbOnFloorEstimates:(double )arg1 count:(NSUInteger)arg2;
- (double)prbOnFloorEstimateAtIndex:(NSUInteger)arg1;
- (void)addPrbOnFloorEstimate:(double)arg1;
- (void)clearPrbOnFloorEstimates;
@property(readonly, nonatomic) double prbOnFloorEstimates;
@property(readonly, nonatomic) NSUInteger prbOnFloorEstimatesCount;
@property(nonatomic) BOOL hasPrbOnFloorsEstimate;
@property(nonatomic) BOOL hasPrbParticleFilterSaysYield;
@property(nonatomic) BOOL hasPrbGpsSaysIndoor;
@property(nonatomic) BOOL hasPrbWifiSaysIndoor;
@property(nonatomic) BOOL hasPrbCoarseIndoorSaysIndoor;
@property(nonatomic) BOOL hasPrbPipelinedSaysYield;
- (int)StringAsYieldType:(id)arg1;
- (id)yieldTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasYieldType;
@property(nonatomic) int yieldType; // @synthesize yieldType=_yieldType;
- (void)dealloc;

@end

