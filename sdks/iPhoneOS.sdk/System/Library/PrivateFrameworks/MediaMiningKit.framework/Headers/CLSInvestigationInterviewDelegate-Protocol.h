//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLSInvestigation, NSIndexSet;

@protocol CLSInvestigationInterviewDelegate <NSObject>

@optional
- (CGImage )itemThumbnailInInvestigation:(CLSInvestigation *)arg1 atIndex:(NSUInteger)arg2 withResolution:(NSUInteger)arg3;
- (NSIndexSet *)sampleOfItemsInInvestigation:(CLSInvestigation *)arg1;
- (NSUInteger)numberOfItemsInInvestigation:(CLSInvestigation *)arg1;
@end

