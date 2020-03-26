//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableAttribute.h>

#import <WorkflowKit/WFIntentParameterDescription-Protocol.h>

@class NSString;

@interface INCodableAttribute (Workflow) <WFIntentParameterDescription>
- (id)wf_processedParameterValueForValue:(id)arg1;
- (id)wf_contentItemForValue:(id)arg1;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2;
@property(readonly, nonatomic) Class wf_parameterClass;
@property(readonly, nonatomic) BOOL wf_multipleValues;
@property(readonly, nonatomic) NSString *wf_outputDisplayName;
@property(readonly, nonatomic) Class wf_contentItemClass;
@property(readonly, nonatomic) Class wf_facadeClass;
@property(readonly, nonatomic) Class wf_objectClass;
@property(readonly, nonatomic) NSString *wf_slotName;
@end

