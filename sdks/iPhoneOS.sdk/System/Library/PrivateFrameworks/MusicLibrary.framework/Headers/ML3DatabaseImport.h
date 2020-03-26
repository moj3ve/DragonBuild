//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSFileHandle, NSString;

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_libraryPath;
    NSData *_trackData;
    NSData *_playlistData;
    NSFileHandle *_fileHandle;
    NSString *_syncAnchor;
    BOOL _resetSync;
    BOOL _sagaEnabled;
    long long _storeAccountID;
    long long _preferredVideoQuality;
    unsigned int _homeSharingBasePlaylistID;
    BOOL _tracksAreLibraryOwnedContent;
    BOOL _playlistsAreLibraryOwnedContent;
    BOOL _pendingMatch;
    BOOL _isServerImport;
    NSString *_syncLibraryID;
    BOOL _suspendable;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=isSuspendable) BOOL suspendable; // @synthesize suspendable=_suspendable;
@property(readonly, nonatomic) NSString *syncLibraryID; // @synthesize syncLibraryID=_syncLibraryID;
@property(readonly, nonatomic) BOOL isServerImport; // @synthesize isServerImport=_isServerImport;
@property(readonly, nonatomic, getter=isPendingMatch) BOOL pendingMatch; // @synthesize pendingMatch=_pendingMatch;
@property(readonly, nonatomic) BOOL playlistsAreLibraryOwnedContent; // @synthesize playlistsAreLibraryOwnedContent=_playlistsAreLibraryOwnedContent;
@property(readonly, nonatomic) BOOL tracksAreLibraryOwnedContent; // @synthesize tracksAreLibraryOwnedContent=_tracksAreLibraryOwnedContent;
@property(readonly, nonatomic) unsigned int homeSharingBasePlaylistID; // @synthesize homeSharingBasePlaylistID=_homeSharingBasePlaylistID;
@property(readonly, nonatomic) long long preferredVideoQuality; // @synthesize preferredVideoQuality=_preferredVideoQuality;
@property(readonly, nonatomic) long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(readonly, nonatomic, getter=isSagaEnabled) BOOL sagaEnabled; // @synthesize sagaEnabled=_sagaEnabled;
@property(readonly, nonatomic, getter=isResetSync) BOOL resetSync; // @synthesize resetSync=_resetSync;
@property(readonly, nonatomic) NSString *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
@property(readonly, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(readonly, nonatomic) NSData *playlistData; // @synthesize playlistData=_playlistData;
@property(readonly, nonatomic) NSData *trackData; // @synthesize trackData=_trackData;
@property(readonly, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
// - (void).cxx_destruct;
// - (id)_copyWithZone:(_NSZone )arg1 usingConcreteClass:(Class)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)init;
- (id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3;

@end

