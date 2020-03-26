//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class KTLoggableData, NSArray, NSData, NSDictionary, NSError, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_xpc_object;

@protocol transparencyd_protocol
- (void)logMetric:(NSNumber *)arg1 withName:(NSString *)arg2;
- (void)logResultForEvent:(NSString *)arg1 hardFailure:(BOOL)arg2 result:(NSError *)arg3 withAttributes:(NSDictionary *)arg4;
- (void)logResultForEvent:(NSString *)arg1 hardFailure:(BOOL)arg2 result:(NSError *)arg3;
- (void)noteEventNamed:(NSString *)arg1;
- (void)logSoftFailureForEventNamed:(NSString *)arg1 withAttributes:(NSDictionary *)arg2;
- (void)logHardFailureForEventNamed:(NSString *)arg1 withAttributes:(NSDictionary *)arg2;
- (void)logSuccessForEventNamed:(NSString *)arg1;
- (void)copyApplicationTranscript:(NSString *)arg1 block:(void (^)(NSDictionary *, NSError *))arg2;
- (void)copyDaemonState:(void (^)(NSDictionary *, NSError *))arg1;
- (void)copyDataStoreStatistics:(void (^)(NSDictionary *, NSError *))arg1;
- (void)clearPublicKeyStoreState:(NSString *)arg1 block:(void (^)(NSError *))arg2;
- (void)clearLogClientConfiguration:(void (^)(NSError *))arg1;
- (void)clearApplicationState:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)runDutyCycle:(void (^)(NSError *))arg1;
- (void)runDutyCycleForActivity:(NSObject<OS_xpc_object> *)arg1;
- (void)copyKeyStoreStateFromDisk:(void (^)(NSDictionary *, NSError *))arg1;
- (void)copyKeyStoreState:(void (^)(NSDictionary *, NSError *))arg1;
- (void)copyLogClientConfiguration:(void (^)(NSDictionary *, NSError *))arg1;
- (void)copyApplicationState:(NSString *)arg1 block:(void (^)(NSDictionary *, NSError *))arg2;
- (void)forceApplicationConfig:(NSString *)arg1 block:(void (^)(NSError *))arg2;
- (void)forceApplicationKeysFetch:(NSString *)arg1 block:(void (^)(NSData *, NSError *))arg2;
- (void)forceApplicationKeysDownload:(NSString *)arg1 block:(void (^)(NSData *, NSUInteger, NSError *))arg2;
- (void)forceConfigUpdate:(void (^)(NSError *))arg1;
- (void)forceValidateUUID:(NSUUID *)arg1 uri:(NSString *)arg2 block:(void (^)(NSUInteger, NSError *))arg3;
- (void)convertToSelfRequest:(NSUUID *)arg1 serverDatas:(NSArray *)arg2 syncedDatas:(NSArray *)arg3 queryRequest:(NSData *)arg4 queryResponse:(NSData *)arg5 updateCompletionBlock:(void (^)(NSUUID *, NSError *))arg6;
- (void)validateEnrollmentUriResult:(NSString *)arg1 uuid:(NSUUID *)arg2 completionBlock:(void (^)(NSString *, NSUInteger, KTTransparentData *, NSError *))arg3;
- (void)validateEnrollmentUri:(NSString *)arg1 application:(NSString *)arg2 accountID:(NSData *)arg3 loggableData:(KTLoggableData *)arg4 queryRequest:(NSData *)arg5 queryResponse:(NSData *)arg6 promiseCompletionBlock:(void (^)(NSString *, NSUUID *, NSError *))arg7;
- (void)validateSelfUriResult:(NSString *)arg1 uuid:(NSUUID *)arg2 syncedDatas:(NSArray *)arg3 completionBlock:(void (^)(NSString *, NSUInteger, KTTransparentData *, NSError *))arg4;
- (void)validatePeerUriResult:(NSString *)arg1 uuid:(NSUUID *)arg2 completionBlock:(void (^)(NSString *, NSUInteger, KTTransparentData *, NSError *))arg3;
- (void)validatePeerUri:(NSString *)arg1 application:(NSString *)arg2 accountID:(NSData *)arg3 loggableDatas:(NSArray *)arg4 queryRequest:(NSData *)arg5 queryResponse:(NSData *)arg6 promiseCompletionBlock:(void (^)(NSString *, NSUUID *, NSError *))arg7;
@end

