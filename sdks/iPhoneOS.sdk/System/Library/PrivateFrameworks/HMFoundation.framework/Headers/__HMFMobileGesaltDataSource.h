//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFSystemInfoBluetoothLEDataSource-Protocol.h>
#import <HMFoundation/HMFSystemInfoMarketingInformationDataSource-Protocol.h>
#import <HMFoundation/HMFSystemInfoNameDataSource-Protocol.h>
#import <HMFoundation/HMFSystemInfoProductInfoDataSource-Protocol.h>
#import <HMFoundation/HMFSystemInfoSerialNumberDataSource-Protocol.h>
#import <HMFoundation/HMFSystemInfoSoftwareVersionDataSource-Protocol.h>
#import <HMFoundation/HMFSystemInfoWiFiDataSource-Protocol.h>

@class HMFMACAddress, HMFSoftwareVersion, HMFUnfairLock, NSObject, NSString;
@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFMobileGesaltDataSource : HMFObject <HMFSystemInfoNameDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource, HMFSystemInfoBluetoothLEDataSource>
{
    HMFUnfairLock *_lock;
    BOOL _supportsBLE;
    id <HMFSystemInfoNameDataSourceDelegate> _delegate;
    NSString *_name;
    NSString *_modelIdentifier;
    NSString *_model;
    NSString *_regionInfo;
    NSString *_serialNumber;
    long long _productPlatform;
    long long _productClass;
    long long _productVariant;
    HMFSoftwareVersion *_softwareVersion;
    HMFMACAddress *_WiFiInterfaceMACAddress;
    NSObject<OS_dispatch_queue> *_queue;
    struct MGNotificationTokenStruct _notificationToken;
}

@property(readonly) struct MGNotificationTokenStruct notificationToken; // @synthesize notificationToken=_notificationToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) BOOL supportsBLE; // @synthesize supportsBLE=_supportsBLE;
@property(readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress; // @synthesize WiFiInterfaceMACAddress=_WiFiInterfaceMACAddress;
@property(readonly, copy, nonatomic) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(readonly, nonatomic) long long productVariant; // @synthesize productVariant=_productVariant;
@property(readonly, nonatomic) long long productClass; // @synthesize productClass=_productClass;
@property(readonly, nonatomic) long long productPlatform; // @synthesize productPlatform=_productPlatform;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy, nonatomic) NSString *regionInfo; // @synthesize regionInfo=_regionInfo;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property __weak id <HMFSystemInfoNameDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)init;

@end

