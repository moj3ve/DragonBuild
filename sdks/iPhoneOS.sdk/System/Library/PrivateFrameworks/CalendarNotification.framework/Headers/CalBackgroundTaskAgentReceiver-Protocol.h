//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject;
@protocol OS_xpc_object;

@protocol CalBackgroundTaskAgentReceiver <NSObject>
- (void)handleBTAJob:(NSObject<OS_xpc_object> *)arg1 named:(const char )arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
@end

