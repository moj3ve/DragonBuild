//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMAudioDataSource;

@interface AXMAudioEffect : NSObject
{
    AXMAudioDataSource *_inputSource;
}

@property(nonatomic) __weak AXMAudioDataSource *inputSource; // @synthesize inputSource=_inputSource;
// - (void).cxx_destruct;
- (void)processSamples:(NSUInteger)arg1;

@end

