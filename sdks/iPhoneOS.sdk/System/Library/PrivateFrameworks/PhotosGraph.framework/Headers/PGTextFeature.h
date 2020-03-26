//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGTextFeature : NSObject
{
    float _weight;
    NSString *_string;
    NSString *_originalString;
    NSUInteger _type;
    NSUInteger _origin;
}

+ (NSUInteger)_mostImportantTextFeatureTypeAmongTypes:(id)arg1;
+ (id)vipTextFeatureTypes;
+ (id)mergedTextFeatureFromTextFeatures:(id)arg1;
+ (id)stringForFeatureType:(NSUInteger)arg1;
+ (id)stringForFeatureOrigin:(NSUInteger)arg1;
+ (id)graphNamesForNode:(id)arg1;
+ (id)_localizedNameForLocalizableNode:(id)arg1;
+ (id)textFeaturesFromString:(id)arg1 synonyms:(id)arg2 type:(NSUInteger)arg3 weight:(float)arg4 options:(NSUInteger)arg5;
+ (id)_tokensFromString:(id)arg1 lemmatize:(BOOL)arg2;
+ (id)textFeaturesFromString:(id)arg1 type:(NSUInteger)arg2 weight:(float)arg3 options:(NSUInteger)arg4;
+ (id)_stringToIndexFromTokens:(id)arg1;
+ (id)textFeaturesFromNode:(id)arg1 type:(NSUInteger)arg2 weight:(float)arg3 options:(NSUInteger)arg4;
@property(readonly, nonatomic) NSUInteger origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *originalString; // @synthesize originalString=_originalString;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
// - (void).cxx_destruct;
- (void)markAsStrippedOut;
- (id)description;
- (id)initWithString:(id)arg1 originalString:(id)arg2 type:(NSUInteger)arg3 weight:(float)arg4 origin:(NSUInteger)arg5;

@end

