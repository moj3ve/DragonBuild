//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSString;
@protocol WFExpandingParameterHintProvider;

@interface WFExpandingParameter : WFParameter
{
    NSString *_hintLabel;
    id <WFExpandingParameterHintProvider> _hintProvider;
}

@property(nonatomic) __weak id <WFExpandingParameterHintProvider> hintProvider; // @synthesize hintProvider=_hintProvider;
// - (void).cxx_destruct;
- (BOOL)supportsImportQuestions;
- (id)defaultSupportedVariableTypes;
@property(readonly, nonatomic) NSString *hintLabel; // @synthesize hintLabel=_hintLabel;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

