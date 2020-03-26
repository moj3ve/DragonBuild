//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDSpamMessageCreator : NSObject
{
}

- (id)surfURLForIMMessageItem:(id)arg1;
- (BOOL)hasDataDetectedInformalPayment:(id)arg1;
- (id)metaDataForSurfURL:(id)arg1;
- (BOOL)isSurfPayment:(id)arg1;
- (void)reportUnknownToIDS:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4;
- (id)reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(NSUInteger)arg3 isAutoReport:(BOOL)arg4 withChat:(id)arg5 maxMessagesToReport:(NSUInteger)arg6 totalMessageCount:(NSUInteger )arg7 onlyReportForiMessageService:(BOOL)arg8 notifyInternalSecurity:(BOOL)arg9;
- (id)transferForGuid:(id)arg1;

@end

