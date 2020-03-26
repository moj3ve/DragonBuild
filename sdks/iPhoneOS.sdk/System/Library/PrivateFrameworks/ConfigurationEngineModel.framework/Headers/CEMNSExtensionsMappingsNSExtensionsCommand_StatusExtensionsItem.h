//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase
{
    NSString *_statusIdentifier;
    NSString *_statusExtensionPoint;
    NSString *_statusDisplayName;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSString *statusDisplayName; // @synthesize statusDisplayName=_statusDisplayName;
@property(copy, nonatomic) NSString *statusExtensionPoint; // @synthesize statusExtensionPoint=_statusExtensionPoint;
@property(copy, nonatomic) NSString *statusIdentifier; // @synthesize statusIdentifier=_statusIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

