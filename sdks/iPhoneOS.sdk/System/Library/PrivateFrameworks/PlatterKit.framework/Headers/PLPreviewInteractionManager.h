//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLClickPresentationInteractionManager.h>

@protocol PLPreviewInteractionManagerDelegate;

@interface PLPreviewInteractionManager : PLClickPresentationInteractionManager
{
}

+ (void)initialize;
- (void)_delegateDeclinedDismissingPresentedContentWithTrigger:(long long)arg1;
- (void)_delegateWillDismissPresentedContentWithTrigger:(long long)arg1;
- (void)_delegateShouldFinishInteractionWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_delegateDidEndUserInteraction;
- (void)_delegateWillBeginUserInteraction;
- (BOOL)_delegateShouldBeginInteractionWithTouchAtLocation:(CGPoint)arg1;
- (id)_delegateContainerView;
- (id)_delegateTransitioningDelegate;
- (id)_delegatePresentedViewController;
@property(nonatomic) __weak id <PLPreviewInteractionManagerDelegate> delegate; // @dynamic delegate;
- (id)initWithPresentingViewController:(id)arg1;

@end

