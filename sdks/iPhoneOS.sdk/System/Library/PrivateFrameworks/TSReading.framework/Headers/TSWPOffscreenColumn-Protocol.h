//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol TSWPLayoutTarget;

@protocol TSWPOffscreenColumn <NSObject>
@property(readonly, nonatomic) NSUInteger nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) _NSRange anchoredRange;
@property(readonly, nonatomic) NSUInteger startAnchoredCharIndex;
@property(readonly, nonatomic) _NSRange range;
@property(readonly, nonatomic) NSUInteger startCharIndex;
- (void)trimToCharIndex:(NSUInteger)arg1 inTarget:(id <TSWPLayoutTarget>)arg2 removeAutoNumberFootnoteCount:(NSUInteger)arg3;
@end

