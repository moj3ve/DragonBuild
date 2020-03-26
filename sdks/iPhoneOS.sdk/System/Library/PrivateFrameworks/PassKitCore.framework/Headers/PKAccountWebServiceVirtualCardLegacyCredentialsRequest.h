//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceVirtualCardLegacyCredentialsRequest : PKAccountWebServiceRequest
{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_virtualCardIdentifier;
    PKAccountVirtualCardEncryptionFields *_encryptionFields;
}

@property(retain, nonatomic) PKAccountVirtualCardEncryptionFields *encryptionFields; // @synthesize encryptionFields=_encryptionFields;
@property(copy, nonatomic) NSString *virtualCardIdentifier; // @synthesize virtualCardIdentifier=_virtualCardIdentifier;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
// - (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

