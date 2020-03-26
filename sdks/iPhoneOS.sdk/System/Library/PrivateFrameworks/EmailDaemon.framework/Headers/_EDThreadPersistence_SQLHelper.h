//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection, _EDThreadPersistence_StatementCache;

@interface _EDThreadPersistence_SQLHelper : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
    _EDThreadPersistence_StatementCache *_cache;
}

@property(readonly, nonatomic) _EDThreadPersistence_StatementCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (BOOL)executeSQL:(id)arg1 errorHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)executeSQL:(id)arg1 indexBindings:(id)arg2 errorHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)executeSelectSQL:(id)arg1 bindings:(id /* CDUnknownBlockType */)arg2 errorHandler:(id /* CDUnknownBlockType */)arg3 rowHandler:(id /* CDUnknownBlockType */)arg4;
- (long long)executeUpsertSQL:(id)arg1 bindings:(id /* CDUnknownBlockType */)arg2 errorHandler:(id /* CDUnknownBlockType */)arg3;
- (int)executeUpdateSQL:(id)arg1 bindings:(id /* CDUnknownBlockType */)arg2 errorHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithCache:(id)arg1;

@end

