//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationSectionSettings, NSSet, NSString;
@protocol NCNotificationDestination;

@protocol NCNotificationSectionSettingsProvider <NSObject>
- (NCNotificationSectionSettings *)notificationSectionSettingsForDestination:(id <NCNotificationDestination>)arg1 forSectionIdentifier:(NSString *)arg2;
- (NSSet *)notificationSectionSettingsForDestination:(id <NCNotificationDestination>)arg1;
@end

