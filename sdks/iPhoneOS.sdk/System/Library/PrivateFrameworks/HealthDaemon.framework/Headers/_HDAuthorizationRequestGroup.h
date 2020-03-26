//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKSource, NSMutableArray, NSMutableSet, NSSet, NSString, NSUUID;
@protocol OS_dispatch_source;

@interface _HDAuthorizationRequestGroup : NSObject
{
    NSMutableSet *_typesToWrite;
    NSMutableSet *_typesToRead;
    BOOL _inTransaction;
    HKSource *_source;
    NSUUID *_promptSessionIdentifier;
    id /* CDUnknownBlockType */ _promptHandler;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    NSObject<OS_dispatch_source> *_sessionTimeoutSource;
}

@property(nonatomic, getter=isInTransaction) BOOL inTransaction; // @synthesize inTransaction=_inTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sessionTimeoutSource; // @synthesize sessionTimeoutSource=_sessionTimeoutSource;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptHandler; // @synthesize promptHandler=_promptHandler;
@property(readonly, nonatomic) NSUUID *promptSessionIdentifier; // @synthesize promptSessionIdentifier=_promptSessionIdentifier;
@property(readonly, copy, nonatomic) NSSet *typesToRead; // @synthesize typesToRead=_typesToRead;
@property(readonly, copy, nonatomic) NSSet *typesToWrite; // @synthesize typesToWrite=_typesToWrite;
@property(readonly, copy, nonatomic) HKSource *source; // @synthesize source=_source;
// - (void).cxx_destruct;
- (id)description;
- (void)_cancelTimeoutSource;
- (void)beginTransaction;
- (void)finishRequestsWithError:(id)arg1;
- (BOOL)promptIfNecessaryWithTimeout:(double)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)cancelRequestsWithIdentifiers:(id)arg1 error:(id)arg2;
- (void)addCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)addRequest:(id)arg1;
@property(readonly, nonatomic) NSUInteger requestCount;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)initWithSource:(id)arg1;

@end

