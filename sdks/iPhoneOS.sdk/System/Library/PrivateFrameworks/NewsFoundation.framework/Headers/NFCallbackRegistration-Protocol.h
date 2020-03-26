//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NFCallbackScope, NFKey, NSString, Protocol;

@protocol NFCallbackRegistration <NSObject>
- (void)whenUnsafeResolvingWithKey:(NSString *)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
- (void)whenResolvingKey:(NFKey *)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
- (void)whenResolvingProtocol:(Protocol *)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
- (void)whenResolvingClass:(Class)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
@end

