//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDCKChatSyncCKOperationFactory : NSObject
{
}

- (id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg1;
- (id)saveChatsCKOperationUsingRecordsToSave:(id)arg1;
- (id)_chatWriteRecordsCKConfiguration;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(NSUInteger)arg3;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(NSUInteger)arg3 groupName:(id)arg4;
- (id)_chatSyncOperationGroup;
- (id)_chatSyncOperationGroupWithName:(id)arg1;
- (id)_chatFetchRecordZoneChangesCKConfiguration;
- (id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(NSUInteger)arg3;

@end

