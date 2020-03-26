//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSCEColumnRowUIDMapping-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTColumnRowUIDMap : TSPObject <TSCEColumnRowUIDMapping>
{
    vector_4dc5f307 _columnUidForIndex;
    vector_4dc5f307 _rowUidForIndex;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, unsigned short, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned short>>> _columnIndexForUid;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, unsigned int, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned int>>> _rowIndexForUid;
    NSUInteger _versionCounter;
}

@property(readonly, nonatomic) NSUInteger versionCounter; // @synthesize versionCounter=_versionCounter;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)_checkStructure;
- (struct TSCERangeCoordinate)tableRangeCoordinate;
- (void)assertCollaborationConvergence;
- (BOOL)writeCellIDsInCellUIDList:(id)arg1 toVector:(vector_38b190b0 )arg2 prunedCellUIDs:(vector_7670e6f2 )arg3;
- (void)applyMap:(const UUIDMap_b66c2694 )arg1 toRows:(BOOL)arg2;
- (void)reset;
- (BOOL)isEmpty;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (void)insertRowsWithUIDs:(const vector_4dc5f307 )arg1 atIndex:(unsigned int)arg2;
- (void)insertColumnsWithUIDs:(const vector_4dc5f307 )arg1 atIndex:(unsigned short)arg2;
- (void)insertNewColumnsInIndexRange:(_NSRange)arg1;
- (void)insertNewRowsInIndexRange:(_NSRange)arg1;
- (void)replaceColumnsWithUids:(const vector_4dc5f307 )arg1;
- (void)replaceRowsWithUids:(const vector_4dc5f307 )arg1;
- (void)removeColumnsAtIndexes:(id)arg1;
- (void)removeRowsAtIndexes:(id)arg1;
- (void)moveColumnIndexRange:(_NSRange)arg1 toIndex:(unsigned short)arg2;
- (void)moveRowIndexRange:(_NSRange)arg1 toIndex:(unsigned int)arg2;
- (id)cellTractRefForUIDRectRef:(id)arg1;
- (id)cellRegionForUIDRange:(const UUIDRect_d701734b )arg1;
- (UUIDRect_d701734b)cellUIDRangeForCellRange:(struct TSUCellRect)arg1;
- (struct TSUCellRect)cellRangeForUIDRange:(const UUIDRect_d701734b )arg1;
- (vector_4dc5f307)prunedRowUIDsFromRowUIDs:(const vector_4dc5f307 )arg1;
- (vector_4dc5f307)prunedColumnUIDsFromColumnUIDs:(const vector_4dc5f307 )arg1;
- (struct TSUCellCoord)cellIDForCellUID:(const struct TSTCellUID )arg1;
- (struct TSTCellUID)cellUIDForCellID:(const struct TSUCellCoord )arg1;
- (_NSRange)rowRangeForUIDs:(const vector_4dc5f307 )arg1;
- (_NSRange)columnRangeForUIDs:(const vector_4dc5f307 )arg1;
- (id)rowIndexesForUIDs:(const vector_4dc5f307 )arg1;
- (id)mutableRowIndexesForUIDs:(const vector_4dc5f307 )arg1;
- (id)columnIndexesForUIDs:(const vector_4dc5f307 )arg1;
- (id)mutableColumnIndexesForUIDs:(const vector_4dc5f307 )arg1;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(BOOL)arg2;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(BOOL)arg2 notFoundUIDs:(id)arg3;
- (id)UIDSetForIndexes:(id)arg1 isRows:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int numberOfRows;
@property(readonly, nonatomic) unsigned short numberOfColumns;
- (vector_4dc5f307)rowUIDsForRowRange:(_NSRange)arg1;
- (vector_4dc5f307)columnUIDsForColumnRange:(_NSRange)arg1;
- (struct TSUCellRect)range;
- (vector_4dc5f307)rowUIDs;
- (vector_4dc5f307)columnUIDs;
- (vector_4dc5f307)rowUIDsForRowIndexes:(id)arg1;
- (vector_4dc5f307)columnUIDsForColumnIndexes:(id)arg1;
- (unsigned int)rowIndexForRowUID:(const UUIDData_5fbc143e )arg1;
- (unsigned short)columnIndexForColumnUID:(const UUIDData_5fbc143e )arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned int)arg1;
- (const vector_4dc5f307 )allOrderedRowUIDs;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned short)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 columnUIDs:(const vector_4dc5f307 )arg2 rowUIDs:(const vector_4dc5f307 )arg3;
- (id)initWithContext:(id)arg1 tableUUID:(id)arg2 numberOfRows:(unsigned int)arg3 numberOfColumns:(unsigned int)arg4;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

@end

