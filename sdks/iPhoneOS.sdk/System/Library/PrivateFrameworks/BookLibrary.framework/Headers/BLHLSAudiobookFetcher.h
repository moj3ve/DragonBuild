//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface BLHLSAudiobookFetcher : NSObject
{
    NSURLSession *_session;
}

+ (id)preferredStreamFromMasterPlaylist:(id)arg1;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initCanUseCellularData:(BOOL)arg1 powerRequired:(BOOL)arg2;

@end

