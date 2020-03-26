//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface GKMatchPacket : NSObject
{
    unsigned char _version;
    unsigned char _packetType;
    unsigned int _sequenceNumber;
    unsigned int _totalLength;
    unsigned short _checksum;
    BOOL _valid;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(nonatomic) unsigned short checksum; // @synthesize checksum=_checksum;
@property(nonatomic) unsigned int totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned char packetType; // @synthesize packetType=_packetType;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
- (void)dealloc;
- (id)message;
- (id)initWithMessage:(id)arg1;
- (id)init;

@end

