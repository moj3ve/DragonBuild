//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@interface NULoggingVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker>
{
}

- (void)userEngagedWithAdvanceButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithReplayButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithNowPlayingButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedThirdQuartileWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedSecondQuartileWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedFirstQuartileWithVideoItem:(id)arg1;
- (void)muteStateChanged:(BOOL)arg1 withVideoItem:(id)arg2 metadata:(id)arg3;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)videoDidDisappearWithVideoItem:(id)arg1;
- (void)videoDidAppearWithVideoItem:(id)arg1;
- (id)init;

@end

