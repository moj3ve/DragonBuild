//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, _CDXPCEventSubscriber;

@protocol _CDXPCEventPublisherDelegate
- (void)removeSubscriberWithToken:(NSUInteger)arg1 streamName:(NSString *)arg2;
- (void)addSubscriber:(_CDXPCEventSubscriber *)arg1;
@end

