//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SGSimpleMailHeaderKeyValue : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_key;
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToSimpleMailHeaderKeyValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;

@end

