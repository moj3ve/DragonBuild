//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKInkFeatheringDescriptor : NSObject
{
    double _startCapTime;
    double _startCapFade;
    double _endCapTime;
    double _endCapFade;
}

+ (id)descriptorWithStartCapTime:(double)arg1 startCapFade:(double)arg2 endCapTime:(double)arg3 endCapFade:(double)arg4;
@property(nonatomic) double endCapFade; // @synthesize endCapFade=_endCapFade;
@property(nonatomic) double endCapTime; // @synthesize endCapTime=_endCapTime;
@property(nonatomic) double startCapFade; // @synthesize startCapFade=_startCapFade;
@property(nonatomic) double startCapTime; // @synthesize startCapTime=_startCapTime;

@end

