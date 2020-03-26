//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SASVSpeechMetadata;

@interface SASVPolicyActionNode : AceObject <SAAceSerializable>
{
}

+ (id)policyActionNodeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)policyActionNode;
@property(copy, nonatomic) NSString *type;
@property(retain, nonatomic) SASVSpeechMetadata *speechMetadata;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *confirmationType;
@property(copy, nonatomic) NSArray *children;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

