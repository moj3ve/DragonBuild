//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKBubblePathAnimator : NSObject
{
}

+ (id)hiTimingFunction;
+ (id)sharedBubblePathAnimator;
- (id)effectiveViewForContext:(id)arg1;
- (double)minimumDurationForViewAnimations;
- (void)animateTransition:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)animateTransition:(id)arg1;
- (BOOL)bubblesOnscreenAtEnd;
- (BOOL)bubblesOnscreenAtBeginning;
@property(readonly, nonatomic) long long animatorType;

@end

