//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKFillStyle.h>

@class UIColor;

@interface HKSolidFillStyle : HKFillStyle
{
    UIColor *_color;
}

@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_renderInContext:(CGContext )arg1 size:(CGSize)arg2;

@end

