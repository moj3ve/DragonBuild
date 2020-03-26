//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSSStyle.h>

#import <TSReading/TSSPreset-Protocol.h>

@class NSString;

@interface TSWPListStyle : TSSStyle <TSSPreset>
{
}

+ (id)presetStyleDescriptor;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)arg1;
+ (id)pLabelTypeArrayForType:(int)arg1;
+ (id)CJKListNameForNumberType:(int)arg1;
+ (id)propertyMapForListNumberType:(int)arg1;
+ (id)listStyleWithNumberType:(int)arg1 inStyleSheet:(id)arg2 withNumberedPresetStyle:(id)arg3;
+ (id)numberedlistStyleForPresets:(id)arg1;
+ (id)harvardStyleWithContext:(id)arg1;
+ (id)defaultStyleWithContext:(id)arg1 type:(int)arg2;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultMissingBulletImage;
+ (id)defaultLabelGeometries;
+ (id)defaultLabelIndents;
+ (id)defaultTextIndents;
+ (void)pGetDefaultTextIndentFloats:(double [9])arg1;
+ (BOOL)defaultTieredNumber;
+ (int)defaultLabelNumberType;
+ (id)defaultLabelString;
+ (int)firstLabelTypeForPropertyMapping:(id)arg1;
+ (int)labelTypeForLevel:(NSUInteger)arg1 forPropertyMapping:(id)arg2;
+ (int)effectiveTypeForLevel:(NSUInteger)arg1 forPropertyMapping:(id)arg2;
+ (int)pLabelTypeForLevel:(NSUInteger)arg1 forPropertyMapping:(id)arg2 includeDegenerateLevels:(BOOL)arg3;
+ (BOOL)isDefaultMissingBulletImage:(id)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
+ (id)stickyOverrideProperties;
- (id)baseStyleForTopicNumbers;
@property(readonly, nonatomic) NSString *presetKind;
- (id)overridePropertyMapWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (id)pOverrideArrayWithValue:(id)arg1 forProperty:(int)arg2 atParagraphLevels:(id)arg3 withContext:(id)arg4;
- (int)firstLabelType;
- (int)labelTypeForLevel:(NSUInteger)arg1;
- (int)effectiveTypeForLevel:(NSUInteger)arg1;
- (double)textIndentForLevel:(NSUInteger)arg1 fontSize:(double)arg2;
- (double)labelIndentForLevel:(NSUInteger)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;

@end

