//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, _UIFeedback, _UIFeedbackParameters;

@protocol _UIFeedbackPlayer
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationBlock;
- (void)_stopFeedback:(_UIFeedback *)arg1;
- (void)_playFeedback:(_UIFeedback *)arg1 atTime:(double)arg2;
- (void)_updateValueForParameters:(_UIFeedbackParameters *)arg1 withKey:(NSString *)arg2;
@end

