//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthMenstrualCycles/HKMCDaySummaryQueryClientInterface-Protocol.h>

@class NSMutableArray;

@interface HKMCDaySummaryQuery : HKQuery <HKMCDaySummaryQueryClientInterface>
{
    id /* CDUnknownBlockType */ _resultsHandler;
    NSMutableArray *_summariesPendingDelivery;
    BOOL _ascending;
    long long _limit;
    CDStruct_ef5fcbe6 _dayIndexRange;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) CDStruct_ef5fcbe6 dayIndexRange; // @synthesize dayIndexRange=_dayIndexRange;
// - (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverDaySummaries:(id)arg1 clearPending:(BOOL)arg2 isFinalBatch:(BOOL)arg3 analysisAnchor:(id)arg4 queryUUID:(id)arg5;
- (id)initWithDayIndexRange:(CDStruct_ef5fcbe6)arg1 ascending:(BOOL)arg2 limit:(long long)arg3 resultsHandler:(id /* CDUnknownBlockType */)arg4;

@end

