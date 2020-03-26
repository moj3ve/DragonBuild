//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _UIDynamicAnimation : NSObject
{
    id /* CDUnknownBlockType */ _completion;
    int _state;
    unsigned int _began:1;
    unsigned int _running:1;
    unsigned int _completing:1;
    unsigned int _yield:1;
    unsigned int _grouped:1;
    unsigned int _usesNSTimer:1;
}

+ (id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(CGPoint)arg5;
+ (void)_updateAnimationsWithTimer:(id)arg1;
+ (void)_updateAnimations:(id)arg1;
+ (void)_updateAnimations:(id)arg1 timer:(id)arg2;
- (id)description;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (BOOL)_isRunning;
- (void)_setGrouped:(BOOL)arg1;
- (BOOL)_isGrouped;
- (void)_setUsesNSTimer:(BOOL)arg1;
- (BOOL)_usesNSTimer;
- (void)_setShouldYield:(BOOL)arg1;
- (BOOL)_shouldYield;
@property(readonly, nonatomic) int state;
- (void)_cancelWithAppliers:(id /* CDUnknownBlockType */)arg1;
- (void)_completeWithFinished:(BOOL)arg1;
- (void)stop;
- (void)runWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)runWithCompletion:(id /* CDUnknownBlockType */)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3;
- (void)_callAppliers:(id /* CDUnknownBlockType */)arg1 additionalEndAppliers:(id /* CDUnknownBlockType */)arg2 done:(BOOL)arg3;
- (BOOL)_animateForInterval:(double)arg1;
- (void)_stopAnimation;
- (void)dealloc;
- (id)init;

@end

