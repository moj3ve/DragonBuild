//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCVideoStreamRateControlProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRTTPLRRateControl : NSObject <VCVideoStreamRateControlProtocol>
{
    double _packetLossRate;
    double _roundTripTime;
    double _rampUpFrozenTime;
    double _rampUpFrozenDuration;
    double _rampDownPacketLossRate;
    double _rampDownRoundTripTime;
    double _rampUpPacketLossRate;
    int _state;
    double _rateControlTime;
    unsigned int _targetBitrate;
    unsigned short _currentTierIndex;
    unsigned short _minTierIndex;
    unsigned short _maxTierIndex;
    double _rateControlInterval;
}

@property(nonatomic) double rateControlInterval; // @synthesize rateControlInterval=_rateControlInterval;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (BOOL)shouldRampUp;
- (BOOL)shouldRampDown;
- (unsigned short)rampDownTier;
- (unsigned short)rampUpTier;
- (void)stateEnter;
- (void)stateExit;
- (void)stateChange:(int)arg1;
- (id)className;
@property(readonly, nonatomic) double nowrdAcc;
@property(readonly, nonatomic) double nowrdShort;
@property(readonly, nonatomic) double nowrd;
@property(readonly, nonatomic) double owrd;
- (void)printRateControlFullInfoWithLogDump:(void )arg1 time:(double)arg2 videoStall:(BOOL)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned int)arg5;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned int)arg5;
@property(readonly, copy) NSString *description;
- (void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;
- (id)init;

@end

