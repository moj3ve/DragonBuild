//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableOrderedSet;

@interface FCSharedStringIndex : NSObject <NSCopying>
{
    NSMutableOrderedSet *_stringsSet;
}

@property(retain, nonatomic) NSMutableOrderedSet *stringsSet; // @synthesize stringsSet=_stringsSet;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *strings;
- (id)stringForReference:(int)arg1;
- (int)referenceForStringReadOnly:(id)arg1;
- (int)referenceForString:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithStrings:(id)arg1;

@end

