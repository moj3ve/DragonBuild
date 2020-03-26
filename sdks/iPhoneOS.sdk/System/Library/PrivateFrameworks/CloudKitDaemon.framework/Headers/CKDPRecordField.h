//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue, NSMutableArray;

@interface CKDPRecordField : PBCodable <NSCopying>
{
    NSMutableArray *_actions;
    CKDPRecordFieldIdentifier *_identifier;
    CKDPRecordFieldValue *_value;
}

+ (Class)actionType;
+ (id)emptyFieldWithKey:(id)arg1;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CKDPRecordFieldValue *value; // @synthesize value=_value;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *identifier; // @synthesize identifier=_identifier;
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
- (id)actionAtIndex:(NSUInteger)arg1;
- (NSUInteger)actionsCount;
- (void)addAction:(id)arg1;
- (void)clearActions;
@property(readonly, nonatomic) BOOL hasValue;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end

