//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKImageProvider.h>

@interface NTKWorkoutComplicationImageProvider : CLKImageProvider
{
    BOOL _paused;
    BOOL _frozen;
}

@property(nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen=_frozen;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

