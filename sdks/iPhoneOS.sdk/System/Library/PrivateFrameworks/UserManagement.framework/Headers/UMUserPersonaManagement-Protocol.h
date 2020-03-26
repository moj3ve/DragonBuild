//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSString, UMUserPersona;
@protocol UMUserPersonaUpdateObserver;

@protocol UMUserPersonaManagement
@property(readonly, copy, nonatomic) UMUserPersona *currentPersona;
- (void)registerPersonaListUpdateObserver:(id <UMUserPersonaUpdateObserver>)arg1 withMachService:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)registerPersonaListUpdateObserver:(id <UMUserPersonaUpdateObserver>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (BOOL)haveValidPersonaContextForPersonaUniqueString:(NSString *)arg1;
- (BOOL)haveValidPersonaContextForIDString:(NSString *)arg1;
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchBundleIdentifierForType:(int)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(NSString *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchBundleIdentifierForPersonaWithIDString:(NSString *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)setMultiPersonaBundleIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setBundlesIdentifiers:(NSArray *)arg1 forUniquePersonaType:(int)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setBundlesIdentifiers:(NSArray *)arg1 forPersonaWithPersonaUniqueString:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setBundlesIdentifiers:(NSArray *)arg1 forUniquePersonaWithIDString:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)fetchAsidMapOfAllUsersWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchPersonaWithType:(int)arg1 CompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchPersonaWithPersonaUniqueString:(NSString *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchPersonaWithIDString:(NSString *)arg1 CompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchAllPersonasForAllUsersWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchAllPersonasWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)disableUserPersonaWithProfileInfo:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteUserPersonaWithType:(int)arg1 passcodeData:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteUserPersonaWithProfileInfo:(NSDictionary *)arg1 passcodeData:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteUserPersonaWithPersonaUniqueString:(NSString *)arg1 passcodeData:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteUserPersonaWithIDString:(NSString *)arg1 passcodeData:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)createUserPersona:(NSDictionary *)arg1 passcodeData:(NSData *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
@end

