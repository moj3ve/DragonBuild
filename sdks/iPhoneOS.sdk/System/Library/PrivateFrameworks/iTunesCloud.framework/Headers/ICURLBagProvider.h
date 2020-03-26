//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
}

+ (id)sharedBagProvider;
// - (void).cxx_destruct;
- (id)_cacheFilePath;
- (void)_saveCache;
- (void)_loadCache;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_fetchBagForRequestContext:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_getCacheKeyForRequestContext:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)invalidateCache;
- (void)getBagForRequestContext:(id)arg1 forceRefetch:(BOOL)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getBagForRequestContext:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)init;

@end

