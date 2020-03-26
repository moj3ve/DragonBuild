//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <StoreKitUI/ISDialogOperationDelegate-Protocol.h>

@class SKUIRedeemViewControllerLegacy;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate>
{
    id /* CDUnknownBlockType */ _resultBlock;
    SKUIRedeemViewControllerLegacy *_redeemViewController;
}

@property(nonatomic) __weak SKUIRedeemViewControllerLegacy *redeemViewController; // @synthesize redeemViewController=_redeemViewController;
@property(copy) id /* CDUnknownBlockType */ resultBlock; // @synthesize resultBlock=_resultBlock;
// - (void).cxx_destruct;
- (void)_logResultsForSuccess:(BOOL)arg1 shouldVerify:(BOOL)arg2 failureReason:(id)arg3 error:(id)arg4;
- (id)_subOperationWithBagKey:(id)arg1;
- (id)_authenticationContext;
- (BOOL)_performAuthentication;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)main;

@end

