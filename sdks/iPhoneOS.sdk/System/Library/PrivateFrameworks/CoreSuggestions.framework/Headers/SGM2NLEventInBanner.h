//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface SGM2NLEventInBanner : PBCodable <NSCopying>
{
    int _actionType;
    NSString *_addedAttendeesCount;
    NSString *_calendarAppUsageLevel;
    unsigned int _confidenceScore;
    int _dateAdj;
    unsigned int _daysFromStartDate;
    int _duraAdj;
    NSString *_eventType;
    int _extractionLevel;
    int _interface;
    NSString *_key;
    NSString *_languageID;
    int _locationAdj;
    int _mailAppUsageLevel;
    int _messagesAppUsageLevel;
    unsigned int _participantCount;
    int _significantSender;
    int _titleAdj;
    int _titleSource;
    unsigned int _usedBubblesCount;
    struct {
        unsigned int actionType:1;
        unsigned int confidenceScore:1;
        unsigned int dateAdj:1;
        unsigned int daysFromStartDate:1;
        unsigned int duraAdj:1;
        unsigned int extractionLevel:1;
        unsigned int interface:1;
        unsigned int locationAdj:1;
        unsigned int mailAppUsageLevel:1;
        unsigned int messagesAppUsageLevel:1;
        unsigned int participantCount:1;
        unsigned int significantSender:1;
        unsigned int titleAdj:1;
        unsigned int titleSource:1;
        unsigned int usedBubblesCount:1;
    } _has;
}

@property(retain, nonatomic) NSString *calendarAppUsageLevel; // @synthesize calendarAppUsageLevel=_calendarAppUsageLevel;
@property(retain, nonatomic) NSString *addedAttendeesCount; // @synthesize addedAttendeesCount=_addedAttendeesCount;
@property(nonatomic) unsigned int usedBubblesCount; // @synthesize usedBubblesCount=_usedBubblesCount;
@property(nonatomic) unsigned int participantCount; // @synthesize participantCount=_participantCount;
@property(nonatomic) unsigned int confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(nonatomic) unsigned int daysFromStartDate; // @synthesize daysFromStartDate=_daysFromStartDate;
@property(retain, nonatomic) NSString *languageID; // @synthesize languageID=_languageID;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
- (int)StringAsMessagesAppUsageLevel:(id)arg1;
- (id)messagesAppUsageLevelAsString:(int)arg1;
@property(nonatomic) BOOL hasMessagesAppUsageLevel;
@property(nonatomic) int messagesAppUsageLevel; // @synthesize messagesAppUsageLevel=_messagesAppUsageLevel;
- (int)StringAsMailAppUsageLevel:(id)arg1;
- (id)mailAppUsageLevelAsString:(int)arg1;
@property(nonatomic) BOOL hasMailAppUsageLevel;
@property(nonatomic) int mailAppUsageLevel; // @synthesize mailAppUsageLevel=_mailAppUsageLevel;
@property(readonly, nonatomic) BOOL hasCalendarAppUsageLevel;
@property(readonly, nonatomic) BOOL hasAddedAttendeesCount;
- (int)StringAsLocationAdj:(id)arg1;
- (id)locationAdjAsString:(int)arg1;
@property(nonatomic) BOOL hasLocationAdj;
@property(nonatomic) int locationAdj; // @synthesize locationAdj=_locationAdj;
- (int)StringAsDuraAdj:(id)arg1;
- (id)duraAdjAsString:(int)arg1;
@property(nonatomic) BOOL hasDuraAdj;
@property(nonatomic) int duraAdj; // @synthesize duraAdj=_duraAdj;
- (int)StringAsDateAdj:(id)arg1;
- (id)dateAdjAsString:(int)arg1;
@property(nonatomic) BOOL hasDateAdj;
@property(nonatomic) int dateAdj; // @synthesize dateAdj=_dateAdj;
- (int)StringAsTitleAdj:(id)arg1;
- (id)titleAdjAsString:(int)arg1;
@property(nonatomic) BOOL hasTitleAdj;
@property(nonatomic) int titleAdj; // @synthesize titleAdj=_titleAdj;
- (int)StringAsTitleSource:(id)arg1;
- (id)titleSourceAsString:(int)arg1;
@property(nonatomic) BOOL hasTitleSource;
@property(nonatomic) int titleSource; // @synthesize titleSource=_titleSource;
@property(nonatomic) BOOL hasUsedBubblesCount;
- (int)StringAsExtractionLevel:(id)arg1;
- (id)extractionLevelAsString:(int)arg1;
@property(nonatomic) BOOL hasExtractionLevel;
@property(nonatomic) int extractionLevel; // @synthesize extractionLevel=_extractionLevel;
@property(nonatomic) BOOL hasParticipantCount;
- (int)StringAsSignificantSender:(id)arg1;
- (id)significantSenderAsString:(int)arg1;
@property(nonatomic) BOOL hasSignificantSender;
@property(nonatomic) int significantSender; // @synthesize significantSender=_significantSender;
@property(nonatomic) BOOL hasConfidenceScore;
@property(nonatomic) BOOL hasDaysFromStartDate;
@property(readonly, nonatomic) BOOL hasLanguageID;
@property(readonly, nonatomic) BOOL hasEventType;
- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (int)StringAsInterface:(id)arg1;
- (id)interfaceAsString:(int)arg1;
@property(nonatomic) BOOL hasInterface;
@property(nonatomic) int interface; // @synthesize interface=_interface;
@property(readonly, nonatomic) BOOL hasKey;

@end

