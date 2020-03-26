//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying>
{
    struct {
        double list;
        NSUInteger count;
        NSUInteger size;
    } _modificationDates;
    long long _objectType;
    NSData *_sourceUUIDs;
    BOOL _userOrdered;
    struct {
        unsigned int objectType:1;
        unsigned int userOrdered:1;
    } _has;
}

@property(retain, nonatomic) NSData *sourceUUIDs; // @synthesize sourceUUIDs=_sourceUUIDs;
@property(nonatomic) BOOL userOrdered; // @synthesize userOrdered=_userOrdered;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
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
- (void)setModificationDates:(double )arg1 count:(NSUInteger)arg2;
- (double)modificationDatesAtIndex:(NSUInteger)arg1;
- (void)addModificationDates:(double)arg1;
- (void)clearModificationDates;
@property(readonly, nonatomic) double modificationDates;
@property(readonly, nonatomic) NSUInteger modificationDatesCount;
@property(readonly, nonatomic) BOOL hasSourceUUIDs;
@property(nonatomic) BOOL hasUserOrdered;
@property(nonatomic) BOOL hasObjectType;
- (void)dealloc;
- (long long)decodedDataTypeCode;

@end

