//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKAppGrabberView, CKBrowserTransitionCoordinator, IMBalloonPlugin, NSDate, NSString, UIImage, UIViewController;
@protocol CKBrowserViewControllerProtocol;

@protocol CKBrowserTransitionCoordinatorDelegate <NSObject>

@optional
- (UIViewController *)transitionsPresentationViewController;
- (UIImage *)appIconOverride;
- (NSString *)appTitleOverride;
- (BOOL)shouldAlwaysShowAppTitle;
- (BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(CKBrowserTransitionCoordinator *)arg1;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(CKBrowserTransitionCoordinator *)arg1;
- (CGRect)cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (CKAppGrabberView *)appGrabberForBrowserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppManager:(CKBrowserTransitionCoordinator *)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppStore:(CKBrowserTransitionCoordinator *)arg1;
- (CGSize)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 preferredSizeForBrowser:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 hasUpdatedLastTouchDate:(NSDate *)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 didSwitchToPlugin:(IMBalloonPlugin *)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 browserWillBecomeInactive:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(CKBrowserTransitionCoordinator *)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 expandedStateDidChange:(BOOL)arg2 withReason:(long long)arg3;
@end

