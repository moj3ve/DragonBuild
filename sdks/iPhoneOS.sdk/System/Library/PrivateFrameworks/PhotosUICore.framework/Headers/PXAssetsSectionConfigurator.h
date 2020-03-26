//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXAssetsSectionLayoutSpec;

@interface PXAssetsSectionConfigurator : NSObject
{
    PXAssetsSectionLayoutSpec *_assetsSectionLayoutSpec;
    UIEdgeInsets _containerInsets;
}

@property(readonly, nonatomic) UIEdgeInsets containerInsets; // @synthesize containerInsets=_containerInsets;
// - (void).cxx_destruct;
- (CGRect)containerFrameForAssetSectionLayout:(id)arg1;
- (void)configureAssetSectionLayout:(id)arg1;
- (id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
@property(readonly, nonatomic) PXAssetsSectionLayoutSpec *assetsSectionLayoutSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;
- (id)init;

@end

