//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionaryANYrestrictionname : CEMPayloadBase
{
    NSNumber *_statusValue;
}

+ (id)buildRequiredOnlyWithValue:(id)arg1;
+ (id)buildWithValue:(id)arg1;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSNumber *statusValue; // @synthesize statusValue=_statusValue;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

