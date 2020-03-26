//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WFWidgetExplanationSettings;
@protocol WFWidgetExplanationPageViewDelegate;

@interface WFWidgetExplanationPageView : UIView
{
    id <WFWidgetExplanationPageViewDelegate> _delegate;
    UILabel *_sloganLabel;
    UILabel *_supplementaryLabel;
    UIButton *_continueButton;
    WFWidgetExplanationSettings *_settings;
}

@property(retain, nonatomic) WFWidgetExplanationSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak UILabel *supplementaryLabel; // @synthesize supplementaryLabel=_supplementaryLabel;
@property(nonatomic) __weak UILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(nonatomic) __weak id <WFWidgetExplanationPageViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)completedOnboarding;
- (void)continueButtonPressed;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)supplementarySizeThatFits:(CGSize)arg1;
- (CGSize)sloganSizeThatFits:(CGSize)arg1;
- (id)initWithSettings:(id)arg1;

@end

