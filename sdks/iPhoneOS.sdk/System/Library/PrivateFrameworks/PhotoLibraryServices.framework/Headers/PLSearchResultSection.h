//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLSearchResultSection : NSObject
{
    NSUInteger _resultTypes;
    NSUInteger _categoryMask;
    NSArray *_searchResults;
}

@property(readonly, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly, nonatomic) NSUInteger categoryMask; // @synthesize categoryMask=_categoryMask;
@property(readonly, nonatomic) NSUInteger resultTypes; // @synthesize resultTypes=_resultTypes;
// - (void).cxx_destruct;
- (id)initWithResultTypes:(NSUInteger)arg1 categoryMask:(NSUInteger)arg2 searchResults:(id)arg3;

@end

