//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NAValueThrottler;

@interface HUControlInteractionState : NSObject
{
    BOOL _userInteractionActive;
    BOOL _writesInProgressOrPossible;
    NAValueThrottler *_writeThrottler;
    NSUInteger _inFlightWriteCount;
}

@property(nonatomic, getter=areWritesInProgressOrPossible) BOOL writesInProgressOrPossible; // @synthesize writesInProgressOrPossible=_writesInProgressOrPossible;
@property(nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(nonatomic) NSUInteger inFlightWriteCount; // @synthesize inFlightWriteCount=_inFlightWriteCount;
@property(retain, nonatomic) NAValueThrottler *writeThrottler; // @synthesize writeThrottler=_writeThrottler;
// - (void).cxx_destruct;

@end

