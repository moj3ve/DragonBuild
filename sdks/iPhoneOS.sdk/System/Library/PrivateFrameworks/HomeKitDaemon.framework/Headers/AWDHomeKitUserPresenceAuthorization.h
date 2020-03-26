//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDHomeKitUserPresenceAuthorization : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _auth;
    struct {
        unsigned int timestamp:1;
        unsigned int auth:1;
    } _has;
}

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
- (int)StringAsAuth:(id)arg1;
- (id)authAsString:(int)arg1;
@property(nonatomic) BOOL hasAuth;
@property(nonatomic) int auth; // @synthesize auth=_auth;
@property(nonatomic) BOOL hasTimestamp;

@end

