//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponent.h>

@interface WFNumberFieldComponent : CKStatefulViewComponent
{
    id /* CDUnknownBlockType */ _updateBlock;
    id /* CDUnknownBlockType */ _variableBlock;
    CKTypedComponentAction_789af415 _doneAction;
    struct WFNumberFieldAttributes _attributes;
}

+ (id)newWithAttributes:(const struct WFNumberFieldAttributes )arg1 updateBlock:(id /* CDUnknownBlockType */)arg2 variableBlock:(id /* CDUnknownBlockType */)arg3 doneAction:(CKTypedComponentAction_789af415)arg4 size:(const struct CKComponentSize )arg5;
@property(readonly, nonatomic) CKTypedComponentAction_789af415 doneAction; // @synthesize doneAction=_doneAction;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ variableBlock; // @synthesize variableBlock=_variableBlock;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) struct WFNumberFieldAttributes attributes; // @synthesize attributes=_attributes;
- (id).cxx_construct;
// - (void).cxx_destruct;

@end

