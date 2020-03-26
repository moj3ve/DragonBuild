//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/MPMiddlewareAutomaticDependencyOperation-Protocol.h>

@class MPCPlaybackEngineMiddleware, MPCPlayerRequest, NSArray, NSMapTable;

@interface MPCPlaybackEngineMiddlewareOperation : MPAsyncOperation <MPMiddlewareAutomaticDependencyOperation>
{
    NSMapTable _inputOperations;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCPlaybackEngineMiddleware *_middleware;
    MPCPlayerRequest *_playerRequest;
}

@property(retain, nonatomic) MPCPlayerRequest *playerRequest; // @synthesize playerRequest=_playerRequest;
@property(retain, nonatomic) MPCPlaybackEngineMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSMapTable *inputOperations; // @synthesize inputOperations=_inputOperations;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *outputProtocols;
@property(readonly, nonatomic) NSArray *inputProtocols;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;

@end

