//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSDate, NSNumber, NSString, RCUserSegmentationConfiguration;

@interface RCConfigurationResource : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_requestKey;
    NSData *_gzippedConfigurationData;
    RCUserSegmentationConfiguration *_userSegmentationConfiguration;
    NSArray *_treatmentIDs;
    NSArray *_segmentSetIDs;
    NSString *_configurationID;
    NSString *_contentHash;
    NSString *_lastModifiedString;
    NSString *_etag;
    NSString *_lastModifiedFallbackString;
    NSDate *_lastFetchedDate;
    NSNumber *_fallbackMaxAge;
    NSNumber *_endpointMaxAge;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *endpointMaxAge; // @synthesize endpointMaxAge=_endpointMaxAge;
@property(retain, nonatomic) NSNumber *fallbackMaxAge; // @synthesize fallbackMaxAge=_fallbackMaxAge;
@property(retain, nonatomic) NSDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(retain, nonatomic) NSString *lastModifiedFallbackString; // @synthesize lastModifiedFallbackString=_lastModifiedFallbackString;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSString *lastModifiedString; // @synthesize lastModifiedString=_lastModifiedString;
@property(retain, nonatomic) NSString *contentHash; // @synthesize contentHash=_contentHash;
@property(retain, nonatomic) NSString *configurationID; // @synthesize configurationID=_configurationID;
@property(retain, nonatomic) NSArray *segmentSetIDs; // @synthesize segmentSetIDs=_segmentSetIDs;
@property(retain, nonatomic) NSArray *treatmentIDs; // @synthesize treatmentIDs=_treatmentIDs;
@property(retain, nonatomic) RCUserSegmentationConfiguration *userSegmentationConfiguration; // @synthesize userSegmentationConfiguration=_userSegmentationConfiguration;
@property(retain, nonatomic) NSData *gzippedConfigurationData; // @synthesize gzippedConfigurationData=_gzippedConfigurationData;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *configurationData;
- (BOOL)isExpiredWithMaxTTL:(double)arg1 allowedToReachEndpoint:(BOOL)arg2;

@end

