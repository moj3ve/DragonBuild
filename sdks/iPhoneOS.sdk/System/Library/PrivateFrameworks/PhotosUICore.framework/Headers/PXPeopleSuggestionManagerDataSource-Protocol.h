//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, PXSuggestionToken;
@protocol PXPerson;

@protocol PXPeopleSuggestionManagerDataSource <NSObject>
- (id <PXPerson>)commitSuggestionsForPerson:(id <PXPerson>)arg1 withConfirmedSuggestions:(NSArray *)arg2 andRejectedSuggestions:(NSArray *)arg3;
- (BOOL)cancelSuggestionForPerson:(id <PXPerson>)arg1 withToken:(PXSuggestionToken *)arg2 error:(id )arg3;
- (PXSuggestionToken *)suggestionsForPerson:(id <PXPerson>)arg1 withConfirmedSuggestions:(NSArray *)arg2 andRejectedSuggestions:(NSArray *)arg3 completion:(void (^)(NSArray *))arg4;

@optional
@property(nonatomic) NSUInteger initialPageLimit;
- (void)stopListeningForLibraryChanges;
- (void)startListeningForLibraryChanges;
@end

