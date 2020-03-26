//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTScheduler-Protocol.h>

@protocol NAScheduler, OS_dispatch_queue;

@interface _MTSerialQueueScheduler : NSObject <MTScheduler>
{
    id <NAScheduler> _internalScheduler;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) id <NAScheduler> internalScheduler; // @synthesize internalScheduler=_internalScheduler;
// - (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* CDUnknownBlockType */)arg2;
- (id)performCancelableBlock:(id /* CDUnknownBlockType */)arg1;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1;
- (void)performSyncBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithQueue:(id)arg1;

@end

