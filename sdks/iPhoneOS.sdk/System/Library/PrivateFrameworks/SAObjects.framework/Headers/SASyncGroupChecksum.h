//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SASyncAnchor;

@interface SASyncGroupChecksum : AceObject <SAAceSerializable>
{
}

+ (id)groupChecksumWithDictionary:(id)arg1 context:(id)arg2;
+ (id)groupChecksum;
@property(retain, nonatomic) SASyncAnchor *syncAnchor;
@property(copy, nonatomic) NSString *identifierChecksum;
@property(copy, nonatomic) NSString *domainObjectClass;
@property(nonatomic) long long count;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

