//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NAFuture;

@interface HUPreloadedTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    NAFuture *_completionFuture;
}

@property(readonly, nonatomic) NAFuture *completionFuture; // @synthesize completionFuture=_completionFuture;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

@end

