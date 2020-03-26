//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CPLActiveDownloadQueue : NSObject
{
    NSMutableArray *_transferTasks;
    NSMutableArray *_transportTasks;
    BOOL _FIFOQueue;
    NSString *_name;
    NSUInteger _maximumBatchSize;
    NSUInteger _maximumConcurrentTransportTasks;
}

@property(readonly, nonatomic) NSUInteger maximumConcurrentTransportTasks; // @synthesize maximumConcurrentTransportTasks=_maximumConcurrentTransportTasks;
@property(readonly, nonatomic) NSUInteger maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property(readonly, nonatomic, getter=isFIFOQueue) BOOL FIFOQueue; // @synthesize FIFOQueue=_FIFOQueue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)status;
- (id)dequeueLastTransportTask;
@property(readonly, nonatomic) NSUInteger countOfTransferTasksInTransportTasks;
@property(readonly, nonatomic) NSUInteger countOfTransportTasks;
- (void)removeTransportTask:(id)arg1;
- (void)addTransportTask:(id)arg1;
- (void)removeAllTransferTasks;
@property(readonly, nonatomic) NSArray *allTransferTasks;
- (id)dequeueBatchOfTransferTasksDequeuedSize:(NSUInteger )arg1;
@property(readonly, nonatomic) NSUInteger countOfTransferTasks;
- (void)removeTransferTask:(id)arg1;
- (void)addTransferTask:(id)arg1;
- (id)initWithName:(id)arg1 FIFOQueue:(BOOL)arg2 maximumBatchSize:(NSUInteger)arg3 maximumConcurrentTransportTasks:(NSUInteger)arg4;

@end

