//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface INFSentenceContext : NSObject
{
    NSNumber *_number;
    NSUInteger _gender;
}

+ (id)sentenceContext;
@property(nonatomic) NSUInteger gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSNumber *number; // @synthesize number=_number;
// - (void).cxx_destruct;
- (id)combinedWithContext:(id)arg1;

@end

