//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface PFVideoExportRangeCoordinator : NSObject
{
    BOOL _cancelled;
    NSMutableArray *_waitingCallers;
    NSObject<OS_dispatch_queue> *_stateQueue;
    _NSRange _availableRange;
}

@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain) NSMutableArray *waitingCallers; // @synthesize waitingCallers=_waitingCallers;
@property _NSRange availableRange; // @synthesize availableRange=_availableRange;
// - (void).cxx_destruct;
- (void)cancel;
- (BOOL)waitForAvailabilityOfRange:(_NSRange)arg1 timeout:(NSUInteger)arg2 error:(id )arg3;
- (void)updateAvailableRange:(_NSRange)arg1;
- (id)init;

@end

