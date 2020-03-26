//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackQueryResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackInfos;
    NSData *_nextPageToken;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackInfos:1;
        unsigned int read_nextPageToken:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_feedbackInfos:1;
        unsigned int wrote_nextPageToken:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)feedbackInfoType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSData *nextPageToken;
@property(readonly, nonatomic) BOOL hasNextPageToken;
- (void)_readNextPageToken;
- (id)feedbackInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)feedbackInfosCount;
- (void)_addNoFlagsFeedbackInfo:(id)arg1;
- (void)addFeedbackInfo:(id)arg1;
- (void)clearFeedbackInfos;
@property(retain, nonatomic) NSMutableArray *feedbackInfos;
- (void)_readFeedbackInfos;
- (id)initWithData:(id)arg1;
- (id)init;

@end

