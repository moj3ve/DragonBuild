//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFOpenURLAction : WFHandleCustomIntentAction
{
}

- (BOOL)populatesInputFromInputParameter;
- (void)openURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (id)generatedAccessResource;

@end

