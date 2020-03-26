//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHDataStorePropertyProviding-Protocol.h>

@class ACHDataStore, ACHEarnedInstanceStore, NSArray, NSDate, NSDateInterval, NSDictionary, NSOperationQueue, NSString;
@protocol ACHEarnedInstanceAwarding, OS_dispatch_queue;

@interface ACHEarnedInstanceAwardingSourceRecord : NSObject <ACHDataStorePropertyProviding>
{
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDateInterval *_lastScheduledEvaluationInterval;
    NSDateInterval *_lastCompletedEvaluationInterval;
    id <ACHEarnedInstanceAwarding> _source;
    NSDate *_registrationDate;
}

@property(readonly, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(readonly, nonatomic) id <ACHEarnedInstanceAwarding> source; // @synthesize source=_source;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dataStoreDidClearAllProperties:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) NSDictionary *dataStoreProperties;
@property(readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)addEvaluationOperationWithDateInterval:(id)arg1 databaseContext:(id)arg2 evaluationBlock:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
@property(readonly, nonatomic) NSDateInterval *lastScheduledEvaluationInterval;
@property(readonly, nonatomic) NSDateInterval *lastCompletedEvaluationInterval;
- (void)cancelAllEvaluationOperations;
- (id)initWithSource:(id)arg1 earnedInstanceStore:(id)arg2 dataStore:(id)arg3 registrationDate:(id)arg4;

@end

