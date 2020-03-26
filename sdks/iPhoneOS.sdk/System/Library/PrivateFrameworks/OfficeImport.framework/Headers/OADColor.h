//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : NSObject <NSCopying>
{
    NSMutableArray *mTransforms;
}

+ (int)mapSchemeColorID:(int)arg1 colorMap:(id)arg2;
+ (id)tsuColorWithRgbColor:(id)arg1;
+ (id)tsuColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)tsuColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (float)alphaWithColor:(id)arg1;
+ (id)rgbColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)colorForStyleColor:(id)arg1;
- (void)addTransformOfType:(int)arg1 value:(float)arg2;
- (void)addTransformOfType:(int)arg1;
- (void)setTransforms:(id)arg1;
- (id)transforms;
- (void)addTransform:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

