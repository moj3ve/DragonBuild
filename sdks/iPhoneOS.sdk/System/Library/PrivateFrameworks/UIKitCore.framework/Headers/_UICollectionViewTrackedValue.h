//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionViewTrackedValue : NSObject
{
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
    BOOL _isAccumulating;
    double _trackedValue;
}

@property(nonatomic) double trackedValue; // @synthesize trackedValue=_trackedValue;
@property(nonatomic) BOOL isAccumulating; // @synthesize isAccumulating=_isAccumulating;
// - (void).cxx_destruct;
- (double)speed;
- (void)addValue:(double)arg1;
- (id)init;

@end

