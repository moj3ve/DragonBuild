//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GEOCoarseLocationProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
}

// - (void).cxx_destruct;
- (void)_fetchBasicCoarseEquivalentForLocation:(id)arg1 fallbackIsPermanent:(BOOL)arg2 callbackQueue:(id)arg3 callback:(id /* CDUnknownBlockType */)arg4;
- (void)fetchCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(id /* CDUnknownBlockType */)arg3;
- (id)init;

@end

