//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PXBarAnimationOptions : NSObject <NSCopying>
{
    long long _type;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithType:(long long)arg1 duration:(double)arg2;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

