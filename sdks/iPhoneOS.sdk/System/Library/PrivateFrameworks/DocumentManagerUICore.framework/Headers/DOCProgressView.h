//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class DOCDeterminateProgressRingView, DOCGhostRingView, DOCIndeterminateProgressRingView, NSOperationQueue, NSProgress, UIColor, UITapGestureRecognizer;

@interface DOCProgressView : UIView
{
    NSOperationQueue *_pendingAnimationQueue;
    BOOL _canShowStopButton;
    BOOL _graduallyIncreasingProgress;
    UIColor *_inactiveStrokeColor;
    UIColor *_activeStrokeColor;
    NSProgress *_observedProgress;
    DOCGhostRingView *_ghostRingView;
    DOCDeterminateProgressRingView *_determinateProgressRingView;
    DOCIndeterminateProgressRingView *_indeterminateProgressRingView;
    double _progress;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) BOOL graduallyIncreasingProgress; // @synthesize graduallyIncreasingProgress=_graduallyIncreasingProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) DOCIndeterminateProgressRingView *indeterminateProgressRingView; // @synthesize indeterminateProgressRingView=_indeterminateProgressRingView;
@property(retain, nonatomic) DOCDeterminateProgressRingView *determinateProgressRingView; // @synthesize determinateProgressRingView=_determinateProgressRingView;
@property(retain, nonatomic) DOCGhostRingView *ghostRingView; // @synthesize ghostRingView=_ghostRingView;
@property(nonatomic) BOOL canShowStopButton; // @synthesize canShowStopButton=_canShowStopButton;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property(copy, nonatomic) UIColor *activeStrokeColor; // @synthesize activeStrokeColor=_activeStrokeColor;
@property(copy, nonatomic) UIColor *inactiveStrokeColor; // @synthesize inactiveStrokeColor=_inactiveStrokeColor;
// - (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)animateToFullRingAndHideWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fadeoutWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)beginGraduallyIncreasingProgress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_setProgress:(double)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_updateStatusPropertiesAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_addToPendingAnimationQueue:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

