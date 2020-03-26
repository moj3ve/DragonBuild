//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMDAChangeTrackableFetchableModel-Protocol.h>
#import <ReminderKit/REMDAChangedModelObjectResult-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataProviding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>
#import <ReminderKit/_REMDAChangeTrackableModel-Protocol.h>

@class NSOrderedSet, NSString, REMAccount, REMListAppearanceContext, REMListCalDAVNotificationContext, REMListShareeContext, REMListStorage, REMListSublistContext, REMObjectID, REMStore;

@interface REMList : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding>
{
    REMStore *_store;
    REMListStorage *_storage;
    REMAccount *_account;
    REMList *_parentList;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (BOOL)isSharedWithShareeCount:(NSUInteger)arg1 sharingStatus:(long long)arg2;
+ (id)localAccountDefaultListID;
+ (id)siriFoundInAppsListID;
+ (id)fetchRequestWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2;
+ (id /* CDUnknownBlockType */)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+ (id /* CDUnknownBlockType */)rem_DA_deletedKeyFromTombstoneBlock;
+ (id /* CDUnknownBlockType */)rem_DA_fetchByObjectIDsBlock;
+ (id /* CDUnknownBlockType */)rem_DA_fetchByObjectIDBlock;
+ (BOOL)rem_DA_supportsLazyDelete;
+ (BOOL)rem_DA_supportsFetching;
@property(retain, nonatomic) REMList *parentList; // @synthesize parentList=_parentList;
@property(readonly, nonatomic) REMAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) REMListStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (void)hack_overrideReminderIDsOrderingWithOrderedObjectIDs:(id)arg1;
@property(readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property(readonly, nonatomic) REMObjectID *remObjectID;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 error:(id )arg2;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 error:(id )arg2;
- (id)sharingStatusText;
- (id)formattedSharedOwnerName;
- (id)fetchRemindersAndSubtasksWithError:(id )arg1;
- (id)fetchRemindersWithError:(id )arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) BOOL isSharedToMe;
@property(readonly, nonatomic) BOOL isOwnedByMe;
@property(readonly, nonatomic) BOOL isShared;
@property(readonly, nonatomic) BOOL canBeIncludedInGroup;
@property(readonly, nonatomic) BOOL canBeShared;
- (id)ekColor;
@property(readonly, nonatomic) NSOrderedSet *reminderIDsOrdering;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) REMListShareeContext *shareeContext;
@property(readonly, nonatomic) REMListCalDAVNotificationContext *calDAVNotificationContext;
@property(readonly, nonatomic) REMListSublistContext *sublistContext;
@property(readonly, nonatomic) REMListAppearanceContext *appearanceContext;
- (id)initWithStore:(id)arg1 account:(id)arg2 storage:(id)arg3;

@end

