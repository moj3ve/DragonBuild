//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NAUniqueArrayDiffOptions : NSObject
{
    BOOL _allowMoves;
    id /* CDUnknownBlockType */ _equalComparator;
    id /* CDUnknownBlockType */ _hashGenerator;
    id /* CDUnknownBlockType */ _changeComparator;
}

@property(nonatomic) BOOL allowMoves; // @synthesize allowMoves=_allowMoves;
@property(copy, nonatomic) id /* CDUnknownBlockType */ changeComparator; // @synthesize changeComparator=_changeComparator;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hashGenerator; // @synthesize hashGenerator=_hashGenerator;
@property(copy, nonatomic) id /* CDUnknownBlockType */ equalComparator; // @synthesize equalComparator=_equalComparator;
// - (void).cxx_destruct;
- (id)init;

@end

