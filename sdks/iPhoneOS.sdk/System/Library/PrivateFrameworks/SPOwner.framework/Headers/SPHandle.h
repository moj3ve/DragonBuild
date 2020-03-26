//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SPHandle : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSString *_destination;
}

+ (id)handleWithPhoneNumber:(id)arg1;
+ (id)handleWithEmailAddress:(id)arg1;
+ (id)handleWithString:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithType:(long long)arg1 destination:(id)arg2;

@end

