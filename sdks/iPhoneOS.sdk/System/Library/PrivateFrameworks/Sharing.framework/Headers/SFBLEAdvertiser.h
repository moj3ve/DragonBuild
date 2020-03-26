//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CURetrier, NSArray, NSData, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SFBLEAdvertiser : NSObject
{
    BOOL _activateCalled;
    long long _advertiseState;
    BOOL _invalidateCalled;
    NSData *_payloadDataCurrent;
    NSData *_payloadDataPrevious;
    NSDictionary *_payloadFields;
    NSString *_payloadIdentifier;
    long long _payloadType;
    CURetrier *_startRetrier;
    struct LogCategory _ucat;
    long long _advertiseRate;
    id /* CDUnknownBlockType */ _advertiseStateChangedHandler;
    id /* CDUnknownBlockType */ _bluetoothStateChangedHandler;
    id /* CDUnknownBlockType */ _connectionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSArray *_lePipeDevices;
}

@property(copy, nonatomic) NSArray *lePipeDevices; // @synthesize lePipeDevices=_lePipeDevices;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ advertiseStateChangedHandler; // @synthesize advertiseStateChangedHandler=_advertiseStateChangedHandler;
@property(nonatomic) long long advertiseRate; // @synthesize advertiseRate=_advertiseRate;
// - (void).cxx_destruct;
- (id)_preparePayloadNearbyInfo:(int )arg1;
- (id)_preparePayloadNearbyAction:(int )arg1;
- (int)_preparePayload:(BOOL)arg1;
- (void)_restartIfNeeded:(BOOL)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setPayloadFields:(id)arg1;
- (void)setPayloadData:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

@end

