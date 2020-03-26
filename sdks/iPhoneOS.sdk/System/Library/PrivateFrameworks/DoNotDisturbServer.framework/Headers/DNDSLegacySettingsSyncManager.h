//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSettingsSyncManager-Protocol.h>

@class NPSDomainAccessor, NPSManager;
@protocol DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;

@interface DNDSLegacySettingsSyncManager : NSObject <DNDSSettingsSyncManager>
{
    BOOL _listen;
    BOOL _send;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
    id <DNDSSettingsSyncManagerDataSource> _dataSource;
    id <DNDSSettingsSyncManagerDelegate> _delegate;
}

+ (id)receiveManagerForPairedDevice:(id)arg1;
+ (id)sendManagerForPairedDevice:(id)arg1;
+ (void)cleanupState;
@property(nonatomic) __weak id <DNDSSettingsSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DNDSSettingsSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)_updateBypassSettings;
- (void)_propagateBypassSettings:(id)arg1;
- (void)_updateScheduleSettingsWithDate:(id)arg1;
- (void)_propagateScheduleSettings:(id)arg1;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)update;
- (void)resume;
- (void)dealloc;
- (id)_initWithListen:(BOOL)arg1 send:(BOOL)arg2 pairedDevice:(id)arg3;

@end

