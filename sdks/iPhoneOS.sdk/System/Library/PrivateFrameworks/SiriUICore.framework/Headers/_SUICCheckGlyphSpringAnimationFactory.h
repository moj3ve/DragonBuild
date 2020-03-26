//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface _SUICCheckGlyphSpringAnimationFactory : NSObject
{
    double _duration;
    BOOL _needsDurationUpdate;
    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
    CAMediaTimingFunction *_timing;
}

+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;
+ (id)springAnimationWithKeyPath:(id)arg1;
+ (double)defaultDuration;
+ (id)defaultTimingFunction;
@property(retain, nonatomic) CAMediaTimingFunction *timing; // @synthesize timing=_timing;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double duration;
- (void)_updateDurationIfNecessary;
- (id)_timingFunctionForAnimation;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (id)springAnimationWithKeyPath:(id)arg1;
- (void)dealloc;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;
- (id)initWithVelocity:(double)arg1;
- (id)init;

@end

