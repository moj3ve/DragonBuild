//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray;

@interface SACFMParseMessageForEmojiResponse : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)parseMessageForEmojiResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)parseMessageForEmojiResponse;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *parseChunks;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

