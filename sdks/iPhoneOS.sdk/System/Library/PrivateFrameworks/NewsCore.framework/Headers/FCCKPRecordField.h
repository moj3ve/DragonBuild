//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPRecordField : PBCodable <NSCopying>
{
    FCCKPRecordFieldIdentifier *_identifier;
    FCCKPRecordFieldValue *_value;
}

@property(retain, nonatomic) FCCKPRecordFieldValue *value; // @synthesize value=_value;
@property(retain, nonatomic) FCCKPRecordFieldIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasValue;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (void)dealloc;

@end

