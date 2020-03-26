//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_os_log, OS_xpc_event_publisher, _CDXPCEventPublisherDelegate;

@interface _CDXPCEventPublisher : NSObject
{
    NSObject<OS_xpc_event_publisher> *_publisher;
    NSString *_streamName;
    id <_CDXPCEventPublisherDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    NSMutableArray *_pendingSendEvents;
}

+ (id)eventPublisherWithStreamName:(const char )arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4;
@property(retain, nonatomic) NSMutableArray *pendingSendEvents; // @synthesize pendingSendEvents=_pendingSendEvents;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <_CDXPCEventPublisherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // @synthesize publisher=_publisher;
// - (void).cxx_destruct;
- (void)removeToken:(NSUInteger)arg1;
- (void)addToken:(NSUInteger)arg1 descriptor:(id)arg2 userID:(unsigned int)arg3;
- (void)sendEvent:(id)arg1 toSubscriber:(id)arg2 replyHandler:(id /* CDUnknownBlockType */)arg3;
- (void)sendEvent:(id)arg1 toSubscriber:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)handleEventWithAction:(unsigned int)arg1 token:(NSUInteger)arg2 descriptor:(id)arg3;
- (void)activatePublisherWithStreamName:(const char )arg1;
- (id)initWithStreamName:(id)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4;

@end

