//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUDataSource.h>

@class MPMediaItemCollection, MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSMutableSet;

@interface MPUQueryDataSource : MPUDataSource
{
    NSArray *_entities;
    NSMutableSet *_additionalUniqueItemPropertiesToFetch;
    BOOL _hasValidEmpty;
    BOOL _hasValidRepresentativeCollection;
    BOOL _invalidateWhenEnteringForeground;
    BOOL _isEmpty;
    MPMediaItemCollection *_representativeCollection;
    MPMediaQuerySectionInfo *_sectionInfo;
    BOOL _ignoringInvalidationDueToBackgroundApplicationState;
    MPMediaQuery *_query;
}

@property(nonatomic) BOOL ignoringInvalidationDueToBackgroundApplicationState; // @synthesize ignoringInvalidationDueToBackgroundApplicationState=_ignoringInvalidationDueToBackgroundApplicationState;
@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
// - (void).cxx_destruct;
- (id)_sectionInfo;
- (void)_invalidateForDisplayValuesChangeIfNeeded;
- (BOOL)_deleteHidesFromCloudForIndex:(NSUInteger)arg1 hidesAll:(out BOOL )arg2;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_representativeCollection;
- (void)_invalidateIfNeeded;
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (BOOL)showsEntityCountFooter;
- (_NSRange)rangeOfSectionAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfSectionForSectionTitleAtIndex:(NSUInteger)arg1;
- (id)localizedSectionTitleAtIndex:(NSUInteger)arg1;
- (id)localizedSectionIndexTitles;
- (NSUInteger)numberOfSections;
- (BOOL)showsIndexBar;
- (BOOL)isEmpty;
- (void)_invalidateCalculatedEntities;
- (id)queryForEntityAtIndexPath:(id)arg1;
- (id)queryForEntityAtIndex:(NSUInteger)arg1;
- (id)entities;
- (long long)editingTypeForEntityAtIndex:(NSUInteger)arg1;
- (void)deleteEntityAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;
- (BOOL)canSelectEntityAtIndex:(NSUInteger)arg1;
- (BOOL)canEditEntityAtIndex:(NSUInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (id)initWithEntityType:(long long)arg1;

@end

