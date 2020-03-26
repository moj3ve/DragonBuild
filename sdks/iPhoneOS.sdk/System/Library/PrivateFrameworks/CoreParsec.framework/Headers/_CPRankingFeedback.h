//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPRankingFeedback-Protocol.h>

@class NSArray, NSData, NSDictionary;

@interface _CPRankingFeedback : PBCodable <_CPProcessableFeedback, _CPRankingFeedback, NSSecureCoding>
{
    NSUInteger _timestamp;
    double _blendingDuration;
    NSArray *_sections;
}

@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) double blendingDuration; // @synthesize blendingDuration=_blendingDuration;
@property(nonatomic) NSUInteger timestamp;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sectionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)sectionsCount;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (id)init;
- (id)initWithFacade:(id)arg1;

@end

