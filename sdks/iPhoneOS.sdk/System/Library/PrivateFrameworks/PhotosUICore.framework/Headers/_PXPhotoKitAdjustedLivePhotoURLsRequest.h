//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class NSString, PHImageRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedLivePhotoURLsRequest : _PXPhotoKitAdjustedUIMediaRequest
{
    PLPhotoEditRenderer *_renderer;
    PHImageRequestOptions *_options;
    NSString *_pairingIdentifier;
    id /* CDUnknownBlockType */ _resultHandler;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, copy, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
// - (void).cxx_destruct;
- (void)_handleExportFinishedWithImageURL:(id)arg1 videoURL:(id)arg2 error:(id)arg3;
- (void)_renderIfNeeded;
- (void)progressDidChange;
- (void)editSourceDidChange;
- (void)start;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 pairingIdentifier:(id)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(id /* CDUnknownBlockType */)arg6;

@end

