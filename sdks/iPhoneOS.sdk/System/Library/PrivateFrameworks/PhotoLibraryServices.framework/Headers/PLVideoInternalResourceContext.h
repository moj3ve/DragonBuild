//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLVideoChoosingAssetInformation-Protocol.h>
#import <PhotoLibraryServices/PLVideoResourceContext-Protocol.h>

@class NSManagedObjectContext, PLManagedAsset;

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation>
{
    NSManagedObjectContext *_moc;
    PLManagedAsset *_asset;
}

// - (void).cxx_destruct;
- (BOOL)validateResource:(id)arg1;
- (void)repairResource:(id)arg1;
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (id)videoResourcesMatchingVersions:(id)arg1;
- (double)sizeThresholdForHighQuality;
- (BOOL)shouldUseNonAdjustedVersion;
- (BOOL)isPhotoIris;
- (BOOL)hasAdjustments;
- (id)backingResourceForVideoResource:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 assetObjectID:(id)arg2;

@end

