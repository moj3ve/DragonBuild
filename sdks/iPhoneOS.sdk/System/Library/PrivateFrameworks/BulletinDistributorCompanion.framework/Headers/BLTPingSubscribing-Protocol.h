//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BBBulletin, NSArray, NSSet, NSString;

@protocol BLTPingSubscribing <NSObject>
- (NSSet *)sectionIDsForBulletins;
- (void)pingSubscriberDidLoad;
- (NSArray *)subscriptionInfos;
- (NSSet *)sectionIDs;
- (void)pingWithBulletin:(BBBulletin *)arg1 ack:(void (^)(NSUInteger))arg2;
- (void)pingWithBulletin:(BBBulletin *)arg1;
- (void)pingWithRecordID:(NSString *)arg1 forSectionID:(NSString *)arg2 ack:(void (^)(NSUInteger))arg3;
- (void)pingWithRecordID:(NSString *)arg1 forSectionID:(NSString *)arg2;
@end

