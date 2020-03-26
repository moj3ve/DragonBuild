//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <StoreKitUI/ISDialogOperationDelegate-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdValidateOperation : ISOperation <ISDialogOperationDelegate>
{
    id /* CDUnknownBlockType */ _resultBlock;
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(copy) id /* CDUnknownBlockType */ resultBlock; // @synthesize resultBlock=_resultBlock;
// - (void).cxx_destruct;
- (void)_logResultsForSuccess:(BOOL)arg1 failureReason:(id)arg2 failureMessage:(id)arg3 error:(id)arg4;
- (id)_subOperation;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)_handleFailure:(id)arg1 serverDialogDictionary:(id)arg2;
- (void)main;
- (id)initWithDictionary:(id)arg1;

@end

