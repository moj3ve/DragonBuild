//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEventRecorderDelegate-Protocol.h>

@class NSDictionary, NSSet;

@protocol MTEventListenerDelegate <MTEventRecorderDelegate>

@optional
- (BOOL)shouldRecordEvent:(NSDictionary *)arg1;
- (NSSet *)whitelistedFields;
@end

