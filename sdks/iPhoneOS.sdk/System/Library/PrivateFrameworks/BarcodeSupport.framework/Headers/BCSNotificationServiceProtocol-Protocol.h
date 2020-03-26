//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UNNotificationResponse;
@protocol BCSCodePayload, BCSParsedData;

@protocol BCSNotificationServiceProtocol
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)notifyParsedCodeWithData:(id <BCSParsedData>)arg1 codePayload:(id <BCSCodePayload>)arg2 shouldReplacePreviousNotifications:(BOOL)arg3 reply:(void (^)(NSError *, AWDBarcodeSupportCodeDetectedEvent *))arg4;
@end

