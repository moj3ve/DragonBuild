//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, SBDeviceApplicationSceneHandle;

@protocol SBApplicationHosting <NSObject>
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (NSArray *)hostedAppSceneHandles;
- (SBDeviceApplicationSceneHandle *)hostedAppSceneHandle;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
@end

