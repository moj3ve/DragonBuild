//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ICInAppMessageStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_messageEntryCache;
    NSMutableDictionary *_globalPropertyCache;
    NSMutableDictionary *_applicationPropertyCache;
    NSMutableDictionary *_messageMetadataCache;
    NSMutableArray *_pendingEvents;
    NSString *_filePath;
}

// - (void).cxx_destruct;
- (void)_commit;
- (void)_load;
- (id)_defaultStoreFilePath;
- (void)removeAllMetadataForBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)removePendingMessageEventWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)pendingMessageEventsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)addPendingMessageEvent:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resetStoreWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getAllMessageEntriesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getMessageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)removeMessageEntry:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateMessageEntry:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addMessageEntry:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)allApplicationStorePropertiesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getStorePropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)updateStoreProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)allStorePropertiesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getStorePropertyForKey:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateStoreProperty:(id)arg1 forKey:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)initWithFilePath:(id)arg1;
- (id)init;

@end

