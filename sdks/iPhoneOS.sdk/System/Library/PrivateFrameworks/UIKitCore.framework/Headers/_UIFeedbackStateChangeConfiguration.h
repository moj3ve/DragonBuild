//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _UIFeedback;
@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;

@interface _UIFeedbackStateChangeConfiguration : NSObject <NSCopying>
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_thresholdFeedback;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_approachFeedback;
    double _approachStart;
    double _approachEnd;
    double _approachCurvature;
    double _approachVolumeMax;
}

@property(nonatomic) double approachVolumeMax; // @synthesize approachVolumeMax=_approachVolumeMax;
@property(nonatomic) double approachCurvature; // @synthesize approachCurvature=_approachCurvature;
@property(nonatomic) double approachEnd; // @synthesize approachEnd=_approachEnd;
@property(nonatomic) double approachStart; // @synthesize approachStart=_approachStart;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *approachFeedback; // @synthesize approachFeedback=_approachFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *thresholdFeedback; // @synthesize thresholdFeedback=_thresholdFeedback;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

