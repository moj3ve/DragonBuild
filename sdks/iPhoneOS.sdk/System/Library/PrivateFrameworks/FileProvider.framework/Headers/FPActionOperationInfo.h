//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface FPActionOperationInfo : NSObject <NSSecureCoding>
{
    BOOL _attachSandboxExtensionsOnXPCEncoding;
    BOOL __t_clientDrivenReader;
    unsigned int _qos;
    NSString *_operationID;
    NSArray *_roots;
    NSUInteger __t_moveQueueWidth;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL _t_clientDrivenReader; // @synthesize _t_clientDrivenReader=__t_clientDrivenReader;
@property(nonatomic) NSUInteger _t_moveQueueWidth; // @synthesize _t_moveQueueWidth=__t_moveQueueWidth;
@property(nonatomic) unsigned int qos; // @synthesize qos=_qos;
@property(nonatomic) BOOL attachSandboxExtensionsOnXPCEncoding; // @synthesize attachSandboxExtensionsOnXPCEncoding=_attachSandboxExtensionsOnXPCEncoding;
@property(retain, nonatomic) NSArray *roots; // @synthesize roots=_roots;
@property(copy, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperationID:(id)arg1 roots:(id)arg2;

@end

