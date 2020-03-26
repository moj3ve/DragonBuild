//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/SBUIAnimationControllerObserver-Protocol.h>

@class FBDisplayLayoutTransition, SBUIAnimationController;

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBUIAnimationController *_animation;
    FBDisplayLayoutTransition *_layoutTransition;
}

// - (void).cxx_destruct;
- (void)_performStandardPresentationAnimated:(BOOL)arg1;
- (void)_logForInterruptAttemptReason:(id)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (BOOL)canInterruptForTransitionRequest:(id)arg1;
- (void)_willBegin;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;

@end

