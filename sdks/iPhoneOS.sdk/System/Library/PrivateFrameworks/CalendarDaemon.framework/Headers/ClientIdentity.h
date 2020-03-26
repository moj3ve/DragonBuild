//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ClientIdentity : NSObject
{
    int _pid;
    NSString *_bundleIdentifier;
    NSString *_clientName;
    NSString *_codeSigningIdentity;
    CDStruct_4c969caf _auditToken;
}

@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, copy, nonatomic) NSString *codeSigningIdentity; // @synthesize codeSigningIdentity=_codeSigningIdentity;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;

@end

