//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumberFormatter, UIButton, UILabel, UIProgressView, _UIBackdropView;

@interface PLProgressView : UIView
{
    UIButton *_cancelButton;
    UILabel *_labelView;
    UIProgressView *_progressView;
    UIView *_topDivider;
    unsigned int _didLayout:1;
    unsigned int _didSetPermanantTextOnLabelView:1;
    NSNumberFormatter *_progressFormatter;
    long long _backgroundType;
    UIView *_backgroundView;
    UIView *_backgroundTintedView;
    _UIBackdropView *_backgroundBlurredView;
    BOOL _showsCancelButton;
    id /* CDUnknownBlockType */ _cancelationHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(retain, nonatomic) _UIBackdropView *backgroundBlurredView; // @synthesize backgroundBlurredView=_backgroundBlurredView;
@property(retain, nonatomic) UIView *backgroundTintedView; // @synthesize backgroundTintedView=_backgroundTintedView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long backgroundType; // @synthesize backgroundType=_backgroundType;
- (void)_cancel:(id)arg1;
@property(nonatomic) float percentComplete;
- (void)setLabelText:(id)arg1;
- (void)updateUIForPublishingAgent:(id)arg1;
- (void)_removeBackgroundTintedView;
- (void)_installBackgroundTintedView;
- (void)_removeBackgroundBlurredView;
- (void)_installBackgroundBlurredView;
- (void)_installBackgroundView;
- (void)_syncToBackgroundType;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

