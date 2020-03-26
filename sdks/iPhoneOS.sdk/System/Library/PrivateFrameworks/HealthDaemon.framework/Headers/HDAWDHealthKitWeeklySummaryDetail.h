//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HDAWDHealthKitWeeklySummaryDetail : PBCodable <NSCopying>
{
    long long _mostRecentGoal;
    long long _numTimesGoalAchieved;
    long long _selectedGoal;
    struct {
        unsigned int mostRecentGoal:1;
        unsigned int numTimesGoalAchieved:1;
        unsigned int selectedGoal:1;
    } _has;
}

@property(nonatomic) long long selectedGoal; // @synthesize selectedGoal=_selectedGoal;
@property(nonatomic) long long numTimesGoalAchieved; // @synthesize numTimesGoalAchieved=_numTimesGoalAchieved;
@property(nonatomic) long long mostRecentGoal; // @synthesize mostRecentGoal=_mostRecentGoal;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSelectedGoal;
@property(nonatomic) BOOL hasNumTimesGoalAchieved;
@property(nonatomic) BOOL hasMostRecentGoal;

@end

