//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKBarSeries.h>

@class HKStrokeStyle, NSArray;

@interface HKSleepDurationSeries : HKBarSeries
{
    NSArray *_defaultFillStyles;
    NSArray *_highlightedFillStyles;
    HKStrokeStyle *_goalLineStokeStyle;
    id /* CDUnknownBlockType */ _startOfDayTransform;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ startOfDayTransform; // @synthesize startOfDayTransform=_startOfDayTransform;
@property(copy, nonatomic) HKStrokeStyle *goalLineStokeStyle; // @synthesize goalLineStokeStyle=_goalLineStokeStyle;
@property(copy, nonatomic) NSArray *highlightedFillStyles; // @synthesize highlightedFillStyles=_highlightedFillStyles;
@property(copy, nonatomic) NSArray *defaultFillStyles; // @synthesize defaultFillStyles=_defaultFillStyles;
// - (void).cxx_destruct;
- (id)_durationFormatter;
- (void)_addAnnotationForValue:(double)arg1;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContext )arg5;
- (void)_drawGoalLinePath:(id)arg1 context:(CGContext )arg2;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContext )arg4 axisRect:(CGRect)arg5;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(CGRect)arg2 minimumSpacing:(double)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;
- (BOOL)supportsMultiTouchSelection;

@end

