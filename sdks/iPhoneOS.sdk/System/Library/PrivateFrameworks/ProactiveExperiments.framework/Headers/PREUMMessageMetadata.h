//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface PREUMMessageMetadata : PBCodable <NSCopying>
{
    int _ageGroup;
    unsigned int _charCount;
    NSString *_hostProcess;
    NSString *_lang;
    NSString *_locale;
    BOOL _hasQuestionMark;
    BOOL _isApricotDevice;
    struct {
        unsigned int ageGroup:1;
        unsigned int charCount:1;
        unsigned int hasQuestionMark:1;
        unsigned int isApricotDevice:1;
    } _has;
}

@property(nonatomic) BOOL hasQuestionMark; // @synthesize hasQuestionMark=_hasQuestionMark;
@property(nonatomic) unsigned int charCount; // @synthesize charCount=_charCount;
@property(nonatomic) BOOL isApricotDevice; // @synthesize isApricotDevice=_isApricotDevice;
@property(retain, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *hostProcess; // @synthesize hostProcess=_hostProcess;
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
@property(nonatomic) BOOL hasHasQuestionMark;
- (int)StringAsAgeGroup:(id)arg1;
- (id)ageGroupAsString:(int)arg1;
@property(nonatomic) BOOL hasAgeGroup;
@property(nonatomic) int ageGroup; // @synthesize ageGroup=_ageGroup;
@property(nonatomic) BOOL hasCharCount;
@property(nonatomic) BOOL hasIsApricotDevice;
@property(readonly, nonatomic) BOOL hasLang;
@property(readonly, nonatomic) BOOL hasLocale;
@property(readonly, nonatomic) BOOL hasHostProcess;

@end

