//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponentController.h>

#import <WorkflowUI/WFActionEventObserver-Protocol.h>
#import <WorkflowUI/WFComponentEditingSession-Protocol.h>
#import <WorkflowUI/WFModuleSummaryViewDelegate-Protocol.h>

@class NSDictionary;

@interface WFModuleSummaryComponentController : CKStatefulViewComponentController <WFModuleSummaryViewDelegate, WFComponentEditingSession, WFActionEventObserver>
{
    BOOL _summaryIsEditing;
    BOOL _shouldReflowWhenComponentRemounted;
    BOOL _actionRunning;
    NSDictionary *_stagedParameterStates;
}

+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (double)heightForComponent:(id)arg1 withWidth:(double)arg2;
+ (id)newStatefulView:(id)arg1;
@property(nonatomic) BOOL actionRunning; // @synthesize actionRunning=_actionRunning;
@property(retain, nonatomic) NSDictionary *stagedParameterStates; // @synthesize stagedParameterStates=_stagedParameterStates;
@property(nonatomic) BOOL shouldReflowWhenComponentRemounted; // @synthesize shouldReflowWhenComponentRemounted=_shouldReflowWhenComponentRemounted;
@property(nonatomic) BOOL summaryIsEditing; // @synthesize summaryIsEditing=_summaryIsEditing;
// - (void).cxx_destruct;
- (void)actionRunningStateDidChange:(id)arg1;
- (void)updateColorsForRunningStateAnimated:(BOOL)arg1;
- (void)cancelEditingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)summaryViewDidInvalidateSize:(id)arg1;
- (void)summaryViewDidEndEditing:(id)arg1;
- (void)summaryViewWillBeginEditing:(id)arg1;
- (id)viewControllerContainingSummaryView:(id)arg1;
- (void)reflowWithStagedParameterStates:(id)arg1;
- (void)didUpdateComponent;
- (BOOL)canRelinquishStatefulView;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)didAcquireStatefulView:(id)arg1;
- (id)summaryView;

@end

