//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@interface HMDAppleAccountSettings : HMFObject <HMFLogging>
{
}

+ (BOOL)supportsCloudSettings;
+ (id)sharedSettings;
+ (id)logCategory;
- (void)updateHomeEnabled:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)synchronize;
@property(readonly, getter=isEphemeral) BOOL ephemeral;
@property(readonly, getter=isManaged) BOOL managed;
@property(readonly, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property(readonly, getter=isHomeEnabled) BOOL homeEnabled;
- (id)attributeDescriptions;
@property(readonly, getter=isEducationMode) BOOL educationMode;

@end

