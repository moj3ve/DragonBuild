//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCSSMediaQueryList.h>

@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList
{
    IKMutableArray *_queryList;
}

// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)count;
- (id)subQueryAtIndex:(NSUInteger)arg1;
- (BOOL)evaluate;
- (void)addSubQueryList:(id)arg1;
- (id)subQueryList;
- (id)expressionAsString;
- (id)init;

@end

