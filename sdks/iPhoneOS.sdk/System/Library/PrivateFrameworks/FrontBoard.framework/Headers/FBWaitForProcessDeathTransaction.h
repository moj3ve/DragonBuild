//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/FBProcessManagerObserver-Protocol.h>

@class BSWatchdog, FBProcess;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver>
{
    FBProcess *_process;
    double _timeout;
    BSWatchdog *_watchdog;
}

@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) FBProcess *process; // @synthesize process=_process;
// - (void).cxx_destruct;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)initWithProcess:(id)arg1 timeout:(double)arg2;
- (id)initWithProcess:(id)arg1;

@end

