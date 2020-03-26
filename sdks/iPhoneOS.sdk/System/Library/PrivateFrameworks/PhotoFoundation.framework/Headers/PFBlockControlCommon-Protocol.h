//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PFDispatchQueue;

@protocol PFBlockControlCommon <NSObject>
- (BOOL)blockWasCanceled;
- (BOOL)blockHasFinished;
- (BOOL)blockHasStarted;
- (void)waitForBlock;
- (void)notifyOnQueue:(PFDispatchQueue *)arg1 whenFinished:(void (^)(void))arg2;
@end

