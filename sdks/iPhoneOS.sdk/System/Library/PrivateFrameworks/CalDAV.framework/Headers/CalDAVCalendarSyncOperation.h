//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CalDAVOperation.h>

@class NSError, NSString;
@protocol CalDAVCalendar;

@interface CalDAVCalendarSyncOperation : CalDAVOperation
{
    NSError *_savedError;
    NSString *_nextCtag;
    NSString *_nextSyncToken;
    id <CalDAVCalendar> _calendar;
    NSError *_reportJunkError;
    NSUInteger _currentStage;
    BOOL _getScheduleTags;
    BOOL _getScheduleChanges;
}

@property(nonatomic) BOOL getScheduleChanges; // @synthesize getScheduleChanges=_getScheduleChanges;
@property(nonatomic) BOOL getScheduleTags; // @synthesize getScheduleTags=_getScheduleTags;
// - (void).cxx_destruct;
- (void)recurrenceSplitAction:(id)arg1 failedWithError:(id)arg2;
- (void)recurrenceSplitAction:(id)arg1 completedWithUpdatedETag:(id)arg2 updatedScheduleTag:(id)arg3 createdURL:(id)arg4 createdETag:(id)arg5 createdScheduleTag:(id)arg6;
- (void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6;
- (void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (BOOL)syncDeleteTask:(id)arg1 error:(id)arg2;
- (BOOL)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (BOOL)setLocalScheduleTag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;
- (BOOL)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2;
- (void)_syncEventsForMerge;
- (void)_processAddedOrModified:(id)arg1 removed:(id)arg2;
- (void)_syncCalendar;
- (void)_splitRecurrences;
- (void)_reportJunk;
- (void)_performNextStage;
- (void)_advanceStage;
- (void)syncCalendar;
- (id)_distantFutureEndDate;
- (void)_finishWithError:(id)arg1;
- (id)initWithPrincipal:(id)arg1 calendar:(id)arg2 nextCtag:(id)arg3 nextSyncToken:(id)arg4;

@end

