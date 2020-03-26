//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFItem, HFStaticItemProvider, HMAccessory, HMSymptomsHandler;
@protocol HFHomeKitObject;

@interface HUAccessoryDebugModule : HFItemModule
{
    BOOL _fakeWifiNetworkMismatchSymptom;
    id <HFHomeKitObject> _homeKitObject;
    HFItem *_fakeUnreachableItem;
    HFItem *_fakeShouldDisplayManualFixOptionItem;
    HFItem *_fakeWiFiSymptomItem;
    HFItem *_fakeWiFiPerformanceSymptomItem;
    HFItem *_fakeInternetFixSymptomItem;
    HFItem *_fakeHardwareFixSymptomItem;
    HFItem *_fakeGeneralFixSymptomItem;
    HFItem *_fakeHomeKitSymptomItem;
    HFItem *_fakeICloudSymptomItem;
    HFItem *_fakeITunesSymptomItem;
    HFItem *_fakeWifiNetworkMismatchSymptomItem;
    HFItem *_fakeVPNProfileExpiredSymptomItem;
    HFItem *_fake8021xNetworkSymptomItem;
    HFItem *_fakeNetworkProfileFixSymptomItem;
    HFItem *_fakeNetworkProfileInstallSymptomItem;
    HFItem *_fakeNetworkNotShareableSymptomItem;
    HFItem *_fakeStereoPairGeneralSymptomItem;
    HFItem *_fakeStereoPairNotFoundSymptomItem;
    HFItem *_fakeStereoPairVersionMismatchSymptomItem;
    HMAccessory *_accessory;
    HMSymptomsHandler *_symptomsHandler;
    HFStaticItemProvider *_debugItemProvider;
}

@property(readonly, nonatomic) HFStaticItemProvider *debugItemProvider; // @synthesize debugItemProvider=_debugItemProvider;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(nonatomic) BOOL fakeWifiNetworkMismatchSymptom; // @synthesize fakeWifiNetworkMismatchSymptom=_fakeWifiNetworkMismatchSymptom;
@property(readonly, nonatomic) HFItem *fakeStereoPairVersionMismatchSymptomItem; // @synthesize fakeStereoPairVersionMismatchSymptomItem=_fakeStereoPairVersionMismatchSymptomItem;
@property(readonly, nonatomic) HFItem *fakeStereoPairNotFoundSymptomItem; // @synthesize fakeStereoPairNotFoundSymptomItem=_fakeStereoPairNotFoundSymptomItem;
@property(readonly, nonatomic) HFItem *fakeStereoPairGeneralSymptomItem; // @synthesize fakeStereoPairGeneralSymptomItem=_fakeStereoPairGeneralSymptomItem;
@property(readonly, nonatomic) HFItem *fakeNetworkNotShareableSymptomItem; // @synthesize fakeNetworkNotShareableSymptomItem=_fakeNetworkNotShareableSymptomItem;
@property(readonly, nonatomic) HFItem *fakeNetworkProfileInstallSymptomItem; // @synthesize fakeNetworkProfileInstallSymptomItem=_fakeNetworkProfileInstallSymptomItem;
@property(readonly, nonatomic) HFItem *fakeNetworkProfileFixSymptomItem; // @synthesize fakeNetworkProfileFixSymptomItem=_fakeNetworkProfileFixSymptomItem;
@property(readonly, nonatomic) HFItem *fake8021xNetworkSymptomItem; // @synthesize fake8021xNetworkSymptomItem=_fake8021xNetworkSymptomItem;
@property(readonly, nonatomic) HFItem *fakeVPNProfileExpiredSymptomItem; // @synthesize fakeVPNProfileExpiredSymptomItem=_fakeVPNProfileExpiredSymptomItem;
@property(readonly, nonatomic) HFItem *fakeWifiNetworkMismatchSymptomItem; // @synthesize fakeWifiNetworkMismatchSymptomItem=_fakeWifiNetworkMismatchSymptomItem;
@property(readonly, nonatomic) HFItem *fakeITunesSymptomItem; // @synthesize fakeITunesSymptomItem=_fakeITunesSymptomItem;
@property(readonly, nonatomic) HFItem *fakeICloudSymptomItem; // @synthesize fakeICloudSymptomItem=_fakeICloudSymptomItem;
@property(readonly, nonatomic) HFItem *fakeHomeKitSymptomItem; // @synthesize fakeHomeKitSymptomItem=_fakeHomeKitSymptomItem;
@property(readonly, nonatomic) HFItem *fakeGeneralFixSymptomItem; // @synthesize fakeGeneralFixSymptomItem=_fakeGeneralFixSymptomItem;
@property(readonly, nonatomic) HFItem *fakeHardwareFixSymptomItem; // @synthesize fakeHardwareFixSymptomItem=_fakeHardwareFixSymptomItem;
@property(readonly, nonatomic) HFItem *fakeInternetFixSymptomItem; // @synthesize fakeInternetFixSymptomItem=_fakeInternetFixSymptomItem;
@property(readonly, nonatomic) HFItem *fakeWiFiPerformanceSymptomItem; // @synthesize fakeWiFiPerformanceSymptomItem=_fakeWiFiPerformanceSymptomItem;
@property(readonly, nonatomic) HFItem *fakeWiFiSymptomItem; // @synthesize fakeWiFiSymptomItem=_fakeWiFiSymptomItem;
@property(readonly, nonatomic) HFItem *fakeShouldDisplayManualFixOptionItem; // @synthesize fakeShouldDisplayManualFixOptionItem=_fakeShouldDisplayManualFixOptionItem;
@property(readonly, nonatomic) HFItem *fakeUnreachableItem; // @synthesize fakeUnreachableItem=_fakeUnreachableItem;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject; // @synthesize homeKitObject=_homeKitObject;
// - (void).cxx_destruct;
- (void)_pushSymptomUpdate;
- (void)_reloadItemProviders;
@property(nonatomic) BOOL fakeNetworkNotShareableSymptom;
@property(nonatomic) BOOL fakeNetworkProfileInstallSymptom;
@property(nonatomic) BOOL fakeNetworkProfileFixSymptom;
@property(nonatomic) BOOL fake8021xNetworkSymptom;
@property(nonatomic) BOOL fakeStereoPairVersionMismatchSymptom;
@property(nonatomic) BOOL fakeStereoPairNotFoundSymptom;
@property(nonatomic) BOOL fakeStereoPairGeneralSymptom;
@property(nonatomic) BOOL fakeHardwareFixSymptom;
@property(nonatomic) BOOL fakeInternetFixSymptom;
@property(nonatomic) BOOL fakeWiFiPerformanceSymptom;
@property(nonatomic) BOOL fakeWiFiSymptom;
@property(nonatomic) BOOL fakeVPNProfileExpiredSymptom;
- (void)setFakeWiFiNetworkMismatchSymptom:(BOOL)arg1;
- (BOOL)fakeWiFiNetworkMismatchSymptom;
@property(nonatomic) BOOL fakeShouldDisplayManualFixOption;
@property(nonatomic) BOOL fakeUnreachableError;
@property(nonatomic) BOOL fakeHomeKitSymptom;
@property(nonatomic) BOOL fakeGeneralFixSymptom;
@property(nonatomic) BOOL fakeITunesSymptom;
@property(nonatomic) BOOL fakeICloudSymptom;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1 homeKitObject:(id)arg2;

@end

