//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface HKLineSeriesPointMarkerStyle : NSObject
{
    UIColor *_pointColor;
    double _radius;
    long long _pointMarkerStyle;
}

@property(nonatomic) long long pointMarkerStyle; // @synthesize pointMarkerStyle=_pointMarkerStyle;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *pointColor; // @synthesize pointColor=_pointColor;
// - (void).cxx_destruct;
- (id)initWithColor:(id)arg1 radius:(double)arg2 style:(long long)arg3;

@end

