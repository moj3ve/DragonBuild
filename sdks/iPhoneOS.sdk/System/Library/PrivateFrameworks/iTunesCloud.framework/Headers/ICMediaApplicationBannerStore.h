//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ICMediaApplicationBannerStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_bannerCache;
    NSMutableDictionary *_propertyCache;
    NSString *_filePath;
}

+ (id)defaultStore;
// - (void).cxx_destruct;
- (id)_onQueueBannersForBundleIdentifier:(id)arg1 target:(id)arg2 error:(id )arg3;
- (id)_defaultStoreFilePath;
- (void)_commit;
- (void)_load;
- (BOOL)removeAllBannersWithResult:(id )arg1;
- (id)bannersForBundleIdentifier:(id)arg1 target:(id)arg2 error:(id )arg3;
- (id)allBannersWithResult:(id )arg1;
- (BOOL)removeBannersForBundleIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)removeBannerWithGUID:(id)arg1 error:(id )arg2;
- (BOOL)addBanner:(id)arg1 error:(id )arg2;
- (id)allProperties;
- (id)bannerStorePropertyForKey:(id)arg1;
- (BOOL)setBannerStoreProperty:(id)arg1 forKey:(id)arg2;
- (id)initWithFilePath:(id)arg1;
- (id)init;

@end

