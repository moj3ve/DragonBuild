//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLClickPresentationTransition.h>

@class PLClickPresentationPresentationTransition;

@interface PLClickPresentationDismissalTransition : PLClickPresentationTransition
{
    PLClickPresentationPresentationTransition *_presentationTransition;
}

@property(nonatomic) __weak PLClickPresentationPresentationTransition *presentationTransition; // @synthesize presentationTransition=_presentationTransition;
// - (void).cxx_destruct;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)_newAnimator;
- (void)updateBackgroundViewForTransition;
- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;

@end

