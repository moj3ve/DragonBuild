//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseValueCache, HDProfile;

@interface HDMetadataManager : NSObject
{
    HDProfile *_profile;
    HDDatabaseValueCache *_keyEntityCache;
    HDDatabaseValueCache *_keyCache;
}

+ (Class)_metadataPredicateClassForKey:(id)arg1;
// - (void).cxx_destruct;
- (id)_keyForKeyID:(id)arg1 database:(id)arg2 error:(id )arg3;
- (id)_keyEntityForKey:(id)arg1 createIfNecessary:(BOOL)arg2 database:(id)arg3 error:(id )arg4;
- (id)predicateWithMetadataKey:(id)arg1 exists:(BOOL)arg2;
- (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(NSUInteger)arg3;
- (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
- (BOOL)_insertExternalSyncMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(BOOL)arg5 database:(id)arg6 error:(id )arg7;
- (id)_ignoredInsertedMetadataKeys;
- (BOOL)_skipInsertOfKey:(id)arg1 metadata:(id)arg2;
- (BOOL)_insertMetadata:(id)arg1 forObjectID:(id)arg2 database:(id)arg3 error:(id )arg4;
- (BOOL)insertMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(BOOL)arg5 database:(id)arg6 error:(id )arg7;
- (BOOL)insertMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(BOOL)arg5 error:(id )arg6;
- (id)rawMetadataForObject:(id)arg1 error:(id )arg2;
- (id)metadataForObjectID:(long long)arg1 keyFilter:(id /* CDUnknownBlockType */)arg2 error:(id )arg3;
- (id)_externalSyncMetadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(id /* CDUnknownBlockType */)arg3 database:(id)arg4 error:(id )arg5;
- (void)_insertDerivedMetadataforKey:(id)arg1 value:(id)arg2 filteredAddBlock:(id /* CDUnknownBlockType */)arg3;
- (id)_metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(id /* CDUnknownBlockType */)arg3 statement:(id)arg4 error:(id )arg5;
- (id)metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(id /* CDUnknownBlockType */)arg3 statement:(id)arg4 error:(id )arg5;
- (id)initWithProfile:(id)arg1;

@end

