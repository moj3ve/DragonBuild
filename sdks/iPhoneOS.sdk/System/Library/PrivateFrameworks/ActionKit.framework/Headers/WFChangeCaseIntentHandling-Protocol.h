//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WFChangeCaseIntent;

@protocol WFChangeCaseIntentHandling <NSObject>
- (void)resolveTypeForChangeCase:(WFChangeCaseIntent *)arg1 withCompletion:(void (^)(WFChangeCaseTypeResolutionResult *))arg2;
- (void)resolveTextForChangeCase:(WFChangeCaseIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handleChangeCase:(WFChangeCaseIntent *)arg1 completion:(void (^)(WFChangeCaseIntentResponse *))arg2;

@optional
- (void)confirmChangeCase:(WFChangeCaseIntent *)arg1 completion:(void (^)(WFChangeCaseIntentResponse *))arg2;
@end

