//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class AWDHomeKitCameraIDSSessionSetup, AWDHomeKitCameraStreamConfigure, AWDHomeKitCameraStreamIDSConnSetup, AWDHomeKitCameraStreamMessaging, AWDHomeKitVendorInformation, NSMutableArray, NSString;

@interface AWDHomeKitCameraStream : PBCodable <NSCopying>
{
    NSUInteger _duration;
    NSUInteger _startupDelay;
    NSUInteger _timestamp;
    int _certified;
    AWDHomeKitCameraStreamMessaging *_controllerMessaging;
    unsigned int _errorCode;
    AWDHomeKitCameraIDSSessionSetup *_idsSessionSetup;
    AWDHomeKitCameraStreamConfigure *_initialConfiguration;
    AWDHomeKitCameraStreamIDSConnSetup *_phoneIDSConnectionSetup;
    unsigned int _receivedFirstFrame;
    NSMutableArray *_reconfigurations;
    AWDHomeKitCameraStreamMessaging *_residentMessaging;
    NSMutableArray *_resolutionCounts;
    int _resolutionOnClose;
    NSString *_sessionID;
    unsigned int _underlyingErrorCode;
    NSString *_underlyingErrorDomain;
    AWDHomeKitVendorInformation *_vendorDetails;
    AWDHomeKitCameraStreamIDSConnSetup *_watchIDSConnectionSetup;
    AWDHomeKitCameraStreamMessaging *_watchMessaging;
    BOOL _isLocal;
    BOOL _isStreamStarted;
    struct {
        unsigned int duration:1;
        unsigned int startupDelay:1;
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int errorCode:1;
        unsigned int receivedFirstFrame:1;
        unsigned int resolutionOnClose:1;
        unsigned int underlyingErrorCode:1;
        unsigned int isLocal:1;
        unsigned int isStreamStarted:1;
    } _has;
}

+ (Class)resolutionCountType;
+ (Class)reconfigurationsType;
@property(retain, nonatomic) NSMutableArray *resolutionCounts; // @synthesize resolutionCounts=_resolutionCounts;
@property(nonatomic) BOOL isStreamStarted; // @synthesize isStreamStarted=_isStreamStarted;
@property(nonatomic) NSUInteger startupDelay; // @synthesize startupDelay=_startupDelay;
@property(nonatomic) unsigned int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(retain, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(nonatomic) unsigned int receivedFirstFrame; // @synthesize receivedFirstFrame=_receivedFirstFrame;
@property(retain, nonatomic) AWDHomeKitCameraStreamMessaging *residentMessaging; // @synthesize residentMessaging=_residentMessaging;
@property(retain, nonatomic) AWDHomeKitCameraStreamMessaging *controllerMessaging; // @synthesize controllerMessaging=_controllerMessaging;
@property(retain, nonatomic) AWDHomeKitCameraStreamMessaging *watchMessaging; // @synthesize watchMessaging=_watchMessaging;
@property(retain, nonatomic) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup; // @synthesize idsSessionSetup=_idsSessionSetup;
@property(retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetup *phoneIDSConnectionSetup; // @synthesize phoneIDSConnectionSetup=_phoneIDSConnectionSetup;
@property(retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetup *watchIDSConnectionSetup; // @synthesize watchIDSConnectionSetup=_watchIDSConnectionSetup;
@property(retain, nonatomic) NSMutableArray *reconfigurations; // @synthesize reconfigurations=_reconfigurations;
@property(retain, nonatomic) AWDHomeKitCameraStreamConfigure *initialConfiguration; // @synthesize initialConfiguration=_initialConfiguration;
@property(nonatomic) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) NSUInteger duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
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
- (id)resolutionCountAtIndex:(NSUInteger)arg1;
- (NSUInteger)resolutionCountsCount;
- (void)addResolutionCount:(id)arg1;
- (void)clearResolutionCounts;
- (int)StringAsResolutionOnClose:(id)arg1;
- (id)resolutionOnCloseAsString:(int)arg1;
@property(nonatomic) BOOL hasResolutionOnClose;
@property(nonatomic) int resolutionOnClose; // @synthesize resolutionOnClose=_resolutionOnClose;
@property(nonatomic) BOOL hasIsStreamStarted;
@property(nonatomic) BOOL hasStartupDelay;
@property(nonatomic) BOOL hasUnderlyingErrorCode;
@property(readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property(nonatomic) BOOL hasReceivedFirstFrame;
@property(readonly, nonatomic) BOOL hasResidentMessaging;
@property(readonly, nonatomic) BOOL hasControllerMessaging;
@property(readonly, nonatomic) BOOL hasWatchMessaging;
@property(readonly, nonatomic) BOOL hasIdsSessionSetup;
@property(readonly, nonatomic) BOOL hasPhoneIDSConnectionSetup;
@property(readonly, nonatomic) BOOL hasWatchIDSConnectionSetup;
- (id)reconfigurationsAtIndex:(NSUInteger)arg1;
- (NSUInteger)reconfigurationsCount;
- (void)addReconfigurations:(id)arg1;
- (void)clearReconfigurations;
@property(readonly, nonatomic) BOOL hasInitialConfiguration;
@property(nonatomic) BOOL hasIsLocal;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasDuration;
@property(readonly, nonatomic) BOOL hasSessionID;
@property(nonatomic) BOOL hasTimestamp;
- (int)StringAsCertified:(id)arg1;
- (id)certifiedAsString:(int)arg1;
@property(nonatomic) BOOL hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) BOOL hasVendorDetails;

@end

