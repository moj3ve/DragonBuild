//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUFadeViewAnimator : NSObject
{
    double _fadeOutDuration;
    double _fadeInDuration;
    double _fadeInDelay;
}

@property(nonatomic) double fadeInDelay; // @synthesize fadeInDelay=_fadeInDelay;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
- (void)fadeFromView:(id)arg1 toView:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)init;

@end

