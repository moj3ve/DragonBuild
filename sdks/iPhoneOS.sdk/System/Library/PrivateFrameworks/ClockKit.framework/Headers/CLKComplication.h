//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CLKComplication : NSObject <NSSecureCoding, NSCopying>
{
    long long _family;
}

+ (BOOL)supportsSecureCoding;
+ (id)complicationWithFamily:(long long)arg1;
@property(readonly, nonatomic) long long family; // @synthesize family=_family;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

