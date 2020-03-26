//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPMediaPlayer-Protocol.h>

@class AVPlayer, AVPlayerItem, LPAudio, NSHashTable;

@interface LPStreamingAudioPlayer : NSObject <LPMediaPlayer>
{
    LPAudio *_audio;
    AVPlayerItem *_item;
    AVPlayer *_player;
    id _timeObserver;
    id _endObserver;
    NSHashTable *_clients;
    NSUInteger _state;
}

+ (id)playerWithAudio:(id)arg1;
@property(readonly, nonatomic) NSUInteger state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)transitionToState:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL shouldUnmuteWhenUserAdjustsVolume;
@property(readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
@property(readonly, nonatomic) BOOL usesSharedAudioSession;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
@property(readonly, nonatomic, getter=isMuted) BOOL muted;
@property(nonatomic, getter=isActive) BOOL active;
- (void)dispatchDidFailToPlayToAllClients;
- (void)dispatchDidTransitionToStateToAllClients:(NSUInteger)arg1;
- (void)dispatchDidChangeProgressToAllClients:(float)arg1;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
@property(readonly, nonatomic) float progress;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)initWithAudio:(id)arg1;

@end

