//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, _SBStatusBarTapApplicationDestination;

@interface _SBStatusBarTapHandler : NSObject
{
    NSURL *_url;
    id /* CDUnknownBlockType */ _block;
    _SBStatusBarTapApplicationDestination *_appDestination;
    _SBStatusBarTapApplicationDestination *_applicationDestination;
}

@property(readonly, copy, nonatomic) _SBStatusBarTapApplicationDestination *applicationDestination; // @synthesize applicationDestination=_applicationDestination;
// - (void).cxx_destruct;
- (BOOL)handleTap;
@property(readonly, nonatomic) BOOL canRequestUnlock;
- (id)initWithApplicationDestination:(id)arg1;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithURL:(id)arg1;

@end

