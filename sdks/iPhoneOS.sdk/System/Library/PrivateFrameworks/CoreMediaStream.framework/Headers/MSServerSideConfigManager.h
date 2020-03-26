//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MSServerSideConfigProtocolDelegate-Protocol.h>

@class MSMediaStreamDaemon, MSServerSideConfigProtocol, NSDictionary, NSString;

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate>
{
    NSString *_personID;
    NSDictionary *_config;
    MSMediaStreamDaemon *_daemon;
    NSString *_configPath;
    MSServerSideConfigProtocol *_protocol;
    int _state;
}

+ (id)objectForKey:(id)arg1 forPersonID:(id)arg2 defaultValue:(id)arg3;
+ (long long)longLongValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3;
+ (long long)longValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3;
+ (double)doubleValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(double)arg3;
+ (int)intValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(int)arg3;
+ (void)forgetPersonID:(id)arg1;
+ (void)abortAllActivities;
+ (id)existingConfigManagerForPersonID:(id)arg1;
+ (id)configManagerForPersonID:(id)arg1;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
// - (void).cxx_destruct;
- (void)serverSideConfigProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)serverSideConfigProtocol:(id)arg1 didFinishWithConfiguration:(id)arg2 error:(id)arg3;
- (void)abort;
- (void)refreshConfiguration;
@property(retain, nonatomic) NSDictionary *config;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

@end

