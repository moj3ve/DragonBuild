//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>

@class HKMedicalIDEditorWeightCell;

@interface HKEmergencyCardWeightTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate>
{
    HKMedicalIDEditorWeightCell *_editableCell;
}

// - (void).cxx_destruct;
- (void)commitEditing;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (BOOL)canEditRowAtIndex:(long long)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (BOOL)shouldHighlightRowAtIndex:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (id)_createEditableCell;
- (void)localeDidChange:(id)arg1;
- (BOOL)hasPresentableData;
- (id)title;

@end

