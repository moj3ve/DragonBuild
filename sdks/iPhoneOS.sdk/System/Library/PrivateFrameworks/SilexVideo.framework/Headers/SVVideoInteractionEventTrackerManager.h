//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoInteractionHandlerFactory-Protocol.h>

@protocol SVVideoEventTrackerProviding;

@interface SVVideoInteractionEventTrackerManager : NSObject <SVVideoInteractionHandlerFactory>
{
    id <SVVideoEventTrackerProviding> _eventTrackerProvider;
}

@property(readonly, nonatomic) id <SVVideoEventTrackerProviding> eventTrackerProvider; // @synthesize eventTrackerProvider=_eventTrackerProvider;
// - (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoEventTrackerProvider:(id)arg1;

@end

