//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface SGDCKTimeRange : PBCodable <NSCopying>
{
    double _end;
    long long _endUTCOffsetSeconds;
    double _start;
    long long _startUTCOffsetSeconds;
    BOOL _floating;
    struct {
        unsigned int end:1;
        unsigned int endUTCOffsetSeconds:1;
        unsigned int start:1;
        unsigned int startUTCOffsetSeconds:1;
        unsigned int floating:1;
    } _has;
}

@property(nonatomic) BOOL floating; // @synthesize floating=_floating;
@property(nonatomic) long long endUTCOffsetSeconds; // @synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds;
@property(nonatomic) long long startUTCOffsetSeconds; // @synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasFloating;
@property(nonatomic) BOOL hasEndUTCOffsetSeconds;
@property(nonatomic) BOOL hasStartUTCOffsetSeconds;
@property(nonatomic) BOOL hasEnd;
@property(nonatomic) BOOL hasStart;

@end

