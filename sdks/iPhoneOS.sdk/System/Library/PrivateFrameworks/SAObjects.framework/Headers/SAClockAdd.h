//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class SAClockObject;

@interface SAClockAdd : SADomainCommand
{
}

+ (id)addWithDictionary:(id)arg1 context:(id)arg2;
+ (id)add;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAClockObject *clockToAdd;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

