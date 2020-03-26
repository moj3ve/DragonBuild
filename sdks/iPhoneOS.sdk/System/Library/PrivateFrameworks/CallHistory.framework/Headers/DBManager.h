//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger
{
    NSPersistentStoreCoordinator *fPersistentStoreCoordinator;
}

+ (BOOL)replacePersistentStore:(id)arg1 withURL:(id)arg2;
+ (BOOL)makeDatabaseAtURLClassCDataProtected:(id)arg1;
+ (id)mangedObjectWithURI:(id)arg1 inContext:(id)arg2;
+ (id)getStoreURLforContext:(id)arg1;
+ (id)getPropertyValueForKey:(id)arg1 forContext:(id)arg2;
+ (void)setPropertyValue:(id)arg1 forKey:(id)arg2 forContext:(id)arg3;
+ (id)entityDescriptionHavingName:(id)arg1 forContext:(id)arg2;
+ (BOOL)moveDBAtLocation:(id)arg1 toLocation:(id)arg2 withModelAtLocation:(id)arg3;
+ (BOOL)destroyDBAtLocation:(id)arg1 withModelAtLocation:(id)arg2;
+ (id)migrateDataStoreAtLocation:(id)arg1 withGetDestinationModel:(id /* CDUnknownBlockType */)arg2 isEncrypted:(BOOL)arg3;
+ (long long)mapToDBMErrorCode:(id)arg1;
+ (long long)versionForDBAtLocation:(id)arg1;
+ (id)modelForDBAtLocation:(id)arg1;
+ (long long)versionForManagedObjectModel:(id)arg1;
+ (id)instanceWithModelURL:(id)arg1;
+ (long long)isDataStoreAtURLInitialized:(id)arg1 withModelAtURL:(id)arg2;
+ (id)getPersistentCoordinator:(id)arg1;
+ (id)persistentStoreOptions:(BOOL)arg1;
@property(retain, nonatomic) NSPersistentStoreCoordinator *fPersistentStoreCoordinator; // @synthesize fPersistentStoreCoordinator;
// - (void).cxx_destruct;
- (id)createManagedObjectContext;
- (void)removeDataStoreAtLocation:(id)arg1;
- (BOOL)addDataStoreAtLocation:(id)arg1 isEncrypted:(BOOL)arg2;
- (id)init;

@end

