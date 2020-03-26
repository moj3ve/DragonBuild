//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSString, SBAppLayout;

@interface SBGestureRootSwitcherModifier : SBSwitcherModifier
{
    BOOL _shouldVerifyModifierStackCoherencyCheckAfterHandlingEvent;
    NSString *_activeTransitionKey;
    SBAppLayout *_selectedAppLayout;
    long long _currentEnvironmentMode;
}

@property(readonly, nonatomic) long long currentEnvironmentMode; // @synthesize currentEnvironmentMode=_currentEnvironmentMode;
@property(readonly, nonatomic) SBAppLayout *selectedAppLayout; // @synthesize selectedAppLayout=_selectedAppLayout;
// - (void).cxx_destruct;
- (id)_transitionModifier;
- (id)_gestureModifier;
- (void)_performModifierStackCoherencyCheckIfNeededAfterHandlingEvent:(id)arg1;
- (id)_forwardEventAndUpdateInternalState:(id)arg1;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (id)handleGestureEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (long long)gestureType;
- (id)initWithStartingEnvironmentMode:(long long)arg1;

@end

