//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMRoom.h>

#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFWallaperHost-Protocol.h>

@class HMCameraProfile, NSArray, NSDate, NSSet, NSString, UIImage;

@interface HMRoom (HFDebugging) <HFStateDumpBuildable, HFWallaperHost, HFReorderableHomeKitObject>
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateWallpaperImage:(id)arg1;
@property(readonly, nonatomic) UIImage *hf_wallpaperImage;
@property(readonly, nonatomic) NSArray *hf_visibleAccessories;
@property(readonly, nonatomic) NSSet *hf_allVisibleServices;
@property(readonly, nonatomic) NSArray *hf_unpairedHomePods;
@property(readonly, nonatomic) NSArray *hf_allZones;
@property(readonly, nonatomic) NSArray *hf_allServices;
@property(readonly, nonatomic) __weak HMCameraProfile *hf_unitaryCameraProfile;
@property(readonly, nonatomic) NSArray *hf_allCameraProfiles;
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
@end

