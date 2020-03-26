//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSURL, SKUIClientContext, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUIGiftValidator : NSObject
{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    long long _validationCount;
    SSVLoadURLOperation *_validationOperation;
    NSURL *_validationURL;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
// - (void).cxx_destruct;
- (void)_validateWithBodyDictionary:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 attemptNumber:(long long)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (void)validateGift:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)validateDonation:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic, getter=isValidating) BOOL validating;
- (void)cancelValidation;
- (id)initWithValidationURL:(id)arg1 clientContext:(id)arg2;

@end

