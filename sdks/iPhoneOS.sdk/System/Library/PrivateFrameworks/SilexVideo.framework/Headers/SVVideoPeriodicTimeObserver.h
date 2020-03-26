//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPeriodicTimeObserving-Protocol.h>

@class SVPlayer;
@protocol SVTimeConverting, SVVideoPlaybackStateObserving;

@interface SVVideoPeriodicTimeObserver : NSObject <SVVideoPeriodicTimeObserving>
{
    id /* CDUnknownBlockType */ changeBlock;
    SVPlayer *_player;
    id <SVVideoPlaybackStateObserving> _playbackStateObserver;
    id <SVTimeConverting> _timeConverter;
    id _timeObserverToken;
    double _time;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) id timeObserverToken; // @synthesize timeObserverToken=_timeObserverToken;
@property(readonly, nonatomic) id <SVTimeConverting> timeConverter; // @synthesize timeConverter=_timeConverter;
@property(readonly, nonatomic) id <SVVideoPlaybackStateObserving> playbackStateObserver; // @synthesize playbackStateObserver=_playbackStateObserver;
@property(readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic, setter=onChange:) id /* CDUnknownBlockType */ changeBlock; // @synthesize changeBlock;
// - (void).cxx_destruct;
- (void)updateTime:(CDStruct_198678f7)arg1;
- (void)stopPeriodicTimeObserverForPlayer:(id)arg1;
- (void)startPeriodicTimeObserverForPlayer:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 playbackStateObserver:(id)arg2 timeConverter:(id)arg3;

@end

