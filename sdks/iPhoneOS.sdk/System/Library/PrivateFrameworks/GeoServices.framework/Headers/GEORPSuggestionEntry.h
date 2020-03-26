//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface GEORPSuggestionEntry : PBCodable <NSCopying>
{
    NSMutableArray *_displayLines;
    unsigned int _serverSearchCompletionEntryIndex;
    unsigned int _serverSearchCompletionSectionIndex;
    int _type;
    struct {
        unsigned int has_serverSearchCompletionEntryIndex:1;
        unsigned int has_serverSearchCompletionSectionIndex:1;
        unsigned int has_type:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)displayLineType;
// - (void).cxx_destruct;
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
@property(nonatomic) BOOL hasServerSearchCompletionEntryIndex;
@property(nonatomic) unsigned int serverSearchCompletionEntryIndex;
@property(nonatomic) BOOL hasServerSearchCompletionSectionIndex;
@property(nonatomic) unsigned int serverSearchCompletionSectionIndex;
- (id)displayLineAtIndex:(NSUInteger)arg1;
- (NSUInteger)displayLinesCount;
- (void)addDisplayLine:(id)arg1;
- (void)clearDisplayLines;
@property(retain, nonatomic) NSMutableArray *displayLines;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;

@end

