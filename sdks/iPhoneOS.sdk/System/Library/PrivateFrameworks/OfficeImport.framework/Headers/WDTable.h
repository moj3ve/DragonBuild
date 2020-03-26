//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTable : WDBlock
{
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

// - (void).cxx_destruct;
- (id)description;
- (id)newRunIterator;
- (id)runIterator;
- (id)newCellIterator;
- (id)cellIterator;
- (id)newRowIterator;
- (id)rowIterator;
- (int)nestingLevel;
- (int)blockType;
- (void)clearRows;
- (id)insertRowAtIndex:(NSUInteger)arg1;
- (id)addRow;
- (id)rowAt:(NSUInteger)arg1;
- (NSUInteger)rowCount;
- (void)clearProperties;
- (id)properties;
- (id)initWithText:(id)arg1;

@end

