//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol CSAudioSessionInfoProvidingDelegate;

@protocol CSAudioSessionInfoProviding <NSObject>
- (unsigned int)audioSessionID;
- (void)unregisterObserver:(id <CSAudioSessionInfoProvidingDelegate>)arg1;
- (void)registerObserver:(id <CSAudioSessionInfoProvidingDelegate>)arg1;
@end

