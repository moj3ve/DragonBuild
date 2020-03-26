//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDataSourceSnapshot-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshot>
{
    struct vector<_NSRange, std::__1::allocator<_NSRange>> _sectionRanges;
}

+ (id)snapshotWithSectionCountsProvider:(id /* CDUnknownBlockType */)arg1;
+ (id)snapshotForDataSourceBackedView:(id)arg1;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)_recomputeRangeLocations;
- (BOOL)_insertSection:(long long)arg1 withInitialCount:(long long)arg2;
- (BOOL)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (BOOL)_incrementSectionCount:(long long)arg1;
- (BOOL)_deleteAllSections;
- (BOOL)_deleteSection:(long long)arg1;
- (BOOL)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (BOOL)_decrementSectionCount:(long long)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)snapshot;
- (id)indexPathForAppendingInsertInSection:(long long)arg1;
- (BOOL)indexPathIsSectionAppendingInsert:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;
- (_NSRange)rangeForSection:(long long)arg1;
- (long long)globalIndexForIndexPath:(id)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfItems;
- (id)description;
- (id)initWithSectionCountsProvider:(id /* CDUnknownBlockType */)arg1;
- (id)initWithDataSourceBackedView:(id)arg1;
- (id)initWithSectionCounts:(id)arg1;

@end

