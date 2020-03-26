//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
    long long _currentFeatureVersion;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long currentFeatureVersion; // @synthesize currentFeatureVersion=_currentFeatureVersion;
// - (void).cxx_destruct;
- (void)enumerateHistoryWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)description;
- (long long)featureVersionForSyncAnchor:(NSData )arg1;
- (NSData )syncAnchorForFeatureVersion:(long long)arg1;
- (void)addSyncAnchor:(NSData )arg1 forFeatureVersion:(long long)arg2;
- (id)initWithCurrentFeatureVersion:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

