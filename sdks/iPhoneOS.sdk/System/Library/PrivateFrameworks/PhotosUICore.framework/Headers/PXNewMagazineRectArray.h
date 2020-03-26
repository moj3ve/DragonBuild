//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXNewMagazineGrid;

@interface PXNewMagazineRectArray : NSObject
{
    NSUInteger _currentIndex;
    NSUInteger _size;
    PXNewMagazineGrid *_tileGrid;
    BOOL _isPerfectEnding;
    double _score;
    NSUInteger _endingType;
    struct PXMagazineRect _rects;
}

@property(readonly, nonatomic) struct PXMagazineRect rects; // @synthesize rects=_rects;
@property(nonatomic) NSUInteger endingType; // @synthesize endingType=_endingType;
@property(nonatomic) double score; // @synthesize score=_score;
// - (void).cxx_destruct;
- (BOOL)isEqualToRectArray:(id)arg1;
- (BOOL)nextEmptyTileX:(long long )arg1 Y:(long long )arg2 maxWidth:(long long )arg3;
- (BOOL)isGoodEnding;
- (BOOL)isPerfectEnding;
- (double)tileDensity;
@property(readonly, nonatomic) NSUInteger count;
- (struct PXMagazineRect)rectAtIndex:(NSUInteger)arg1;
- (void)removeLastRect;
- (void)addRect:(struct PXMagazineRect)arg1;
- (NSUInteger)rowsUsed;
- (void)reset;
- (id)immutableCopyForCurrentRectsCount;
- (void)dealloc;
- (id)initWithSize:(NSUInteger)arg1 tileGrid:(id)arg2;

@end

