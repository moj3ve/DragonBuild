//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLSyncContext;

@interface PLCPLFacePushSupport : NSObject
{
    id <PLSyncContext> _syncContext;
}

+ (void)markSyncableFacesAsPushedInAsset:(id)arg1;
+ (BOOL)_shouldPushBeingKeyFace:(id)arg1;
+ (BOOL)isFaceSyncable:(id)arg1;
+ (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 inPhotoLibrary:(id)arg3;
// - (void).cxx_destruct;
- (id)rejectedPersonIdentifiersForFace:(id)arg1;
- (id)cplFaceRefFromFace:(id)arg1;
- (id)cplFaceRefsFromFaces:(id)arg1 algorithmVersion:(long long )arg2;
- (id)_facesAdjustmentsFingerprintFromAsset:(id)arg1 assetChange:(id)arg2;
- (BOOL)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1;
- (id)cplFaceAnalysisRefFromAsset:(id)arg1 algorithmVersion:(long long )arg2;
- (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2;
- (id)initWithSyncContext:(id)arg1;

@end

