//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface ICCircleLayer : CALayer
{
    double _strokeWidth;
    CGColor _strokeColor;
    CGColor _fillColor;
}

@property(retain, nonatomic) CGColor fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) CGColor strokeColor; // @synthesize strokeColor=_strokeColor;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
- (void)drawInContext:(CGContext )arg1;

@end

