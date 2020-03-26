//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, _MRAudioFormatSettingsProtobuf;

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying>
{
    long long _maximumPacketSize;
    long long _packetCapacity;
    long long _packetCount;
    NSData *_contents;
    _MRAudioFormatSettingsProtobuf *_formatSettings;
    NSMutableArray *_packetDescriptions;
    struct {
        unsigned int maximumPacketSize:1;
        unsigned int packetCapacity:1;
        unsigned int packetCount:1;
    } _has;
}

+ (Class)packetDescriptionsType;
@property(retain, nonatomic) NSMutableArray *packetDescriptions; // @synthesize packetDescriptions=_packetDescriptions;
@property(retain, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property(nonatomic) long long packetCount; // @synthesize packetCount=_packetCount;
@property(nonatomic) long long maximumPacketSize; // @synthesize maximumPacketSize=_maximumPacketSize;
@property(nonatomic) long long packetCapacity; // @synthesize packetCapacity=_packetCapacity;
@property(retain, nonatomic) _MRAudioFormatSettingsProtobuf *formatSettings; // @synthesize formatSettings=_formatSettings;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)packetDescriptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)packetDescriptionsCount;
- (void)addPacketDescriptions:(id)arg1;
- (void)clearPacketDescriptions;
@property(readonly, nonatomic) BOOL hasContents;
@property(nonatomic) BOOL hasPacketCount;
@property(nonatomic) BOOL hasMaximumPacketSize;
@property(nonatomic) BOOL hasPacketCapacity;
@property(readonly, nonatomic) BOOL hasFormatSettings;

@end

