//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioUnitProperties : NSObject
{
    unsigned int _samplesPerFrame;
    struct AudioStreamBasicDescription _format;
    unsigned int _audioUnitType;
    BOOL _allowAudioRecording;
    int _operatingMode;
    unsigned int _vpOperatingMode;
    int _deviceRole;
    BOOL _isFarEndVersionInfoValid;
    struct VoiceIOFarEndVersionInfo _farEndVersionInfo;
    unsigned int _remoteCodecType;
    double _remoteCodecSampleRate;
    BOOL _enableDNNVAD;
}

@property(nonatomic) BOOL enableDNNVAD; // @synthesize enableDNNVAD=_enableDNNVAD;
@property(readonly, nonatomic) BOOL isFarEndVersionInfoValid; // @synthesize isFarEndVersionInfoValid=_isFarEndVersionInfoValid;
@property(nonatomic) struct AudioStreamBasicDescription format; // @synthesize format=_format;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic) unsigned int vpOperatingMode; // @synthesize vpOperatingMode=_vpOperatingMode;
@property(nonatomic) unsigned int remoteCodecType; // @synthesize remoteCodecType=_remoteCodecType;
@property(nonatomic) double remoteCodecSampleRate; // @synthesize remoteCodecSampleRate=_remoteCodecSampleRate;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) BOOL allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(nonatomic) unsigned int audioUnitType; // @synthesize audioUnitType=_audioUnitType;
@property(nonatomic) unsigned int samplesPerFrame; // @synthesize samplesPerFrame=_samplesPerFrame;
@property(nonatomic) struct VoiceIOFarEndVersionInfo farEndVersionInfo;
- (id)description;

@end

