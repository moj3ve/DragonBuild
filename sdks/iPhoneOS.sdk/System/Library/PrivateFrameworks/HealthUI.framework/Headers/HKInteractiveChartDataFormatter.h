//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKDisplayType, HKUnitPreferenceController, UIFont;

@interface HKInteractiveChartDataFormatter : NSObject
{
    UIFont *_majorFont;
    UIFont *_minorFont;
    HKUnitPreferenceController *_unitController;
    HKDisplayType *_displayType;
}

@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) UIFont *minorFont; // @synthesize minorFont=_minorFont;
@property(retain, nonatomic) UIFont *majorFont; // @synthesize majorFont=_majorFont;
// - (void).cxx_destruct;
- (id)_formattedStringForValue:(id)arg1;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3;
- (id)_unitNameFromUnit:(id)arg1 number:(id)arg2;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;

@end

