//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_CPDidGoToSiteFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPDidGoToSiteFeedback : PBCodable <_CPProcessableFeedback, _CPDidGoToSiteFeedback, NSSecureCoding>
{
    NSUInteger _timestamp;
    NSString *_input;
}

@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
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
- (id)init;
- (id)initWithFacade:(id)arg1;

@end

