//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCJobsMatching-Protocol.h>

@class PQLFormatInjection, PQLRawInjection;

@protocol BRCJobIdentifying <BRCJobsMatching, NSCopying>
- (PQLFormatInjection *)columnsValues;
- (PQLRawInjection *)columns;
@end

