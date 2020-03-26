//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface AWDHomeKitCloudSync : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    int _dataSyncState;
    unsigned int _fetchCount;
    unsigned int _homeManagerFetchCount;
    unsigned int _homeManagerUploadCount;
    unsigned int _homeZoneFetchCount;
    unsigned int _homeZoneUploadCount;
    unsigned int _pushCount;
    NSMutableArray *_topErrors;
    NSMutableArray *_topReasons;
    unsigned int _uploadCount;
    unsigned int _uploadErrorCount;
    BOOL _hasDecryptionFailed;
    BOOL _lastDecryptionFailed;
    BOOL _uploadMaximumDelayReached;
    struct {
        unsigned int timestamp:1;
        unsigned int dataSyncState:1;
        unsigned int fetchCount:1;
        unsigned int homeManagerFetchCount:1;
        unsigned int homeManagerUploadCount:1;
        unsigned int homeZoneFetchCount:1;
        unsigned int homeZoneUploadCount:1;
        unsigned int pushCount:1;
        unsigned int uploadCount:1;
        unsigned int uploadErrorCount:1;
        unsigned int hasDecryptionFailed:1;
        unsigned int lastDecryptionFailed:1;
        unsigned int uploadMaximumDelayReached:1;
    } _has;
}

+ (Class)topErrorsType;
+ (Class)topReasonsType;
@property(nonatomic) unsigned int homeZoneUploadCount; // @synthesize homeZoneUploadCount=_homeZoneUploadCount;
@property(nonatomic) unsigned int homeManagerUploadCount; // @synthesize homeManagerUploadCount=_homeManagerUploadCount;
@property(nonatomic) unsigned int homeZoneFetchCount; // @synthesize homeZoneFetchCount=_homeZoneFetchCount;
@property(nonatomic) unsigned int homeManagerFetchCount; // @synthesize homeManagerFetchCount=_homeManagerFetchCount;
@property(nonatomic) BOOL lastDecryptionFailed; // @synthesize lastDecryptionFailed=_lastDecryptionFailed;
@property(nonatomic) BOOL hasDecryptionFailed; // @synthesize hasDecryptionFailed=_hasDecryptionFailed;
@property(nonatomic) BOOL uploadMaximumDelayReached; // @synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached;
@property(retain, nonatomic) NSMutableArray *topErrors; // @synthesize topErrors=_topErrors;
@property(retain, nonatomic) NSMutableArray *topReasons; // @synthesize topReasons=_topReasons;
@property(nonatomic) unsigned int uploadErrorCount; // @synthesize uploadErrorCount=_uploadErrorCount;
@property(nonatomic) unsigned int uploadCount; // @synthesize uploadCount=_uploadCount;
@property(nonatomic) unsigned int fetchCount; // @synthesize fetchCount=_fetchCount;
@property(nonatomic) unsigned int pushCount; // @synthesize pushCount=_pushCount;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasHomeZoneUploadCount;
@property(nonatomic) BOOL hasHomeManagerUploadCount;
@property(nonatomic) BOOL hasHomeZoneFetchCount;
@property(nonatomic) BOOL hasHomeManagerFetchCount;
- (int)StringAsDataSyncState:(id)arg1;
- (id)dataSyncStateAsString:(int)arg1;
@property(nonatomic) BOOL hasDataSyncState;
@property(nonatomic) int dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(nonatomic) BOOL hasLastDecryptionFailed;
@property(nonatomic) BOOL hasHasDecryptionFailed;
@property(nonatomic) BOOL hasUploadMaximumDelayReached;
- (id)topErrorsAtIndex:(NSUInteger)arg1;
- (NSUInteger)topErrorsCount;
- (void)addTopErrors:(id)arg1;
- (void)clearTopErrors;
- (id)topReasonsAtIndex:(NSUInteger)arg1;
- (NSUInteger)topReasonsCount;
- (void)addTopReasons:(id)arg1;
- (void)clearTopReasons;
@property(nonatomic) BOOL hasUploadErrorCount;
@property(nonatomic) BOOL hasUploadCount;
@property(nonatomic) BOOL hasFetchCount;
@property(nonatomic) BOOL hasPushCount;
@property(nonatomic) BOOL hasTimestamp;

@end

