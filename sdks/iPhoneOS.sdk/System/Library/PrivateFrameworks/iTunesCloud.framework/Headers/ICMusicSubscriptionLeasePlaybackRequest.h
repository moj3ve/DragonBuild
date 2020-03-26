//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICStoreRequestContext, NSString;

@interface ICMusicSubscriptionLeasePlaybackRequest : NSObject <NSCopying>
{
    BOOL _shouldPreventLeaseAcquisition;
    BOOL _shouldRequireLeaseAcquisition;
    NSString *_assetSourceStorefrontID;
    ICStoreRequestContext *_requestContext;
    NSUInteger _storeCloudID;
    long long _storePurchasedAdamID;
    long long _storeSubscriptionAdamID;
    NSString *_cloudUniversalLibraryID;
}

@property(nonatomic) BOOL shouldRequireLeaseAcquisition; // @synthesize shouldRequireLeaseAcquisition=_shouldRequireLeaseAcquisition;
@property(nonatomic) BOOL shouldPreventLeaseAcquisition; // @synthesize shouldPreventLeaseAcquisition=_shouldPreventLeaseAcquisition;
@property(copy, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property(nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property(nonatomic) NSUInteger storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property(readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRequestContext:(id)arg1;

@end

