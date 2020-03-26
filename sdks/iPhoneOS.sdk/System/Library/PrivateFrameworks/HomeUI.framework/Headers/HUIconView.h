//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUIconContentViewDelegate-Protocol.h>

@class HUIconContentView, UIVisualEffect, UIVisualEffectView;
@protocol HFIconDescriptor;

@interface HUIconView : UIView <HUIconContentViewDelegate>
{
    BOOL _disableContinuousAnimation;
    UIVisualEffect *_vibrancyEffect;
    long long _contentMode;
    NSUInteger _iconSize;
    NSUInteger _displayContext;
    NSUInteger _displayStyle;
    UIVisualEffectView *_effectView;
    HUIconContentView *_currentIconContentView;
}

@property(retain, nonatomic) HUIconContentView *currentIconContentView; // @synthesize currentIconContentView=_currentIconContentView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(readonly, nonatomic) NSUInteger displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) BOOL disableContinuousAnimation; // @synthesize disableContinuousAnimation=_disableContinuousAnimation;
@property(nonatomic) NSUInteger displayContext; // @synthesize displayContext=_displayContext;
@property(nonatomic) NSUInteger iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
// - (void).cxx_destruct;
- (void)iconContentView:(id)arg1 didChangeAspectRatio:(double)arg2;
@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor;
- (void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)arg1;
- (id)_defaultVibrancyEffect;
@property(retain, nonatomic) UIVisualEffect *vibrancyEffect; // @synthesize vibrancyEffect=_vibrancyEffect;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(NSUInteger)arg2 animated:(BOOL)arg3;
- (id)contentContainerView;
- (id)initWithFrame:(CGRect)arg1 contentMode:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

