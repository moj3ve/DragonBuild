//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer;
@protocol TSKAVPlayerControllerDelegate;

@interface TSKAVPlayerController : NSObject
{
    AVPlayer *mPlayer;
    id <TSKAVPlayerControllerDelegate> mDelegate;
    long long mRepeatMode;
    float mVolume;
    float mRateBeforeScrubbing;
    NSUInteger mScrubbingCount;
    BOOL mCanPlay;
    BOOL mPlaying;
    BOOL mFastReversing;
    BOOL mFastForwarding;
    BOOL mIsObservingStatus;
    NSUInteger mAdditionalReferences;
    double _absoluteCurrentTime;
}

+ (id)keyPathsForValuesAffectingEndTime;
+ (BOOL)automaticallyNotifiesObserversOfEndTime;
+ (id)keyPathsForValuesAffectingStartTime;
+ (BOOL)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (id)keyPathsForValuesAffectingDuration;
@property(nonatomic) double absoluteCurrentTime; // @synthesize absoluteCurrentTime=_absoluteCurrentTime;
@property(nonatomic, getter=isFastForwarding) BOOL fastForwarding; // @synthesize fastForwarding=mFastForwarding;
@property(nonatomic, getter=isFastReversing) BOOL fastReversing; // @synthesize fastReversing=mFastReversing;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=mPlaying;
@property(readonly, nonatomic) BOOL canPlay; // @synthesize canPlay=mCanPlay;
@property(nonatomic) float volume; // @synthesize volume=mVolume;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=mRepeatMode;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=mPlayer;
@property(readonly, nonatomic) id <TSKAVPlayerControllerDelegate> delegate; // @synthesize delegate=mDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)p_applicationDidResignActive;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_playerItemDidPlayToEndTime:(id)arg1;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (void)p_closedCaptioningStatusDidChange:(id)arg1;
- (void)p_updateClosedCaptionDisplayEnabled;
- (void)p_stopObservingClosedCaptionDisplayEnabled;
- (void)p_startObservingClosedCaptionDisplayEnabled;
- (BOOL)p_canFastForward;
- (BOOL)p_canFastReverse;
- (void)seekToEnd;
- (void)seekToBeginning;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)endScrubbing;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)beginScrubbing;
@property(readonly, nonatomic, getter=isScrubbing) BOOL scrubbing;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double currentTime;
- (void)p_applyVolumeToPlayerItem;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(readonly, nonatomic) double absoluteDuration;
@property(readonly, nonatomic) double duration;
- (void)teardown;
- (void)addAdditionalReference;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2;

@end

