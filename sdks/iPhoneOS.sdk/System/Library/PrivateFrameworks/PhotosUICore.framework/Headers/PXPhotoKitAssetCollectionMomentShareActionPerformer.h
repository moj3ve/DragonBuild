//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

#import <PhotosUICore/PXCMMWorkflowCoordinatorDelegate-Protocol.h>

@class PXCMMWorkflowCoordinator;

@interface PXPhotoKitAssetCollectionMomentShareActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXCMMWorkflowCoordinatorDelegate>
{
    PXCMMWorkflowCoordinator *_workflowCoordinator;
}

+ (id)createAlertActionWithTitle:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
+ (id)localizedTitleForUseCase:(NSUInteger)arg1 assetCollection:(id)arg2 person:(id)arg3;
+ (BOOL)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
// - (void).cxx_destruct;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(NSUInteger)arg4;
- (long long)shareOriginForSession:(id)arg1 workflowCoordinator:(id)arg2;
- (void)performUserInteractionTask;

@end

