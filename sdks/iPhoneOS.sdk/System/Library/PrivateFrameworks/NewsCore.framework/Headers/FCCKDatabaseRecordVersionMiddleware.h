//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseOperationMiddleware-Protocol.h>
#import <NewsCore/FCCKDatabaseRecordMiddleware-Protocol.h>

@interface FCCKDatabaseRecordVersionMiddleware : NSObject <FCCKDatabaseRecordMiddleware, FCCKDatabaseOperationMiddleware>
{
}

- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id )arg4;
- (id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id )arg4;
- (id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id )arg3;
- (id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id )arg3;
- (id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id )arg3;
- (id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id )arg3;
- (id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id )arg3;
- (id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id )arg3;
- (id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id )arg3;
- (id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id )arg3;

@end

