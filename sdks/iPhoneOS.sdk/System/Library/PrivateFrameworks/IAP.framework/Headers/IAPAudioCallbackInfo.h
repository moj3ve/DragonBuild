//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject
{
    /* void * CDUnknownFunctionPointerType _deviceStateChangedCallback */;
    void _deviceStateChangedContext;
    /* void * CDUnknownFunctionPointerType _volumeChangedCallback */;
    void _volumeChangedContext;
    /* void * CDUnknownFunctionPointerType _pauseOnHeadphoneDisconnectChangedCallback */;
    void _pauseOnHeadphoneDisconnectChangedContext;
    /* void * CDUnknownFunctionPointerType _volumeControlSupportChangedCallback */;
    void _volumeControlSupportChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    CPDistributedNotificationCenter *_dnCenteriAP2;
    NSLock *_lock;
}

+ (id)sharedInstance;
- (void)_volumeControlSupportChanged:(id)arg1;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)arg1;
- (void)_volumeChanged:(id)arg1;
- (void)_deviceStateChanged:(id)arg1;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop )arg1;
- (void)clearVolumeControlSupportChangedCallback;
- (void)setupVolumeControlSupportChangedCallback:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 withContext:(void )arg2 andRunLoop:(struct __CFRunLoop )arg3;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 withContext:(void )arg2 andRunLoop:(struct __CFRunLoop )arg3;
- (void)clearVolumeChangedCallback;
- (void)setupVolumeChangedCallback:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 withContext:(void )arg2 andRunLoop:(struct __CFRunLoop )arg3;
- (void)clearDeviceStateChangedCallback;
- (void)setupDeviceStateChangedCallback:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 withContext:(void )arg2 andRunLoop:(struct __CFRunLoop )arg3;
- (void)dealloc;
- (id)init;
- (void)_handleiAPDaemonDied:(id)arg1;

@end

