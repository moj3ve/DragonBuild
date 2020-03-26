//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CNContactStore;

@interface CNAutocompleteLocalSearch : NSObject <CNAutocompleteSearch>
{
    CNContactStore *_contactStore;
    CNContactStore *_contactFetcherStore;
}

@property(retain, nonatomic) CNContactStore *contactFetcherStore; // @synthesize contactFetcherStore=_contactFetcherStore;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
// - (void).cxx_destruct;
- (id)groupsForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3;
- (id)peopleForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3;
- (id)executeRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithContactStore:(id)arg1 contactFetcherStore:(id)arg2;
- (id)init;

@end

