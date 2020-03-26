//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUI/IMAudioControllerDelegate-Protocol.h>
#import <IMSharedUI/IMFullScreenEffectSoundPlayer-Protocol.h>

@class IMAudioController, NSURL;
@protocol IMFullScreenEffectSoundPlayerDelegate;

@interface IMFullScreenEffectSoundPlayer : NSObject <IMAudioControllerDelegate, IMFullScreenEffectSoundPlayer>
{
    BOOL _started;
    BOOL _hasHapticTrack;
    float _currentVolume;
    id <IMFullScreenEffectSoundPlayerDelegate> _delegate;
    IMAudioController *_audioController;
    NSURL *_soundURL;
}

@property(nonatomic) float currentVolume; // @synthesize currentVolume=_currentVolume;
@property(readonly, nonatomic) BOOL hasHapticTrack; // @synthesize hasHapticTrack=_hasHapticTrack;
@property(readonly, nonatomic) NSURL *soundURL; // @synthesize soundURL=_soundURL;
@property(nonatomic) BOOL started; // @synthesize started=_started;
@property(retain, nonatomic) IMAudioController *audioController; // @synthesize audioController=_audioController;
@property(nonatomic) __weak id <IMFullScreenEffectSoundPlayerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_supportsSoundEffects;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (void)audioController:(id)arg1 didPrepareToPlayContentAtURL:(id)arg2 successfully:(BOOL)arg3;
- (void)audioController:(id)arg1 didChangeProgressForContentAtURL:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)startPlayingSound;
- (void)prepareToPlaySound;
- (void)stopPlayingSound;
- (void)_didPrepare;
- (void)_didStart;
- (void)_didStop;
- (id)_ensureAudioPlayer;
- (id)initWithSoundURL:(id)arg1 hasHapticTrack:(BOOL)arg2;

@end

