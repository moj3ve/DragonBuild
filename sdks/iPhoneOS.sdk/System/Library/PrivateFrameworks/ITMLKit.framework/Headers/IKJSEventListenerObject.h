//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSEventListenerObject-Protocol.h>

@class NSMutableDictionary;

@interface IKJSEventListenerObject : IKJSObject <IKJSEventListenerObject>
{
    NSMutableDictionary *_eventListenersMap;
}

@property(retain, nonatomic) NSMutableDictionary *eventListenersMap; // @synthesize eventListenersMap=_eventListenersMap;
// - (void).cxx_destruct;
- (id)_eventInformationForType:(id)arg1 extraInfo:(id)arg2;
- (BOOL)invokeMethod:(id)arg1 withArguments:(id)arg2 thenDispatchEvent:(id)arg3 extraInfo:(id)arg4;
- (BOOL)invokeSingleListener:(id)arg1 extraInfo:(id)arg2 return:(id )arg3;
- (BOOL)invokeListeners:(id)arg1 extraInfo:(id)arg2;
- (BOOL)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(BOOL)arg3;
- (void)removeEventListener:(id)arg1:(id)arg2;
- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;

@end

