//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDAWDHealthKitAchievement, HDAWDHealthKitActivityCache, HDAWDHealthKitConcurrentCalendarItem, HDAWDHealthKitExperimentalCondition, HDAWDHealthKitNotificationResponseFlags, HDAWDHealthKitWeeklySummaryDetail, NSMutableArray;

@interface HDAWDHealthKitNotificationEvent : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _goalTypes;
    long long _endDate;
    long long _startDate;
    NSUInteger _timestamp;
    HDAWDHealthKitAchievement *_achievement;
    HDAWDHealthKitActivityCache *_activityCache;
    int _alertType;
    HDAWDHealthKitConcurrentCalendarItem *_calendarItem;
    HDAWDHealthKitExperimentalCondition *_experimentalCondition;
    HDAWDHealthKitNotificationResponseFlags *_responseFlags;
    int _testAction;
    NSMutableArray *_views;
    HDAWDHealthKitWeeklySummaryDetail *_weeklySummaryDetail;
    BOOL _dndEnabled;
    BOOL _failedPosting;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int timestamp:1;
        unsigned int alertType:1;
        unsigned int testAction:1;
        unsigned int dndEnabled:1;
        unsigned int failedPosting:1;
    } _has;
}

+ (Class)viewsType;
@property(retain, nonatomic) HDAWDHealthKitNotificationResponseFlags *responseFlags; // @synthesize responseFlags=_responseFlags;
@property(retain, nonatomic) HDAWDHealthKitWeeklySummaryDetail *weeklySummaryDetail; // @synthesize weeklySummaryDetail=_weeklySummaryDetail;
@property(retain, nonatomic) HDAWDHealthKitAchievement *achievement; // @synthesize achievement=_achievement;
@property(retain, nonatomic) HDAWDHealthKitActivityCache *activityCache; // @synthesize activityCache=_activityCache;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(retain, nonatomic) HDAWDHealthKitConcurrentCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property(retain, nonatomic) HDAWDHealthKitExperimentalCondition *experimentalCondition; // @synthesize experimentalCondition=_experimentalCondition;
@property(nonatomic) BOOL failedPosting; // @synthesize failedPosting=_failedPosting;
@property(nonatomic) BOOL dndEnabled; // @synthesize dndEnabled=_dndEnabled;
@property(nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasResponseFlags;
- (void)setGoalTypes:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)goalTypesAtIndex:(NSUInteger)arg1;
- (void)addGoalTypes:(unsigned int)arg1;
- (void)clearGoalTypes;
@property(readonly, nonatomic) unsigned int goalTypes;
@property(readonly, nonatomic) NSUInteger goalTypesCount;
@property(readonly, nonatomic) BOOL hasWeeklySummaryDetail;
@property(readonly, nonatomic) BOOL hasAchievement;
@property(readonly, nonatomic) BOOL hasActivityCache;
- (id)viewsAtIndex:(NSUInteger)arg1;
- (NSUInteger)viewsCount;
- (void)addViews:(id)arg1;
- (void)clearViews;
@property(readonly, nonatomic) BOOL hasCalendarItem;
- (int)StringAsTestAction:(id)arg1;
- (id)testActionAsString:(int)arg1;
@property(nonatomic) BOOL hasTestAction;
@property(nonatomic) int testAction; // @synthesize testAction=_testAction;
@property(readonly, nonatomic) BOOL hasExperimentalCondition;
@property(nonatomic) BOOL hasFailedPosting;
@property(nonatomic) BOOL hasDndEnabled;
@property(nonatomic) BOOL hasEndDate;
@property(nonatomic) BOOL hasStartDate;
- (int)StringAsAlertType:(id)arg1;
- (id)alertTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAlertType;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end

