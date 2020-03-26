//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKTimeFormatterObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CLKDevice, CLKTimeFormatter, NTKVictoryDigitsView;
@protocol NTKVictoryDigitalTimeViewDelegate;

@interface NTKVictoryDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView>
{
    CLKDevice *_device;
    NTKVictoryDigitsView *_upperDigitsView;
    NTKVictoryDigitsView *_lowerDigitsView;
    NTKVictoryDigitsView *_flipDigitsView;
    BOOL _flipViewIsLower;
    CLKTimeFormatter *_timeFormatter;
    BOOL _frozen;
    BOOL _invertedColors;
    NSUInteger _style;
    NSUInteger _color;
    id <NTKVictoryDigitalTimeViewDelegate> _delegate;
}

+ (id)transitionTimingFunction;
@property(nonatomic) __weak id <NTKVictoryDigitalTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSUInteger color; // @synthesize color=_color;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(nonatomic) BOOL invertedColors; // @synthesize invertedColors=_invertedColors;
@property(nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen=_frozen;
// - (void).cxx_destruct;
- (void)timeFormatterTextDidChange:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)setBackgroundColor:(id)arg1;
- (long long)_lowerDigitAppearanceForStyle:(NSUInteger)arg1;
- (long long)_upperDigitAppearanceForStyle:(NSUInteger)arg1;
- (void)_setFlipViewIsLower:(BOOL)arg1;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(NSUInteger)arg2 toStyle:(NSUInteger)arg3;
- (void)_resetDigitAppearanceForStyle:(NSUInteger)arg1;
- (long long)defaultAppearance;
- (void)_setupFlipDigitsView;
- (void)clearEditingTransitions;
- (void)willBeginEditing;
- (id)initForDevice:(id)arg1;

@end

