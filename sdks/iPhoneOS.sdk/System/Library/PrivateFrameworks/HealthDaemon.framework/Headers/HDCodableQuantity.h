//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface HDCodableQuantity : PBCodable <NSCopying>
{
    double _value;
    NSString *_unitString;
    CDStruct_01ef6375 _has;
}

@property(retain, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property(nonatomic) double value; // @synthesize value=_value;
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
@property(readonly, nonatomic) BOOL hasUnitString;
@property(nonatomic) BOOL hasValue;

@end

