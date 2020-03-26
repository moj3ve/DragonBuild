//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class CSHomeAffordanceView, NSArray, NSObject, SBUICallToActionLabel, SBUILegibilityLabel, UIButton, UILabel, _UILegibilitySettings;
@protocol OS_dispatch_source;

@interface SBDashBoardSetupView : UIView <CAAnimationDelegate>
{
    UILabel *_titleLabel;
    UILabel *_storeRestrictedLabel;
    UIView *_homeAffordanceContainer;
    CSHomeAffordanceView *_homeAffordanceView;
    UIView *_homeAffordanceCallToActionContainer;
    SBUILegibilityLabel *_homeAffordanceCallToActionLabel;
    SBUICallToActionLabel *_homeButtonCallToActionLabel;
    NSObject<OS_dispatch_source> *_homeButtonCallToActionTimer;
    NSArray *_activationInfoViewConstraints;
    UIView *_activationInfoView;
    UIView *_regulatoryInfoView;
    _UILegibilitySettings *_legibilitySettings;
    UIButton *_infoButton;
}

@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIView *regulatoryInfoView; // @synthesize regulatoryInfoView=_regulatoryInfoView;
@property(retain, nonatomic) UIView *activationInfoView; // @synthesize activationInfoView=_activationInfoView;
// - (void).cxx_destruct;
- (void)_updateLegibilitySettings;
- (void)_adjustTitleVisibilityForInfoViews;
- (void)_removeNormalAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 dispatchGroup:(id)arg3;
- (void)_animateHomeAffordanceToActive:(BOOL)arg1 withDispatchGroup:(id)arg2;
- (void)_animateHomeAffordanceCallToActionToActive:(BOOL)arg1 withDispatchGroup:(id)arg2;
- (void)_animateHomeButtonCallToActionToActive:(BOOL)arg1 withDispatchGroup:(id)arg2;
- (void)_animateView:(id)arg1 toActive:(BOOL)arg2 withDispatchGroup:(id)arg3;
- (void)_layoutHomeAffordance;
- (void)_layoutHomeAffordanceCallToAction;
- (void)_layoutHomeButtonCallToAction;
- (void)_layoutActivationInfoView;
- (void)_layoutRegulatoryInfo;
- (void)_setupActivationInfoConstraintsIfNeeded;
- (void)_setupConstraints;
- (void)_addHomeAffordanceCallToAction;
- (void)_addHomeAffordance;
- (void)_addHomeButtonCallToAction;
- (void)_addStoreRestrictedLabel;
- (void)_addTitleLabel;
- (void)_addInfoButton;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)layoutSubviews;
- (void)animateComponents:(NSUInteger)arg1 toActive:(BOOL)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)setInfoButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 withDelay:(double)arg3;
- (void)setCallToActionString:(id)arg1 forLanguage:(id)arg2;
- (void)setStoreRestrictedString:(id)arg1 forLanguage:(id)arg2;
- (void)setTitleString:(id)arg1 forLanguage:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 usingHomeAffordance:(BOOL)arg2 isStoreRestricted:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end

