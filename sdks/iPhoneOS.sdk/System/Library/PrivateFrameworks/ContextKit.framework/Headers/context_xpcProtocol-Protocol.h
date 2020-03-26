//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKContextRequest, CKContextResult, NSArray, NSString;

@protocol context_xpcProtocol
- (void)semaphoreWithReply:(void (^)(CKContextSemaphore *))arg1;
- (void)statusWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)logTransactionSuccessfulForResponseId:(NSString *)arg1 inputLength:(NSUInteger)arg2 completionLength:(NSUInteger)arg3 requestType:(NSUInteger)arg4 logType:(NSUInteger)arg5;
- (void)logEngagementForResponseId:(NSString *)arg1 result:(CKContextResult *)arg2 rank:(NSUInteger)arg3 inputLength:(NSUInteger)arg4 completionLength:(NSUInteger)arg5 requestType:(NSUInteger)arg6 logType:(NSUInteger)arg7;
- (void)logResultsShownForResponseId:(NSString *)arg1 shown:(NSUInteger)arg2 couldHaveShown:(NSUInteger)arg3 serverOverride:(BOOL)arg4 inputLength:(NSUInteger)arg5 requestType:(NSUInteger)arg6 logType:(NSUInteger)arg7;
- (void)shutdownServiceWithReply:(void (^)(void))arg1;
- (void)pingServiceWithReply:(void (^)(void))arg1;
- (void)portraitBlacklistWithReply:(void (^)(NSSet *))arg1;
- (void)ancestorsForTopics:(NSArray *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)capabilitiesForRequestType:(NSUInteger)arg1 withReply:(void (^)(NSSet *, NSString *, NSError *))arg2;
- (void)warmUpForRequestType:(NSUInteger)arg1 withReply:(void (^)(NSError *))arg2;
- (void)findResponseByID:(NSString *)arg1 reply:(void (^)(CKContextResponse *))arg2;
- (void)findResultsForRequest:(CKContextRequest *)arg1 withReply:(void (^)(CKContextResponse *))arg2;
@end

