//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingBaseProtocol-Protocol.h>

@class HMSettingValue, NSNumber, NSString;

@protocol HMDSettingProtocol <HMDSettingBaseProtocol>
@property(readonly, copy) id value;
@property(readonly, copy) NSNumber *properties;
@property(readonly, copy) NSNumber *type;
@property(readonly, getter=isReadOnly) BOOL readOnly;
@property(readonly, copy) NSString *keyPath;
- (BOOL)wouldValueUpdate:(HMSettingValue *)arg1;
- (BOOL)isValidValue:(HMSettingValue *)arg1;
@end

