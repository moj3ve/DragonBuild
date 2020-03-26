//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface CPLFaceInstance : PBCodable <NSCopying>
{
    double _centerX;
    double _centerY;
    double _size;
    unsigned int _faceState;
    unsigned int _nameSource;
    NSString *_personIdentifier;
    NSMutableArray *_rejectedPersonIdentifiers;
    struct {
        unsigned int centerX:1;
        unsigned int centerY:1;
        unsigned int size:1;
        unsigned int faceState:1;
        unsigned int nameSource:1;
    } _has;
}

+ (Class)rejectedPersonIdentifiersType;
@property(nonatomic) unsigned int nameSource; // @synthesize nameSource=_nameSource;
@property(retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers; // @synthesize rejectedPersonIdentifiers=_rejectedPersonIdentifiers;
@property(nonatomic) unsigned int faceState; // @synthesize faceState=_faceState;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(retain, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
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
@property(nonatomic) BOOL hasNameSource;
- (id)rejectedPersonIdentifiersAtIndex:(NSUInteger)arg1;
- (NSUInteger)rejectedPersonIdentifiersCount;
- (void)addRejectedPersonIdentifiers:(id)arg1;
- (void)clearRejectedPersonIdentifiers;
@property(nonatomic) BOOL hasFaceState;
@property(nonatomic) BOOL hasSize;
@property(nonatomic) BOOL hasCenterY;
@property(nonatomic) BOOL hasCenterX;
@property(readonly, nonatomic) BOOL hasPersonIdentifier;
- (BOOL)_isFaceStateBitSet:(unsigned int)arg1;
- (void)_setFaceStateBit:(unsigned int)arg1 fromBoolValue:(BOOL)arg2;
@property(nonatomic, getter=isManual) BOOL manual;
@property(nonatomic, getter=isKeyFace) BOOL keyFace;
@property(readonly, nonatomic, getter=isNoneState) BOOL noneState;
- (void)clearState;
- (id)pointerDescription;
- (long long)compare:(id)arg1;

@end

