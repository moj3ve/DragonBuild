//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying>
{
    struct __CFBag _bag;
}

// - (id)copyWithZone:(_NSZone )arg1;
- (void)enumerateFeatureValuesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)removeFeatureValue:(NSUInteger)arg1;
- (void)addFeatureValue:(NSUInteger)arg1;
- (BOOL)containsFeatureValue:(NSUInteger)arg1;
- (NSUInteger)countForFeatureValue:(NSUInteger)arg1;
@property(readonly) NSUInteger count;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)init;

@end

