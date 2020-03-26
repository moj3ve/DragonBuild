//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, PLAssetJournalEntryPayload;
@protocol PLAlbumProtocol;

@interface PLFileSystemImportAsset : NSObject
{
    NSString *_path;
    BOOL _pathContainsDCIM;
    NSMutableSet *_urls;
    int _assetKind;
    NSObject _destinationAlbum;
    PLAssetJournalEntryPayload *_assetPayload;
}

@property(readonly, nonatomic) PLAssetJournalEntryPayload *assetPayload; // @synthesize assetPayload=_assetPayload;
@property(nonatomic) int assetKind; // @synthesize assetKind=_assetKind;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum; // @synthesize destinationAlbum=_destinationAlbum;
// - (void).cxx_destruct;
- (void)addURLs:(id)arg1;
- (void)addURL:(id)arg1;
@property(readonly, nonatomic) NSSet *urls;
- (id)description;
- (long long)compare:(id)arg1;
- (BOOL)isCameraKit;
- (id)initWithAssetPayload:(id)arg1;
- (id)initWithDestinationAlbum:(NSObject )arg1 assetKind:(int)arg2;

@end

