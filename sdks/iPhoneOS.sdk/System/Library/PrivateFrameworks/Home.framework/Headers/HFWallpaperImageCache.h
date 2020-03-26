//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSUIMappedImageCache, NSArray;
@protocol HFProcessedWallpaperSource, HMFLocking;

@interface HFWallpaperImageCache : NSObject
{
    id <HMFLocking> _lock;
    id <HFProcessedWallpaperSource> _processedWallpaperSource;
    BSUIMappedImageCache *_imageCache;
}

@property(retain, nonatomic) BSUIMappedImageCache *imageCache; // @synthesize imageCache=_imageCache;
// - (void).cxx_destruct;
- (id)_cacheKeyForWallpaper:(id)arg1 withVariant:(long long)arg2;
- (void)pruneUnusedWallpaperVariants:(id)arg1;
- (void)saveVariantsForWallpaper:(id)arg1 originalImage:(id)arg2;
- (id)imageForVariant:(long long)arg1 wallpaper:(id)arg2 withOriginalImageGenerator:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) NSArray *supportedProcessedVariants;
@property(retain) id <HFProcessedWallpaperSource> processedWallpaperSource; // @synthesize processedWallpaperSource=_processedWallpaperSource;
- (id)init;

@end

