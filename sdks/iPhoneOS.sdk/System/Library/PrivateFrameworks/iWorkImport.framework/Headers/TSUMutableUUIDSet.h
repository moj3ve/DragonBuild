//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUUUIDSet.h>

__attribute__((visibility("hidden")))
@interface TSUMutableUUIDSet : TSUUUIDSet
{
}

- (void)remapWithMap:(const UUIDMap_b66c2694 )arg1;
- (void)removeUuidsFromVector:(const vector_4dc5f307 )arg1;
- (id)removeUuidsFromSetReturningRemoved:(id)arg1;
- (BOOL)removeUuidsFromSet:(id)arg1;
- (void)addUuidsFromVector:(const vector_4dc5f307 )arg1;
- (id)addUuidsFromSetReturningAdded:(id)arg1;
- (void)addUuidsFromSet:(id)arg1;
- (void)removeUUIDs:(const UUIDSet_bcc2db41 )arg1;
- (void)addUUIDs:(const UUIDSet_bcc2db41 )arg1;
- (BOOL)removeUUID:(const UUIDData_5fbc143e )arg1;
- (BOOL)addUUID:(const UUIDData_5fbc143e )arg1;
- (void)removeAllUuids;

@end

