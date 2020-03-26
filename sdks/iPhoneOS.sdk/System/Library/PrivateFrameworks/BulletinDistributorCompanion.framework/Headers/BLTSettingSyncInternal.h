//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTSettingSyncingClient-Protocol.h>

@class BBObserver, BBSettingsGateway, BLTMuteSync, BLTSectionConfiguration, BLTSettingSyncServer, BLTSpokenSettingSync, BLTWristStateObserver;

@interface BLTSettingSyncInternal : NSObject <BBObserverDelegate, BLTSettingSyncingClient>
{
    BLTWristStateObserver *_wristStateObserver;
    BBSettingsGateway *_settingsGateway;
    BLTMuteSync *_muteSync;
    BLTSettingSyncServer *_connection;
    BLTSectionConfiguration *_sectionConfiguration;
    BLTSpokenSettingSync *_spokenSettingSync;
    BBObserver *_observer;
}

@property(retain, nonatomic) BBObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) BLTSpokenSettingSync *spokenSettingSync; // @synthesize spokenSettingSync=_spokenSettingSync;
@property(readonly, nonatomic) BLTSectionConfiguration *sectionConfiguration; // @synthesize sectionConfiguration=_sectionConfiguration;
@property(retain, nonatomic) BLTSettingSyncServer *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) BLTMuteSync *muteSync; // @synthesize muteSync=_muteSync;
@property(retain, nonatomic) BBSettingsGateway *settingsGateway; // @synthesize settingsGateway=_settingsGateway;
// - (void).cxx_destruct;
- (void)observer:(id)arg1 updateGlobalSettings:(id)arg2;
- (NSUInteger)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 category:(id)arg4;
- (NSUInteger)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3;
@property(readonly, nonatomic) BOOL isWristDetectDisabled;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(NSUInteger)arg1 maximumSendDelay:(NSUInteger)arg2 minimumResponseDelay:(NSUInteger)arg3 maximumResponseDelay:(NSUInteger)arg4;
- (void)enableNotifications:(BOOL)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3;
- (void)setNotificationsLevel:(NSUInteger)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3;
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(BOOL)arg1 date:(id)arg2;
- (void)setNotificationsCriticalAlertEnabled:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsSoundEnabled:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsLevel:(NSUInteger)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 fromRemote:(BOOL)arg4;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
- (void)setSectionInfo:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (void)connect;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;
- (id)init;

@end

