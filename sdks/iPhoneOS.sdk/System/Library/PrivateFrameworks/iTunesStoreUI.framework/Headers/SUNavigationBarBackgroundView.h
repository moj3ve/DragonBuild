//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, _UIBackdropView, _UINavigationBarAppearanceStorage;

@interface SUNavigationBarBackgroundView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    BOOL _separatorOnTop;
    BOOL translucent;
    BOOL barWantsAdaptiveBackdrop;
    long long barStyle;
    UIColor *barTintColor;
    _UINavigationBarAppearanceStorage *appearanceStorage;
    UIView *_shadowView;
}

@property(nonatomic) BOOL barWantsAdaptiveBackdrop; // @synthesize barWantsAdaptiveBackdrop;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent;
@property(retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // @synthesize _shadowView;
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage; // @synthesize appearanceStorage;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor;
@property(nonatomic) long long barStyle; // @synthesize barStyle;
@property(nonatomic) BOOL separatorOnTop; // @synthesize separatorOnTop=_separatorOnTop;
@property(readonly) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(BOOL )arg1;
- (void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2;
- (void)updateBackgroundImage;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long backdropStyle;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

