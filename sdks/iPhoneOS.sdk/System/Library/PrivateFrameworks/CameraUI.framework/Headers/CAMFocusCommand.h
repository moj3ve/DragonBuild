//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusCommand : CAMCaptureCommand
{
    BOOL __shouldUseSmoothFocus;
    long long __focusMode;
    CGPoint __focusPointOfInterest;
}

@property(readonly, nonatomic) BOOL _shouldUseSmoothFocus; // @synthesize _shouldUseSmoothFocus=__shouldUseSmoothFocus;
@property(readonly, nonatomic) CGPoint _focusPointOfInterest; // @synthesize _focusPointOfInterest=__focusPointOfInterest;
@property(readonly, nonatomic) long long _focusMode; // @synthesize _focusMode=__focusMode;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocusMode:(long long)arg1 smooth:(BOOL)arg2;
- (id)initWithFocusMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 smooth:(BOOL)arg3;
- (id)initWithFocusMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2;
- (id)initWithFocusMode:(long long)arg1;

@end

