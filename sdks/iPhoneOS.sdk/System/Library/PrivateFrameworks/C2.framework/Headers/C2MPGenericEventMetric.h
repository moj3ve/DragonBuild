//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class C2MPGenericEventMetricValue, NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEventMetric : PBCodable <NSCopying>
{
    NSString *_key;
    C2MPGenericEventMetricValue *_value;
}

@property(retain, nonatomic) C2MPGenericEventMetricValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
@property(readonly, nonatomic) BOOL hasValue;
@property(readonly, nonatomic) BOOL hasKey;

@end

