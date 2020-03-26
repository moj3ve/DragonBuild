//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HULegibilityLabel, NSArray, NSString, UIVisualEffectView, _UILegibilitySettings;

@interface HUCameraBadgeView : UIView
{
    NSUInteger _size;
    HULegibilityLabel *_label;
    _UILegibilitySettings *_legibilitySettings;
    UIVisualEffectView *_blurEffectView;
    UIVisualEffectView *_vibrancyEffectView;
    NSArray *_staticConstraints;
    NSArray *_labelConstraints;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(readonly, nonatomic) UIVisualEffectView *vibrancyEffectView; // @synthesize vibrancyEffectView=_vibrancyEffectView;
@property(readonly, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) HULegibilityLabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSUInteger size; // @synthesize size=_size;
// - (void).cxx_destruct;
@property(copy, nonatomic) NSString *labelText;
- (void)updateConstraints;
- (id)initWithSize:(NSUInteger)arg1;

@end

