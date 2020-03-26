//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFCollectingDataConsumer-Protocol.h>

@class NSArray;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer>
{
    int _SecCMSError;
    struct SecCmsMessageStr _message;
    struct SecCmsDigestContextStr _digest;
    NSArray *_signers;
    struct SecCmsSignedDataStr _signedData;
    struct SecCmsEnvelopedDataStr _envelopedData;
    BOOL _isEncrypted;
}

@property(readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(readonly, nonatomic) int lastSecCMSError; // @synthesize lastSecCMSError=_SecCMSError;
// - (void).cxx_destruct;
- (BOOL)containsSignedContent;
- (id)signedData;
- (BOOL)isContentSigned;
- (BOOL)isContentEncrypted;
- (id)verifyAgainstSenders:(id)arg1 signingError:(id )arg2;
- (id)data;
- (void)done;
- (long long)appendData:(id)arg1;
- (void)dealloc;
- (id)initWithPartData:(id)arg1 error:(id )arg2;

@end

