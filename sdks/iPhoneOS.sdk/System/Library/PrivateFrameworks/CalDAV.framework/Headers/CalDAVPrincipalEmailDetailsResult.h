//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;

@interface CalDAVPrincipalEmailDetailsResult : NSObject
{
    NSURL *_principalURL;
    NSString *_displayName;
    NSSet *_preferredAddresses;
}

+ (id)resultFromResponseItem:(id)arg1;
@property(retain, nonatomic) NSSet *preferredAddresses; // @synthesize preferredAddresses=_preferredAddresses;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
// - (void).cxx_destruct;
- (id)description;
- (id)addresses;

@end

