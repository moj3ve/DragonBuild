//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SASExtractSpeechDataCompleted : SADomainCommand <SAAceSerializable>
{
}

+ (id)extractSpeechDataCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)extractSpeechDataCompleted;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *speechDataUrl;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

