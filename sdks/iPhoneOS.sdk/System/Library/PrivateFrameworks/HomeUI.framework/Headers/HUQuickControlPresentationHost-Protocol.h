//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemManagerContainer-Protocol.h>

@class HUQuickControlPresentationCoordinator, UIViewController;
@protocol HUQuickControlPresentationHost;

@protocol HUQuickControlPresentationHost <HUItemManagerContainer>
- (void)childViewController:(UIViewController<HUQuickControlPresentationHost> *)arg1 didEndQuickControlsPresentation:(HUQuickControlPresentationCoordinator *)arg2;
- (void)childViewController:(UIViewController<HUQuickControlPresentationHost> *)arg1 willBeginQuickControlsPresentation:(HUQuickControlPresentationCoordinator *)arg2;
@end

