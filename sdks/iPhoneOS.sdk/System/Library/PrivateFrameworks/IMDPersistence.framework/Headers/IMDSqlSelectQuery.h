//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDPersistence/IMDSqlQuery.h>

@interface IMDSqlSelectQuery : IMDSqlQuery
{
}

+ (id)selectQueryForTable:(id)arg1 withColumns:(id)arg2 where:(id)arg3;
+ (id)selectQueryForTable:(id)arg1 withColumns:(id)arg2;
+ (id)selectQueryForTable:(id)arg1;
- (id)createQueryString;
- (id)initWithTableName:(id)arg1;

@end

