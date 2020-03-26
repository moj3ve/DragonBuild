//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding>
{
    long long _productPlatform;
    long long _productClass;
    long long _productVariant;
    HMFSoftwareVersion *_softwareVersion;
}

+ (void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2;
+ (id)decodeSoftwareVersionWithCoder:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)shortDescription;
+ (id)productInfo;
@property(readonly, nonatomic) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(readonly) long long productVariant; // @synthesize productVariant=_productVariant;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) long long productClass; // @synthesize productClass=_productClass;
@property(readonly) long long productPlatform; // @synthesize productPlatform=_productPlatform;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3;
- (id)init;

@end

