//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class PETDistributionEventTracker;

@interface SBFolderStatsQueryableMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    PETDistributionEventTracker *_dockAppsTracker;
    PETDistributionEventTracker *_dockFoldersTracker;
    PETDistributionEventTracker *_dockItemsTracker;
    PETDistributionEventTracker *_pageTracker;
    PETDistributionEventTracker *_folderTracker;
}

// - (void).cxx_destruct;
- (BOOL)handleEvent:(NSUInteger)arg1 withContext:(id)arg2;
- (id)init;

@end

