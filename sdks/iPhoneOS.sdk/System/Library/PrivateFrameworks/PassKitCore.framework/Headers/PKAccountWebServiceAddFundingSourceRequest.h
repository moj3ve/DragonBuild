//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKAccountPaymentFundingSource, PKAccountWebServiceCertificatesResponse;

@interface PKAccountWebServiceAddFundingSourceRequest : PKAccountWebServiceRequest
{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    PKAccountPaymentFundingSource *_fundingSource;
    NSString *_fundingSourceTermsIdentifier;
    PKAccountWebServiceCertificatesResponse *_certificatesResponse;
}

@property(retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse; // @synthesize certificatesResponse=_certificatesResponse;
@property(retain, nonatomic) NSString *fundingSourceTermsIdentifier; // @synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier;
@property(retain, nonatomic) PKAccountPaymentFundingSource *fundingSource; // @synthesize fundingSource=_fundingSource;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
// - (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

