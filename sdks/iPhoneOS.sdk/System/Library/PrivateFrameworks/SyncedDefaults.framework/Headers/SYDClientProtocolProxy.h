//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SyncedDefaults/SYDClientProtocol-Protocol.h>

@protocol SYDClientProtocol;

__attribute__((visibility("hidden")))
@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol>
{
    id <SYDClientProtocol> _target;
}

@property(nonatomic) __weak id <SYDClientProtocol> target; // @synthesize target=_target;
// - (void).cxx_destruct;
- (void)storeDidChangeWithIdentifier:(id)arg1 type:(long long)arg2 changeDictionary:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (id)initWithTarget:(id)arg1;

@end

