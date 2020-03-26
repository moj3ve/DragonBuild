//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBFluidSwitcherGestureWorkspaceTransaction.h>

#import <SpringBoard/SBHomeGrabberDelegate-Protocol.h>

@interface SBDeckSwitcherPanGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction <SBHomeGrabberDelegate>
{
}

- (BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (void)_removeHysteresisFromTranslation;
- (id)touchHistoryProvidingGesture;
- (void)_finishWithGesture:(id)arg1;
- (void)_beginWithGesture:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (id)selectedAppLayoutForGestureRecognizer:(id)arg1;
- (long long)_gestureType;

@end

