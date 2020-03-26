//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NCNotificationRequest, NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NCNotificationSummaryBuilder : NSObject
{
    NCNotificationRequest *_leadingNotificationRequest;
    NSMutableArray *_notificationRequests;
    NSMutableOrderedSet *_formatStrings;
    NSMutableDictionary *_formatStringsCounts;
    NSMutableOrderedSet *_arguments;
    NSMutableDictionary *_argumentsCounts;
    NSUInteger _defaultFormatsCount;
    NSUInteger _emptyArgumentsCount;
    NSString *_summaryText;
}

@property(readonly, nonatomic) NSArray *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property(readonly, copy, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
// - (void).cxx_destruct;
- (void)_insertString:(id)arg1 intoSequence:(id)arg2 withCounters:(id)arg3;
- (id)_filteredArgumentsArrayWithArguments:(id)arg1;
- (id)_formatListWithArguments:(id)arg1 truncated:(BOOL)arg2 truncatedArgumentsCount:(NSUInteger )arg3;
- (id)_formatListWithArguments:(id)arg1;
- (id)_localizedSummaryWithFormat:(id)arg1 notificationsCount:(NSUInteger)arg2 arguments:(id)arg3;
- (id)_localizedSummaryWithFormats:(id)arg1 andCounts:(id)arg2;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(NSUInteger)arg1 arguments:(id)arg2;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(NSUInteger)arg1;
- (NSUInteger)_summaryNotificationsCount;
- (id)_buildSummaryText;
- (void)_updateSummaryText;
- (void)_addNotificationRequest:(id)arg1;
- (id)description;
- (void)updateWithNotificationRequests:(id)arg1;

@end

