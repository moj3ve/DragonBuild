//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackPlayer-Protocol.h>

@class NSArray, _UIFeedback;

@protocol _UIFeedbackPlayer_Internal <_UIFeedbackPlayer>
- (void)_internal_stopFeedbackData:(NSArray *)arg1 forFeedback:(_UIFeedback *)arg2;
- (BOOL)_internal_playFeedbackData:(NSArray *)arg1 forFeedback:(_UIFeedback *)arg2 atTime:(double)arg3;
@end

