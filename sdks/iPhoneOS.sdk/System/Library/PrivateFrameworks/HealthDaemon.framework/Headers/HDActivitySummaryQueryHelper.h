//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>

@class HDActivitySummaryBuilder, HDProfile, HDSQLitePredicate, NSMutableDictionary, _HKFilter;
@protocol OS_dispatch_queue;

@interface HDActivitySummaryQueryHelper : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    _HKFilter *_filter;
    HDActivitySummaryBuilder *_activitySummaryBuilder;
    BOOL _initialResultsSent;
    BOOL _needsUpdateAfterUnlock;
    BOOL _shouldBatchSummaries;
    NSMutableDictionary *_previousActivityCachesByCacheIndex;
    long long _lastProcessedAnchor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id /* CDUnknownBlockType */ _initialResultsHandler;
    id /* CDUnknownBlockType */ _updateHandler;
    id /* CDUnknownBlockType */ _batchedInitialResultsHandler;
    id /* CDUnknownBlockType */ _batchedUpdateHandler;
    long long _enumeratedSummaryCount;
}

@property(setter=_setEnumeratedSummaryCount:) long long enumeratedSummaryCount; // @synthesize enumeratedSummaryCount=_enumeratedSummaryCount;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ batchedUpdateHandler; // @synthesize batchedUpdateHandler=_batchedUpdateHandler;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ batchedInitialResultsHandler; // @synthesize batchedInitialResultsHandler=_batchedInitialResultsHandler;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ initialResultsHandler; // @synthesize initialResultsHandler=_initialResultsHandler;
// - (void).cxx_destruct;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (id)_queue_filterActivityCaches:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id)_queue_addActivityCacheToCachedSamples:(id)arg1;
- (void)_queue_updateActivitySummariesWithNewActivityCaches:(id)arg1 anchor:(id)arg2;
- (void)_queue_updatePreviousActivityCachesWithNewCaches:(id)arg1;
- (id)_fetchActivityCacheIndicesWithAnchor:(long long)arg1 predicate:(id)arg2 error:(id )arg3;
- (void)_queue_deliverActivitySummariesMatchingPredicate:(id)arg1;
- (void)_queue_deliverInitialResults;
- (void)_queue_deliverUpdates;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1 isFinalBatch:(BOOL)arg2 clearPendingBatches:(BOOL)arg3;
- (void)_queue_deliverErrorToClient:(id)arg1;
@property(nonatomic) NSUInteger limit;
@property(nonatomic) BOOL orderByDateAscending;
@property BOOL shouldIncludeStatistics;
@property BOOL shouldIncludePrivateProperties;
- (BOOL)_shouldStopProcessing;
- (void)_queue_stop;
- (void)stop;
- (void)pause;
- (void)_queue_start;
- (void)start;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 filter:(id)arg2 batchedInitialResultsHandler:(id /* CDUnknownBlockType */)arg3 batchedUpdateHandler:(id /* CDUnknownBlockType */)arg4;
- (id)initWithProfile:(id)arg1 filter:(id)arg2 initialResultsHandler:(id /* CDUnknownBlockType */)arg3 updateHandler:(id /* CDUnknownBlockType */)arg4;

@end

