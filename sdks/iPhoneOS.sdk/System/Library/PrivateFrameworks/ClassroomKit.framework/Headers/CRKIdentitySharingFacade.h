//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIdentitySharingOperationDelegate-Protocol.h>
#import <ClassroomKit/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableDictionary;
@protocol CRKIdentitySharingDelegate;

@interface CRKIdentitySharingFacade : NSObject <CRKIdentitySharingOperationDelegate, IDSServiceDelegate>
{
    NSObject<CRKIdentitySharingDelegate> *_delegate;
    NSMutableDictionary *_operationsByIDSIdentifier;
    IDSService *_service;
}

+ (id)sharedFacade;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableDictionary *operationsByIDSIdentifier; // @synthesize operationsByIDSIdentifier=_operationsByIDSIdentifier;
@property(nonatomic) __weak NSObject<CRKIdentitySharingDelegate> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_signalDelegateWithCertificateRequestFromSender:(id)arg1 device:(id)arg2;
- (void)_signalDelegateWithCertificatesMessage:(id)arg1 sender:(id)arg2 device:(id)arg3;
- (void)_signalDelegateWithAdvertisingIdentifierAndCertificatesMessage:(id)arg1 sender:(id)arg2 device:(id)arg3;
- (BOOL)_getActiveCertificate:(id )arg1 stagedCertificate:(id )arg2 fromMessage:(id)arg3;
- (id)_operationToSendMessage:(id)arg1 toRecipients:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)identitySharingOperation:(id)arg1 sentMessageWithIdentifier:(id)arg2;
- (id)operationToRequestCertificateFromClassMember:(id)arg1 fromDevice:(id)arg2;
- (id)operationToSendActiveCertificate:(id)arg1 stagedCertificate:(id)arg2 toRecipients:(id)arg3 fromDevice:(id)arg4;
- (id)operationToSendAdvertisingIdentifier:(id)arg1 activeCertificate:(id)arg2 stagedCertificate:(id)arg3 toRecipients:(id)arg4 fromDevice:(id)arg5;
- (id)initWithServiceIdentifier:(id)arg1;

@end

