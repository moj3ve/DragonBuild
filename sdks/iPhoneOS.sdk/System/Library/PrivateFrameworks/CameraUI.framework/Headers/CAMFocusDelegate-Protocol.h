//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAMFocusResult, CUCaptureController;

@protocol CAMFocusDelegate <NSObject>
- (void)captureControllerWillResetFocusAndExposure:(CUCaptureController *)arg1;
- (BOOL)captureController:(CUCaptureController *)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputFocusResult:(CAMFocusResult *)arg2;

@optional
- (double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(CUCaptureController *)arg1;
@end

