//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC9Coherence11ObjCVersion : NSObject
{
    MISSING_TYPE *version;
}

// - (void).cxx_destruct;
@property(nonatomic, readonly) NSString *description;
- (void)apply:(id)arg1;
- (void)shallowMerge:(id)arg1;
- (void)subtract:(id)arg1;
- (void)subtractWithRange:(_NSRange)arg1 replica:(id)arg2;
- (void)insertWithRange:(_NSRange)arg1 replica:(id)arg2;
- (BOOL)contains:(id)arg1;
- (id)copy;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hasDeltaTo:(id)arg1;
@property(nonatomic, readonly) NSArray *sortedUUIDs;
- (id)temporaryComponentsWithExcluding:(id)arg1;
@property(nonatomic, readonly) BOOL hasTemporaryComponents;
@property(nonatomic, readonly) long long maxCounter;
@property(nonatomic, readonly) BOOL isEmpty;
- (id)init;

@end

