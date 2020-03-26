//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIViewPropertyAnimator *_presentationAnimator;
    double _interactiveTransitionFraction;
    BOOL _shouldPerformAsDismissTransition;
    BOOL _didScheduleFinishTransition;
    BOOL _didScheduleCancelTransition;
}

// - (void).cxx_destruct;
- (BOOL)_shouldReduceMotion;
- (void)_applyPushDecayEffectTransformToView:(id)arg1;
- (id)_newPushDecayAnimator;
- (id)_newReducedMotionTimingCurveProviderForPreviewTransition;
- (id)_newTimingCurveProviderForPreviewTransition;
- (id)_preparedPresentationAnimator;
- (id)_previewPresentationControllerForViewController:(id)arg1;
- (id)_previewPresentationControllerForTransitionContext:(id)arg1;
- (void)_performCancelTransition;
- (void)_performFinishTransition;
@property(readonly, nonatomic) BOOL wantsInteractiveStart;
- (void)startInteractiveTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)cancelTransition;
- (void)finishTransition;
- (void)updateInteractiveTransition:(double)arg1;
@property(readonly, nonatomic) double interactiveTransitionFraction; // @dynamic interactiveTransitionFraction;
- (id)init;

@end

