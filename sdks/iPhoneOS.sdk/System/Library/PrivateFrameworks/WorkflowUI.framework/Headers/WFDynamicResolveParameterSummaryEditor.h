//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/WFDynamicResolveViewControllerDelegate-Protocol.h>

@class UIViewController;

@interface WFDynamicResolveParameterSummaryEditor : WFModuleSummaryEditor <WFDynamicResolveViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
}

@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
// - (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)dynamicResolverViewController:(id)arg1 didFailToResolveWithError:(id)arg2;
- (void)dynamicResolverViewController:(id)arg1 didFinishResolvingWithObject:(id)arg2;
- (void)finishAndDismiss:(BOOL)arg1;
- (void)cancelEditingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4;

@end

