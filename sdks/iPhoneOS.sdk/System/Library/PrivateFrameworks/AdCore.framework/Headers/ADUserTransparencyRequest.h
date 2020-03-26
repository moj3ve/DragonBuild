//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSData, NSString;

@interface ADUserTransparencyRequest : PBRequest <NSCopying>
{
    NSData *_contentiAdID;
    NSData *_dPID;
    NSData *_iAdID;
    NSString *_iTunesStore;
    NSString *_localeIdentifier;
    BOOL _isSignedInToiTunes;
    BOOL _limitAdTracking;
    struct {
        unsigned int isSignedInToiTunes:1;
        unsigned int limitAdTracking:1;
    } _has;
}

+ (id)options;
@property(nonatomic) BOOL isSignedInToiTunes; // @synthesize isSignedInToiTunes=_isSignedInToiTunes;
@property(nonatomic) BOOL limitAdTracking; // @synthesize limitAdTracking=_limitAdTracking;
@property(retain, nonatomic) NSString *iTunesStore; // @synthesize iTunesStore=_iTunesStore;
@property(retain, nonatomic) NSData *contentiAdID; // @synthesize contentiAdID=_contentiAdID;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
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
@property(nonatomic) BOOL hasIsSignedInToiTunes;
@property(nonatomic) BOOL hasLimitAdTracking;
@property(readonly, nonatomic) BOOL hasITunesStore;
@property(readonly, nonatomic) BOOL hasContentiAdID;
@property(readonly, nonatomic) BOOL hasIAdID;
@property(readonly, nonatomic) BOOL hasLocaleIdentifier;
@property(readonly, nonatomic) BOOL hasDPID;

@end

