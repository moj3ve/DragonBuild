//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURLRequest, NSURLResponse;

@protocol IKNetworkRequestRecord <NSObject>
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) long long initiatorType;
@property(readonly, nonatomic) long long resourceType;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)didFailWithError:(NSError *)arg1;
- (void)didCompleteLoadingWithResponseBody:(NSData *)arg1;
- (void)didCompleteLoadingFromMemoryWithRequest:(NSURLRequest *)arg1 response:(NSURLResponse *)arg2 withResponseBodyBlock:(void (^)(void (^)(NSData *, NSString *, NSError *)))arg3;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBodyBlock:(void (^)(void (^)(NSData *, NSString *, NSError *)))arg2;
- (void)didCompleteLoadingFromCache:(long long)arg1 mimeType:(NSString *)arg2 withResponseBody:(NSData *)arg3;
- (void)didReceiveData:(NSData *)arg1;
- (void)didReceiveResponse:(NSHTTPURLResponse *)arg1 timingData:(NSDictionary *)arg2;
- (void)willSendRequest:(NSURLRequest *)arg1 redirectResponse:(NSHTTPURLResponse *)arg2;
- (void)willSendRequest:(NSURLRequest *)arg1;
@end

