//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FIUIState : NSObject
{
    NSMutableDictionary *_transitions;
    BOOL _transitional;
    NSString *_label;
    id /* CDUnknownBlockType */ _entry;
    id /* CDUnknownBlockType */ _exit;
    FIUIState *_parentState;
    NSMutableSet *_childStates;
    FIUIState *_entryState;
}

+ (id)stateWithLabel:(id)arg1;
+ (id)transitionalStateFromState:(id)arg1 toState:(id)arg2 entryEvent:(long long)arg3 exitEvent:(long long)arg4;
@property(nonatomic) __weak FIUIState *entryState; // @synthesize entryState=_entryState;
@property(readonly, nonatomic) NSMutableSet *childStates; // @synthesize childStates=_childStates;
@property(nonatomic) __weak FIUIState *parentState; // @synthesize parentState=_parentState;
@property(getter=isTransitional) BOOL transitional; // @synthesize transitional=_transitional;
@property(copy) id /* CDUnknownBlockType */ exit; // @synthesize exit=_exit;
@property(copy) id /* CDUnknownBlockType */ entry; // @synthesize entry=_entry;
@property(readonly) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (void)addChildStates:(id)arg1 withEntryState:(id)arg2;
- (id)description;
- (id)transitionForEvent:(long long)arg1;
- (void)enumerateEvents:(id /* CDUnknownBlockType */)arg1;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4 gate:(id /* CDUnknownBlockType */)arg5;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3;
- (id)allTransitions;
- (id)initWithLabel:(id)arg1;

@end

