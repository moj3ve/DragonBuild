//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSSStyle.h>

@interface TSTTableStyle : TSSStyle
{
}

+ (void)p_populateParagraphStyle:(id)arg1;
+ (void)initDefaultPropertyMap:(id)arg1 presetIndex:(NSUInteger)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetIndex:(NSUInteger)arg2 colors:(id)arg3;
+ (id)styleIDForPreset:(NSUInteger)arg1;
+ (id)nonEmphasisTableProperties;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
- (SEL)mapThemePropertyMapSelector;
- (void)validate;
- (unsigned int)maskForStrokePreset:(NSUInteger)arg1;
- (id)exteriorStrokeForStrokePreset:(NSUInteger)arg1;
- (id)verticalStrokeForStrokePreset:(NSUInteger)arg1;
- (id)horizontalStrokeForStrokePreset:(NSUInteger)arg1;
- (id)strokeForStrokePreset:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;

@end

