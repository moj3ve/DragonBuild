//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXFeedbackCollector, PXFeedbackSender;

@interface PXFeedbackManager : NSObject
{
    NSUInteger _feedbackCollectionType;
    PXFeedbackCollector *_feedbackCollector;
    PXFeedbackSender *_feedbackSender;
}

+ (id)sharedManager;
@property(readonly, nonatomic) PXFeedbackSender *feedbackSender; // @synthesize feedbackSender=_feedbackSender;
@property(readonly, nonatomic) PXFeedbackCollector *feedbackCollector; // @synthesize feedbackCollector=_feedbackCollector;
// - (void).cxx_destruct;
- (void)removeFeedbackEntry:(id)arg1;
- (void)provideUserFeedbackEntry:(id)arg1;
- (id)provideUserFeedbackFromDictionary:(id)arg1 forFeedbackType:(NSUInteger)arg2;
- (id)init;

@end

