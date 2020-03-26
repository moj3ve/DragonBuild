//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSSet, NSString;

@interface PPLocationQuery : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _excludingWithoutSentiment;
    NSUInteger _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    NSUInteger _deviceFilter;
    double _perRecordDecayRate;
    double _decayRate;
    NSString *_fuzzyMatchingString;
    NSSet *_fuzzyMatchingFields;
    NSSet *_matchingCategories;
    NSSet *_matchingAlgorithms;
    NSSet *_excludingAlgorithms;
    NSUInteger _consumer;
}

+ (id)queryForMapsWithLimit:(NSUInteger)arg1 fromDate:(id)arg2 consumerType:(NSUInteger)arg3;
+ (id)_algorithmsDescription:(id)arg1;
+ (id)_matchingCategoriesDescription:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger consumer; // @synthesize consumer=_consumer;
@property(nonatomic) BOOL excludingWithoutSentiment; // @synthesize excludingWithoutSentiment=_excludingWithoutSentiment;
@property(retain, nonatomic) NSSet *excludingAlgorithms; // @synthesize excludingAlgorithms=_excludingAlgorithms;
@property(retain, nonatomic) NSSet *matchingAlgorithms; // @synthesize matchingAlgorithms=_matchingAlgorithms;
@property(retain, nonatomic) NSSet *matchingCategories; // @synthesize matchingCategories=_matchingCategories;
@property(retain, nonatomic) NSSet *fuzzyMatchingFields; // @synthesize fuzzyMatchingFields=_fuzzyMatchingFields;
@property(retain, nonatomic) NSString *fuzzyMatchingString; // @synthesize fuzzyMatchingString=_fuzzyMatchingString;
@property(nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(nonatomic) double perRecordDecayRate; // @synthesize perRecordDecayRate=_perRecordDecayRate;
@property(nonatomic) NSUInteger deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(retain, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property(retain, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property(retain, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) NSUInteger limit; // @synthesize limit=_limit;
// - (void).cxx_destruct;
- (id)customizedDescription;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLocationQuery:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

