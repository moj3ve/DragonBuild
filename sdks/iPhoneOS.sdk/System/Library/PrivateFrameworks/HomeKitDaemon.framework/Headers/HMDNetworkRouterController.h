//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHAPAccessory, HMDService;
@protocol OS_dispatch_queue;

@interface HMDNetworkRouterController : NSObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_accessory;
    HMDService *_routerService;
}

+ (id)logCategory;
@property(nonatomic) __weak HMDService *routerService; // @synthesize routerService=_routerService;
@property(nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
// - (void).cxx_destruct;
- (void)_writeTLVWithValueInResponse:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_writeValue:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)_writeRequestForCharacteristicType:(id)arg1 value:(id)arg2;
- (void)_writeClientConfigurationControlRequest:(id)arg1 operationName:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)resetAccessViolationForClientIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getAccessViolationList:(id /* CDUnknownBlockType */)arg1;
- (void)removeClientConfigurationWithClientIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateClientConfiguration:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)readClientConfigurationWithClientIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addClientConfiguration:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getClientStatusWithIdentifiers:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setManagedNetworkEnable:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;

@end

