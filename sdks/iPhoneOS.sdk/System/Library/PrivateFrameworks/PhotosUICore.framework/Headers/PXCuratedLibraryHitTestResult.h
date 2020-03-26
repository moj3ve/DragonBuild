//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGHitTestResult.h>

@class PXAssetCollectionReference, PXAssetReference;

@interface PXCuratedLibraryHitTestResult : PXGHitTestResult
{
    long long _control;
    PXAssetReference *_assetReference;
    PXAssetCollectionReference *_assetCollectionReference;
}

@property(readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
@property(readonly, nonatomic) PXAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(readonly, nonatomic) long long control; // @synthesize control=_control;
// - (void).cxx_destruct;
- (id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 assetCollectionReference:(id)arg5;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetCollectionReference:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3;

@end

