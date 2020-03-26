//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationAction, NCNotificationRequest, NSArray, NSDictionary;
@protocol NCNotificationCustomContent;

@protocol NCNotificationCustomContentDelegate <NSObject>
- (void)customContentRequestsDismiss:(id <NCNotificationCustomContent>)arg1;
- (void)customContentRequestsDefaultAction:(id <NCNotificationCustomContent>)arg1;
- (void)customContent:(id <NCNotificationCustomContent>)arg1 forwardAction:(NCNotificationAction *)arg2 forNotification:(NCNotificationRequest *)arg3 withUserInfo:(NSDictionary *)arg4;
- (void)customContent:(id <NCNotificationCustomContent>)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 forNotification:(NCNotificationRequest *)arg3 withUserInfo:(NSDictionary *)arg4 completionHandler:(void (^)(BOOL))arg5;

@optional
- (void)customContent:(id <NCNotificationCustomContent>)arg1 didUpdateUserNotificationActions:(NSArray *)arg2;
- (void)customContentDidUpdateTitle:(id <NCNotificationCustomContent>)arg1;
- (void)customContentDidLoadExtension:(id <NCNotificationCustomContent>)arg1;
@end

