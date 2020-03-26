//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HUTriggerConditionEditorSectionModule-Protocol.h>

@class HFConditionItemProvider, HFTransformItemProvider, HMHome, NSMutableSet, NSSet;

@interface HUTriggerCustomConditionEditorSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule>
{
    HMHome *_home;
    HFConditionItemProvider *_sourceConditionItemProvider;
    HFTransformItemProvider *_itemProvider;
    NSMutableSet *_mutableEnabledConditions;
    NSMutableSet *_mutableDisabledConditions;
}

@property(retain, nonatomic) NSMutableSet *mutableDisabledConditions; // @synthesize mutableDisabledConditions=_mutableDisabledConditions;
@property(retain, nonatomic) NSMutableSet *mutableEnabledConditions; // @synthesize mutableEnabledConditions=_mutableEnabledConditions;
@property(readonly, nonatomic) HFTransformItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(readonly, nonatomic) HFConditionItemProvider *sourceConditionItemProvider; // @synthesize sourceConditionItemProvider=_sourceConditionItemProvider;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (void)_buildItemProviders;
- (void)setConditionEnabled:(BOOL)arg1 forCondition:(id)arg2;
- (BOOL)isConditionEnabled:(id)arg1;
- (id)itemForCondition:(id)arg1;
- (id)conditionForItem:(id)arg1;
- (void)updateEnabledConditions:(id)arg1 disabledConditions:(id)arg2;
@property(readonly, nonatomic) NSSet *disabledConditions;
@property(readonly, nonatomic) NSSet *enabledConditions;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
@property(readonly, nonatomic) NSUInteger conditionType;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)initWithItemUpdater:(id)arg1;

@end

