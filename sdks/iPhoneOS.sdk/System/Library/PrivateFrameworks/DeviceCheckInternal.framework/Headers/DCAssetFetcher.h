//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DCAssetFetcher : NSObject
{
}

+ (id)sharedFetcher;
- (id)_validateAsset:(id)arg1 error:(id )arg2;
- (void)_handleSuccessForQuery:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_handleMissingMetadataWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_assetQuery;
- (void)_queryMetadataWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_fetchAssetWithContext:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)initiateMetadataFetchIgnoringCachesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchPublicKeyAssetWithCompletion:(id /* CDUnknownBlockType */)arg1;

@end

