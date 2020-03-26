//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatus/STTelephonyStatusDomainData.h>

#import <SystemStatus/STMutableStatusDomainData-Protocol.h>
#import <SystemStatus/STMutableStatusDomainDataDifferencing-Protocol.h>

@class STTelephonyStatusDomainSIMInfo;

@interface STMutableTelephonyStatusDomainData : STTelephonyStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>
{
}

- (BOOL)applyDiff:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)updateSIMTwoInfoWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)updateSIMOneInfoWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic, getter=isRadioModuleDead) BOOL radioModuleDead; // @dynamic radioModuleDead;
@property(nonatomic, getter=isDualSIMEnabled) BOOL dualSIMEnabled; // @dynamic dualSIMEnabled;
@property(nonatomic, getter=isCellularRadioCapabilityEnabled) BOOL cellularRadioCapabilityEnabled; // @dynamic cellularRadioCapabilityEnabled;
@property(copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMTwoInfo; // @dynamic SIMTwoInfo;
@property(copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMOneInfo; // @dynamic SIMOneInfo;

@end

