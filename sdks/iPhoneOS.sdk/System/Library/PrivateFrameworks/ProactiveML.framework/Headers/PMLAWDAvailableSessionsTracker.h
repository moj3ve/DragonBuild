//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLAWDBaseTracker.h>

@class AWDServerConnection;
@protocol PMLAWDMetricQueryDelegate;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker
{
    id <PMLAWDMetricQueryDelegate> _delegate;
    AWDServerConnection *_awdServerConnection;
}

// - (void).cxx_destruct;
- (void)reportStatsToAWD;
- (void)setAWDMetricQueryDelegate:(id)arg1;
- (id)initWithAWDConnection:(id)arg1;
- (id)init;

@end

