//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFBlockControlCanceling-Protocol.h>
#import <PhotoFoundation/PFBlockControlDirectExecution-Protocol.h>
#import <PhotoFoundation/PFBlockControlQueueing-Protocol.h>

@class NSString, PFDispatchQueue;
@protocol OS_dispatch_group;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution>
{
    PFDispatchQueue *_queue;
    id /* CDUnknownBlockType */ _block;
    NSObject<OS_dispatch_group> *_workGroup;
    _Atomic NSUInteger _status;
    BOOL _executeOnDealloc;
}

@property BOOL executeOnDealloc; // @synthesize executeOnDealloc=_executeOnDealloc;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)executeBlock;
- (BOOL)groupNotify:(id)arg1;
- (BOOL)enqueueWithDelay:(NSUInteger)arg1;
- (BOOL)enqueue;
- (NSUInteger)_shouldEnqueue;
- (BOOL)dequeue;
- (BOOL)blockWasCanceled;
- (BOOL)cancelBlock;
- (BOOL)tryCancelBlock;
- (void)waitForBlock;
- (void)notifyOnQueue:(id)arg1 whenFinished:(id /* CDUnknownBlockType */)arg2;
- (BOOL)blockHasFinished;
- (BOOL)blockHasStarted;
- (void)invoke:(NSUInteger)arg1;
- (void)_execute;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithQueue:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

