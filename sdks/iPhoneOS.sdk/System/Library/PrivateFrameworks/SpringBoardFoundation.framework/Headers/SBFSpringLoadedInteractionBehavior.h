//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol SBFSpringLoadedInteractionBehaviorDelegate;

@interface SBFSpringLoadedInteractionBehavior : NSObject <UISpringLoadedInteractionBehavior>
{
    id <SBFSpringLoadedInteractionBehaviorDelegate> _delegate;
}

@property(nonatomic) __weak id <SBFSpringLoadedInteractionBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)interactionDidFinish:(id)arg1;
- (BOOL)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;

@end

