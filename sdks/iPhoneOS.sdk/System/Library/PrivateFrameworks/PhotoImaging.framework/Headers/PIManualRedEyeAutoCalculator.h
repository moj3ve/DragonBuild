//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PIRedEyeAutoCalculator.h>

@interface PIManualRedEyeAutoCalculator : PIRedEyeAutoCalculator
{
    CGPoint _location;
    double _touchDiameter;
}

- (void)_configureRequest:(id)arg1;
- (id)_options;
- (id)initWithComposition:(id)arg1 location:(CGPoint)arg2 touchDiameter:(double)arg3;

@end

