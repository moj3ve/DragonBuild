//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSConditionLock, NSRunLoop;

@interface _SYStreamerThread : NSThread
{
    NSRunLoop *_threadRunLoop;
    struct __CFRunLoopSource _stopRLS;
    NSConditionLock *_startupLock;
}

+ (id)streamerThread;
// - (void).cxx_destruct;
- (void)main;
@property(readonly, nonatomic) NSRunLoop *runLoop;
- (void)_waitForStartup;
- (id)init;

@end

