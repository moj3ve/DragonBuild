//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryItemContentReference : PBCodable <NSCopying>
{
    long long _cloudID;
    double _duration;
    double _fileSize;
    long long _storeAdamID;
    NSString *_albumArtistName;
    int _albumDiscCount;
    NSString *_albumName;
    int _albumTrackCount;
    NSString *_artistName;
    NSString *_composerName;
    int _contentType;
    NSString *_copyrightText;
    int _discNumber;
    NSString *_genreName;
    NSString *_title;
    int _trackNumber;
    int _year;
    BOOL _isCompilation;
    struct {
        unsigned int cloudID:1;
        unsigned int duration:1;
        unsigned int fileSize:1;
        unsigned int storeAdamID:1;
        unsigned int albumDiscCount:1;
        unsigned int albumTrackCount:1;
        unsigned int contentType:1;
        unsigned int discNumber:1;
        unsigned int trackNumber:1;
        unsigned int year:1;
        unsigned int isCompilation:1;
    } _has;
}

@property(nonatomic) int year; // @synthesize year=_year;
@property(nonatomic) int trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) int albumTrackCount; // @synthesize albumTrackCount=_albumTrackCount;
@property(nonatomic) long long cloudID; // @synthesize cloudID=_cloudID;
@property(nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL isCompilation; // @synthesize isCompilation=_isCompilation;
@property(retain, nonatomic) NSString *genreName; // @synthesize genreName=_genreName;
@property(nonatomic) double fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) int discNumber; // @synthesize discNumber=_discNumber;
@property(nonatomic) int albumDiscCount; // @synthesize albumDiscCount=_albumDiscCount;
@property(retain, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property(retain, nonatomic) NSString *composerName; // @synthesize composerName=_composerName;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasYear;
@property(nonatomic) BOOL hasTrackNumber;
@property(nonatomic) BOOL hasAlbumTrackCount;
@property(nonatomic) BOOL hasCloudID;
@property(nonatomic) BOOL hasStoreAdamID;
@property(readonly, nonatomic) BOOL hasTitle;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasIsCompilation;
@property(readonly, nonatomic) BOOL hasGenreName;
@property(nonatomic) BOOL hasFileSize;
@property(nonatomic) BOOL hasDiscNumber;
@property(nonatomic) BOOL hasAlbumDiscCount;
@property(readonly, nonatomic) BOOL hasCopyrightText;
@property(nonatomic) BOOL hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) BOOL hasComposerName;
@property(readonly, nonatomic) BOOL hasArtistName;
@property(readonly, nonatomic) BOOL hasAlbumName;
@property(readonly, nonatomic) BOOL hasAlbumArtistName;

@end

