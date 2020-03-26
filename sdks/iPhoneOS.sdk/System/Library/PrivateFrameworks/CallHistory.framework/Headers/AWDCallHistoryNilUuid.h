//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface AWDCallHistoryNilUuid : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    unsigned int _callStatus;
    unsigned int _callType;
    struct {
        unsigned int timestamp:1;
        unsigned int callStatus:1;
        unsigned int callType:1;
    } _has;
}

@property(nonatomic) unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property(nonatomic) unsigned int callType; // @synthesize callType=_callType;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCallStatus;
@property(nonatomic) BOOL hasCallType;
@property(nonatomic) BOOL hasTimestamp;

@end

