//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSError;
@protocol FPCollectionDataSource;

@protocol FPCollectionDataSourceDelegate
- (BOOL)dataSourceShouldAlwaysReplaceContents:(id <FPCollectionDataSource>)arg1;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 wasInvalidatedWithError:(NSError *)arg2;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 receivedUpdatedItems:(NSArray *)arg2 deletedItems:(NSArray *)arg3 hasMoreChanges:(BOOL)arg4;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 replaceContentsWithItems:(NSArray *)arg2 hasMoreChanges:(BOOL)arg3;
@end

