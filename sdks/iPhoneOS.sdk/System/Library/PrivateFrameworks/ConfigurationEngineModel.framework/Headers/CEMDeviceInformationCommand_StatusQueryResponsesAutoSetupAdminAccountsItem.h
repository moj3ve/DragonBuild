//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem : CEMPayloadBase
{
    NSString *_statusGUID;
    NSString *_statusShortName;
}

+ (id)buildRequiredOnly;
+ (id)buildWithGUID:(id)arg1 withShortName:(id)arg2;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSString *statusShortName; // @synthesize statusShortName=_statusShortName;
@property(copy, nonatomic) NSString *statusGUID; // @synthesize statusGUID=_statusGUID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

