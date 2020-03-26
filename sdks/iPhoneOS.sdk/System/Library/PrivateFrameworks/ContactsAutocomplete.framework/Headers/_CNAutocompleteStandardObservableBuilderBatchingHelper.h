//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteObservableBuilderBatchingHelper-Protocol.h>

@class _CNAutocompleteObservableBuilderBatchingHelper;

@interface _CNAutocompleteStandardObservableBuilderBatchingHelper : NSObject <CNAutocompleteObservableBuilderBatchingHelper>
{
    _CNAutocompleteObservableBuilderBatchingHelper *_helper;
}

@property(retain, nonatomic) _CNAutocompleteObservableBuilderBatchingHelper *helper; // @synthesize helper=_helper;
// - (void).cxx_destruct;
- (BOOL)batchAtIndexIncludesServer:(NSUInteger)arg1;
- (void)addCalendarServerObservable:(id)arg1;
- (void)addCachedCalendarServerObservable:(id)arg1;
- (void)addDirectoryServerObservable:(id)arg1;
- (void)addCachedDirectoryServerObservable:(id)arg1;
- (void)addSupplementalObservable:(id)arg1;
- (void)addDuetObservable:(id)arg1;
- (void)addLocalExtensionObservable:(id)arg1;
- (void)addSuggestionsObservable:(id)arg1;
- (void)addCoreRecentsObservable:(id)arg1;
- (void)addContactsObservable:(id)arg1;
- (id)batchedObservables;
- (id)init;

@end

