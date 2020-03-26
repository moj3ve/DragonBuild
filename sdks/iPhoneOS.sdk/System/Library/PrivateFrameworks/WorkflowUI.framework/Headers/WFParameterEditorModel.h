//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, WFGradient, WFParameter;
@protocol WFParameterState;

@interface WFParameterEditorModel : NSObject
{
    WFParameter *_parameter;
    id <WFParameterState> _state;
    NSError *_resourceError;
    WFGradient *_buttonGradient;
}

@property(readonly, nonatomic) WFGradient *buttonGradient; // @synthesize buttonGradient=_buttonGradient;
@property(readonly, nonatomic) NSError *resourceError; // @synthesize resourceError=_resourceError;
@property(readonly, nonatomic) id <WFParameterState> state; // @synthesize state=_state;
@property(readonly, nonatomic) WFParameter *parameter; // @synthesize parameter=_parameter;
// - (void).cxx_destruct;
- (id)initWithResourceError:(id)arg1 buttonGradient:(id)arg2;
- (id)initWithParameter:(id)arg1 state:(id)arg2;

@end

