//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageProtection/P256PublicKeyProtocol-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SecKeyP256Public : NSObject <P256PublicKeyProtocol>
{
    struct __SecKey _publicKeyRef;
    NSData *_serializedKey;
}

@property(retain) NSData *serializedKey; // @synthesize serializedKey=_serializedKey;
@property struct __SecKey publicKeyRef; // @synthesize publicKeyRef=_publicKeyRef;
// - (void).cxx_destruct;
- (void)dealloc;
- (BOOL)verifySignature:(id)arg1 data:(id)arg2;
- (id)initWithData:(id)arg1 error:(id )arg2;
- (id)dataRepresentation;
- (id)initWithSecKeyRef:(struct __SecKey )arg1;

@end

