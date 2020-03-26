//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAMPanoramaCaptureRequest, CAMStillImageCaptureResult;

@protocol CAMPanoramaCaptureDelegate <NSObject>

@optional
- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didReceiveNotification:(long long)arg2;
- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didCompleteCaptureWithResult:(CAMStillImageCaptureResult *)arg2;
- (void)panoramaRequestDidStopCapturing:(CAMPanoramaCaptureRequest *)arg1 interrupted:(BOOL)arg2;
- (void)panoramaRequestDidStartCapturing:(CAMPanoramaCaptureRequest *)arg1;
@end

