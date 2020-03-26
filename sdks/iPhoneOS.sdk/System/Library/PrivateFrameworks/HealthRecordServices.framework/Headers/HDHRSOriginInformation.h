//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface HDHRSOriginInformation : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_operatingSystemBuild;
    CDStruct_f6aba300 _operatingSystemVersion;
}

+ (BOOL)supportsSecureCoding;
+ (id)currentOSVersionWithProfile:(id)arg1;
@property(readonly, copy, nonatomic) NSString *operatingSystemBuild; // @synthesize operatingSystemBuild=_operatingSystemBuild;
@property(readonly, nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithOperatingSystemVersion:(CDStruct_f6aba300)arg1 build:(id)arg2;

@end

