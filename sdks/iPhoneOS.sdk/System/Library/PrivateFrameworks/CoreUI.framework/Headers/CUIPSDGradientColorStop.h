//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIPSDGradientStop.h>


@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding>
{
    struct _psdGradientColor gradientColor;
}

+ (id)colorStopWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;
+ (void)initialize;
- (id)description;
- (BOOL)isColorStop;
- (double)colorLocation;
- (struct _psdGradientColor)gradientColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;

@end

