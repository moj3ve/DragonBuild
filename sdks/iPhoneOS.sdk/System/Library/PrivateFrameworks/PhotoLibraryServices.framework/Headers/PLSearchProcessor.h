//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PSIDatabase;

@interface PLSearchProcessor : NSObject
{
    PSIDatabase *_searchIndex;
}

+ (id)searchProcessorLog;
+ (id)_scoreByCategoryMask;
@property(readonly, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
// - (void).cxx_destruct;
- (BOOL)_shouldOmitSectionForCategoryMask:(NSUInteger)arg1;
- (BOOL)_categoryMaskIsCombinable:(NSUInteger)arg1;
- (void)_extractSearchResultsFromGroupResults:(id)arg1 withQuery:(id)arg2 resultsHandler:(id /* CDUnknownBlockType */)arg3;
- (id)_completionFilenameResultsForFilenameResults:(id)arg1;
- (id)_combinedFilenameSearchResultsFromSearchResults:(id)arg1 inQuery:(id)arg2;
- (id)_searchResultsByCategoryMasksForSearchResults:(id)arg1;
- (id)_sortDescriptorsForCategoryMask:(NSUInteger)arg1;
- (id)_numberOfAssetsSortDescriptors;
- (id)_dateSortDescriptors;
- (id)_alphabeticalSortDescriptors;
- (id)completionSuggestionsForQuery:(id)arg1 withSearchSections:(id)arg2 numberOfSuggestions:(NSUInteger)arg3;
- (id)updatedSearchSections:(id)arg1 withTopCollectionResults:(id)arg2;
- (id)searchResultSectionsForQuery:(id)arg1 withAssetResults:(id)arg2 collectionResults:(id)arg3 combineAssetSections:(BOOL)arg4;
- (void)performQuery:(id)arg1 withResultsHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithDatabase:(id)arg1;

@end

