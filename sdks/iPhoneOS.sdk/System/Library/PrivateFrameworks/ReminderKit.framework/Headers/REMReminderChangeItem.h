//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMConflictResolving-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataWritableProviding-Protocol.h>
#import <ReminderKit/REMSaveRequestTrackedValue-Protocol.h>

@class NSAttributedString, NSDateComponents, NSString, REMAccountCapabilities, REMChangedKeysObserver, REMListChangeItem, REMReminderAttachmentContextChangeItem, REMReminderFlaggedContextChangeItem, REMReminderStorage, REMReminderSubtaskContextChangeItem, REMSaveRequest;

@interface REMReminderChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding>
{
    REMSaveRequest *_saveRequest;
    REMReminderStorage *_storage;
    REMChangedKeysObserver *_changedKeysObserver;
}

+ (id)_deduplicateAlarms:(id)arg1;
+ (void)initialize;
+ (long long)hourForNextThirdsFromHour:(long long)arg1;
@property(retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // @synthesize changedKeysObserver=_changedKeysObserver;
@property(retain, nonatomic) REMReminderStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) REMSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
// - (void).cxx_destruct;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)changedKeys;
- (void)removeFromParentReminder;
- (void)updateAccountCapabilities:(id)arg1;
- (id)removeFromParentReminderAllowingUndo;
- (void)removeFromList;
- (id)removeFromListAllowingUndo;
@property(readonly, nonatomic) REMReminderFlaggedContextChangeItem *flaggedContext;
@property(readonly, nonatomic) REMReminderAttachmentContextChangeItem *attachmentContext;
@property(readonly, nonatomic) REMReminderSubtaskContextChangeItem *subtaskContext;
- (BOOL)isSubtask;
- (void)removeAllAlarms;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
- (id)addAlarmWithTrigger:(id)arg1;
- (id)nextRecurrentDueDateComponentsAfter:(id)arg1;
- (double)nextRecurrentAdvanceAmountForDateComponents:(id)arg1 afterDate:(id)arg2;
- (void)removeAllRecurrenceRules;
- (void)removeRecurrenceRule:(id)arg1;
- (void)insertRecurrenceRule:(id)arg1 afterRecurrenceRule:(id)arg2;
- (void)insertRecurrenceRule:(id)arg1 beforeRecurrenceRule:(id)arg2;
- (void)addRecurrenceRule:(id)arg1;
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 firstDayOfTheWeek:(long long)arg3 daysOfTheWeek:(id)arg4 daysOfTheMonth:(id)arg5 monthsOfTheYear:(id)arg6 weeksOfTheYear:(id)arg7 daysOfTheYear:(id)arg8 setPositions:(id)arg9 end:(id)arg10;
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3;
@property(nonatomic) NSUInteger icsDisplayOrder; // @dynamic icsDisplayOrder;
- (void)setDueDateComponentsWithAlarmsIfNeeded:(id)arg1;
@property(copy, nonatomic) NSDateComponents *dueDateComponents; // @dynamic dueDateComponents;
@property(copy, nonatomic) NSString *notesAsString;
@property(copy, nonatomic) NSAttributedString *notes;
@property(nonatomic, getter=isCompleted) BOOL completed; // @dynamic completed;
@property(copy, nonatomic) NSString *titleAsString;
@property(copy, nonatomic) NSAttributedString *title;
- (id)_editDocument:(id)arg1 replicaIDSource:(id)arg2 newString:(id)arg3;
@property(readonly, nonatomic) REMListChangeItem *listChangeItem;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (void)_copyAlarmsInto:(id)arg1;
- (void)copyInto:(id)arg1;
- (id)duplicateForRecurrenceUsingReminderID:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) REMAccountCapabilities *accountCapabilities; // @dynamic accountCapabilities;
- (id)initWithReminderChangeItem:(id)arg1 insertIntoParentReminderSubtaskContextChangeItem:(id)arg2;
- (id)initWithReminderChangeItem:(id)arg1 insertIntoListChangeItem:(id)arg2;
- (id)initWithObjectID:(id)arg1 title:(id)arg2 insertIntoParentReminderSubtaskContextChangeItem:(id)arg3;
- (id)initWithObjectID:(id)arg1 title:(id)arg2 insertIntoListChangeItem:(id)arg3;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(BOOL)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4;
- (void)rejectForSiriFoundInApps;
- (id)confirmForSiriFoundInAppsAppendingToList:(id)arg1;
- (id)_cleanupOriginalAlarmsForSnoozing;
- (void)_createSnoozeAlarmWithDateComponents:(id)arg1;
- (double)_timeIntervalToAddSinceStartDate:(id)arg1 withNow:(id)arg2 step:(double)arg3;
- (void)snoozeFromDueDateForFutureIntegralMultipleOfTimeInterval:(double)arg1;
- (void)snoozeForever;
- (void)snoozeToNextThirds;
- (void)snoozeToDate:(id)arg1;
- (void)snoozeFromNowForTimeInterval:(double)arg1;
- (void)removeAllSnoozeAlarms;

@end

