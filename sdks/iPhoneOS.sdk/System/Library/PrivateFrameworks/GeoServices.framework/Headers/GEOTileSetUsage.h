//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEOTileSetUsage : PBCodable <NSCopying>
{
    unsigned int _count;
    int _style;
    struct {
        unsigned int has_count:1;
        unsigned int has_style:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasCount;
@property(nonatomic) unsigned int count;
- (int)StringAsStyle:(id)arg1;
- (id)styleAsString:(int)arg1;
@property(nonatomic) BOOL hasStyle;
@property(nonatomic) int style;

@end

