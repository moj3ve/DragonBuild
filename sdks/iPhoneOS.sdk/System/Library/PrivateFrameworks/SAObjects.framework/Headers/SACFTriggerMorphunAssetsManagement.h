//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SACFTriggerMorphunAssetsManagement : SABaseClientBoundCommand
{
}

+ (id)triggerMorphunAssetsManagementWithDictionary:(id)arg1 context:(id)arg2;
+ (id)triggerMorphunAssetsManagement;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *language;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

