//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPSearchEntity.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface SPContactSearchEntity : SPSearchEntity
{
    CNContact *_contact;
    NSString *_contactIdentifier;
}

+ (id)contactStore;
+ (BOOL)supportsSecureCoding;
@property(retain) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
// - (void).cxx_destruct;
- (id)contact;
- (id)queryString;
- (void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4;
- (id)tokenText;
- (BOOL)isScopedAppSearch;
- (BOOL)isPeopleSearch;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;

@end

