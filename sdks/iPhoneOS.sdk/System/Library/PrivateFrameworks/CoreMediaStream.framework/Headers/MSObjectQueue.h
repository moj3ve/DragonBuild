//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSObjectQueue : NSObject
{
    struct sqlite3 _db;
    struct __CFDictionary _statements;
}

- (void)commitObjectsWrappers:(id)arg1;
- (void)commitErrorCountsForObjectWrappers:(id)arg1;
- (void)removeAllObjectWrappersFromQueue;
- (void)removeObjectWrappersFromQueue:(id)arg1;
- (id)allObjectWrappersOrderedByDescendingErrorCountMaxCount:(long long)arg1;
- (id)smallestObjectWrappersTargetTotalSize:(long long)arg1 maxCount:(long long)arg2;
- (id)objectWrappersWithZeroSizeMaxCount:(long long)arg1;
- (id)allObjectWrappersMaxCount:(long long)arg1;
- (id)_objectWrapperFromQueueQuery:(struct sqlite3_stmt )arg1 outSize:(long long )arg2;
- (void)appendObjectWrappers:(id)arg1;
@property(readonly) long long count;
- (struct sqlite3_stmt )_statementLabel:(id)arg1 query:(const char )arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

