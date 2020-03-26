//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DCLRUCache, NSMutableDictionary, NSURL;
@protocol DCDataCryptorDelegate, OS_dispatch_queue;

@interface ICDocCamImageCache : NSObject
{
    id <DCDataCryptorDelegate> _dataCryptorDelegate;
    NSURL *_cachesDirectoryURL;
    NSURL *_docCamImageDirectoryURL;
    NSObject<OS_dispatch_queue> *_imageCacheQueue;
    DCLRUCache *_inMemoryImageCache;
    NSMutableDictionary *_imageSizeCache;
}

@property(retain, nonatomic) NSMutableDictionary *imageSizeCache; // @synthesize imageSizeCache=_imageSizeCache;
@property(retain, nonatomic) DCLRUCache *inMemoryImageCache; // @synthesize inMemoryImageCache=_inMemoryImageCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageCacheQueue; // @synthesize imageCacheQueue=_imageCacheQueue;
@property(readonly, nonatomic) NSURL *docCamImageDirectoryURL; // @synthesize docCamImageDirectoryURL=_docCamImageDirectoryURL;
@property(readonly, nonatomic) NSURL *cachesDirectoryURL; // @synthesize cachesDirectoryURL=_cachesDirectoryURL;
@property(retain, nonatomic) id <DCDataCryptorDelegate> dataCryptorDelegate; // @synthesize dataCryptorDelegate=_dataCryptorDelegate;
// - (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (id)createNSDataFrom:(id)arg1 metaData:(id)arg2;
- (void)clearInMemoryCache;
- (BOOL)deleteAllImages;
- (BOOL)deleteImage:(id)arg1;
- (id)getImage:(id)arg1;
- (id)getImageURL:(id)arg1 async:(BOOL)arg2;
- (id)getImageURL:(id)arg1;
- (CGSize)getImageSize:(id)arg1;
- (BOOL)replaceImage:(id)arg1 metaData:(id)arg2 uuid:(id)arg3;
- (id)setImage:(id)arg1 metaData:(id)arg2 addToMemoryCache:(BOOL)arg3;
- (id)setImage:(id)arg1 metaData:(id)arg2;
- (BOOL)makeSureScanDirectoryExists:(id )arg1;
- (void)dealloc;
- (id)initWithDataCryptorDelegate:(id)arg1 cachesDirectoryURL:(id)arg2;
- (id)initWithDataCryptorDelegate:(id)arg1;
- (id)init;

@end

