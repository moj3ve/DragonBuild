//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDActivityCacheManager, HKActivityCache, HKHeartRateSummary;

@protocol HDActivityCacheManagerObserver <NSObject>
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedTodayActivityCache:(HKActivityCache *)arg2;

@optional
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedHeartRateSummary:(HKHeartRateSummary *)arg2 isToday:(BOOL)arg3;
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedYesterdayActivityCache:(HKActivityCache *)arg2;
@end

