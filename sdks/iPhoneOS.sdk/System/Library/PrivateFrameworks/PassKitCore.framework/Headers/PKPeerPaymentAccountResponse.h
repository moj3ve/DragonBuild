//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentAccount;

@interface PKPeerPaymentAccountResponse : PKPeerPaymentWebServiceResponse
{
    PKPeerPaymentAccount *_account;
}

@property(readonly, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

