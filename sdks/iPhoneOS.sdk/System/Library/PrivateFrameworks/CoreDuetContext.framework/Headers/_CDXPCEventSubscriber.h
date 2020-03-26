//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface _CDXPCEventSubscriber : NSObject
{
    unsigned int _uid;
    NSUInteger _token;
    NSObject<OS_xpc_object> *_descriptor;
    NSString *_streamName;
}

@property(readonly, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(readonly, nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) NSUInteger token; // @synthesize token=_token;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *clientIdentifier;
- (id)initWithToken:(NSUInteger)arg1 descriptor:(id)arg2 userID:(unsigned int)arg3 streamName:(id)arg4;

@end

