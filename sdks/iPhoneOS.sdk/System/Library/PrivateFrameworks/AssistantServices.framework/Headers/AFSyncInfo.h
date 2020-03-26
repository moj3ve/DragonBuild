//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet, NSString, SASyncAppMetaData;

@interface AFSyncInfo : NSObject <NSSecureCoding>
{
    BOOL _targetIsLocal;
    BOOL _forVerification;
    NSString *_anchor;
    NSString *_validity;
    long long _count;
    NSString *_key;
    SASyncAppMetaData *_appMetadata;
    NSSet *_reasons;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *reasons; // @synthesize reasons=_reasons;
@property(nonatomic) BOOL forVerification; // @synthesize forVerification=_forVerification;
@property(nonatomic) BOOL targetIsLocal; // @synthesize targetIsLocal=_targetIsLocal;
@property(copy, nonatomic) SASyncAppMetaData *appMetadata; // @synthesize appMetadata=_appMetadata;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithAnchor:(id)arg1 forcingReset:(BOOL)arg2;

@end

