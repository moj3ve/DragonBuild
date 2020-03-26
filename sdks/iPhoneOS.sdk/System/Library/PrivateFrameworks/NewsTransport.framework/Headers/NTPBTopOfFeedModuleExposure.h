//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface NTPBTopOfFeedModuleExposure : PBCodable <NSCopying>
{
    NSData *_feedViewExposureId;
    int _moduleEventType;
    NSData *_moduleExposureId;
    int _moduleItemCount;
    int _moduleLocation;
    struct {
        unsigned int moduleEventType:1;
        unsigned int moduleItemCount:1;
        unsigned int moduleLocation:1;
    } _has;
}

@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSData *moduleExposureId; // @synthesize moduleExposureId=_moduleExposureId;
@property(nonatomic) int moduleItemCount; // @synthesize moduleItemCount=_moduleItemCount;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasFeedViewExposureId;
@property(readonly, nonatomic) BOOL hasModuleExposureId;
@property(nonatomic) BOOL hasModuleItemCount;
- (int)StringAsModuleLocation:(id)arg1;
- (id)moduleLocationAsString:(int)arg1;
@property(nonatomic) BOOL hasModuleLocation;
@property(nonatomic) int moduleLocation; // @synthesize moduleLocation=_moduleLocation;
- (int)StringAsModuleEventType:(id)arg1;
- (id)moduleEventTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasModuleEventType;
@property(nonatomic) int moduleEventType; // @synthesize moduleEventType=_moduleEventType;

@end

