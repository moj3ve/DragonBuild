//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariable.h>

@class NSString, WFAction;
@protocol WFVariableProvider;

@interface WFActionOutputVariable : WFVariable
{
    id <WFVariableProvider> _variableProvider;
    WFAction *_action;
}

- (id)variableProvider;
// - (void).cxx_destruct;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)possibleContentClassesWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (id)icon;
@property(readonly, nonatomic) NSString *outputUUID;
- (BOOL)isAvailable;
- (id)UUID;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (id)initWithOutputUUID:(id)arg1 outputName:(id)arg2 variableProvider:(id)arg3 aggrandizements:(id)arg4;
- (id)initWithAction:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;

@end

