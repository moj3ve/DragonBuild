//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HMFUnfairLock, NSMutableDictionary;

@interface HMDNotificationRegistry : HMFObject <NSSecureCoding>
{
    HMFUnfairLock *_lock;
    NSMutableDictionary *_notificationRegistry;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)doesKey:(id)arg1 matchMediaProfile:(id)arg2;
+ (id)keyForProperty:(id)arg1 mediaProfile:(id)arg2;
+ (id)_createCharacteristicsMapForCharacteristics:(id)arg1;
+ (id)keyForCharacteristic:(id)arg1;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)auditUsersForNotifications:(id)arg1 forHome:(id)arg2;
- (void)disableNotification:(id)arg1 user:(id)arg2 ignoreLockReq:(BOOL)arg3 home:(id)arg4;
- (void)deregisterUsers:(id)arg1 forHome:(id)arg2;
- (id)_delayedBlocksCollectedWhileDeregisteringUsers:(id)arg1 forHome:(id)arg2 isiOS:(BOOL)arg3 isResident:(BOOL)arg4;
- (id)allCharacteristicIdentifiers;
- (id)usersRegisteredForNotificationsForProperties:(id)arg1;
- (id)usersRegisteredForNotificationsForCharacteristics:(id)arg1;
- (id)filterProperties:(id)arg1 forUser:(id)arg2;
- (id)filterCharacteristics:(id)arg1 forUser:(id)arg2;
- (BOOL)removeRegistrationsForMediaProfile:(id)arg1;
- (BOOL)disableNotificationForProperties:(id)arg1 forUser:(id)arg2;
- (BOOL)enableNotificationForProperties:(id)arg1 forUser:(id)arg2;
- (BOOL)disableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 characteristicsToDisableEvents:(id )arg3;
- (BOOL)enableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2;
- (id)shortDescription;
@property(readonly, nonatomic) NSMutableDictionary *notificationRegistry; // @synthesize notificationRegistry=_notificationRegistry;
- (id)init;

@end

