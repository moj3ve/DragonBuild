//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKTimelapseFace : NTKFace
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_orderedComplicationSlots;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_complicationSlotDescriptors;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (BOOL)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (NSUInteger)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(NSUInteger)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (NSUInteger)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)_complicationMigrationPaths;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;

@end

