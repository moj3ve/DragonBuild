//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDCameraStreamSessionID, NSDictionary, NSError, NSNumber;
@protocol HMDCameraStreamControlManagerProtocol;

@protocol HMDCameraStreamControlManagerDelegate <NSObject>
- (void)streamControlManager:(id <HMDCameraStreamControlManagerProtocol>)arg1 didFail:(NSError *)arg2;
- (void)streamControlManagerDidStopStreamForSessionID:(HMDCameraStreamSessionID *)arg1 error:(NSError *)arg2;
- (void)streamControlManagerDidReconfigureStream:(id <HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidReceiveFirstFrame:(id <HMDCameraStreamControlManagerProtocol>)arg1 audioStreamSetting:(NSUInteger)arg2 aspectRatio:(NSNumber *)arg3 slotIdentifier:(NSNumber *)arg4;
- (void)streamControlManagerDidStartStream:(id <HMDCameraStreamControlManagerProtocol>)arg1 slotIdentifier:(NSNumber *)arg2;
- (void)streamControlManagerDidSetupRemoteConnection:(id <HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidNegotiateStream:(id <HMDCameraStreamControlManagerProtocol>)arg1 selectedParameters:(NSDictionary *)arg2;
@end

