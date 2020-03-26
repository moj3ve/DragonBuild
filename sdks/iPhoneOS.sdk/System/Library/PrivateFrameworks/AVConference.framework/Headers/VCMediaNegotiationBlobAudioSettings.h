//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying>
{
    unsigned int _audioUnitModel;
    unsigned int _payloadFlags;
    unsigned int _rtpSSRC;
    unsigned int _secondaryFlags;
    unsigned int _supportFlags;
    BOOL _useSBR;
    struct {
        unsigned int audioUnitModel:1;
    } _has;
}

+ (BOOL)isAudioPayloadSupported:(int)arg1;
+ (int)payloadFromNegotiationPayload:(int)arg1;
+ (int)negotiationPayloadFromPayload:(int)arg1;
@property(nonatomic) BOOL useSBR; // @synthesize useSBR=_useSBR;
@property(nonatomic) unsigned int secondaryFlags; // @synthesize secondaryFlags=_secondaryFlags;
@property(nonatomic) unsigned int payloadFlags; // @synthesize payloadFlags=_payloadFlags;
@property(nonatomic) unsigned int supportFlags; // @synthesize supportFlags=_supportFlags;
@property(nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAudioUnitModel;
- (void)printWithLogFile:(void )arg1;
- (id)newMediaNegotiatorAudioConfiguration;
@property(readonly, nonatomic) BOOL allowAudioSwitching;
@property(readonly, nonatomic) BOOL allowAudioRecording;
- (id)initWithAudioConfiguration:(id)arg1;

@end

