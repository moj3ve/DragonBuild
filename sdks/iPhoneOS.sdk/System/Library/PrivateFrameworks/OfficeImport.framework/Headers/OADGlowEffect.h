//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGlowEffect : OADEffect
{
    OADColor *mColor;
    float mRadius;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)setRadius:(float)arg1;
- (float)radius;
- (void)setColor:(id)arg1;
- (id)color;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

