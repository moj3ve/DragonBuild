//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPQueryCollection.h>

#import <FileProvider/FPSearchQueryResultsProviding-Protocol.h>

@class NSFileProviderSearchQuery, NSPredicate;

@interface FPSearchCollection : FPQueryCollection <FPSearchQueryResultsProviding>
{
    NSPredicate *_filterPredicate;
}

// - (void).cxx_destruct;
- (id)scopedSearchQuery;
@property(copy, nonatomic) NSFileProviderSearchQuery *searchQuery;
- (BOOL)isCollectionValidForItem:(id)arg1;
- (id)_enumerationSettingsPredicate;
- (id)_createDescriptorWithSortDescriptors:(id)arg1;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)init;

@end

