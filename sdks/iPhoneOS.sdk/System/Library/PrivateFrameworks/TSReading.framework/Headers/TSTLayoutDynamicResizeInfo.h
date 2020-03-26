//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSTLayoutDynamicResizeInfoProtocol-Protocol.h>

@class TSTCellRegion;

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol>
{
    BOOL mValid;
    int mTableRowsBehavior;
    TSTCellRegion *mRowRegion;
    unsigned short mStartRowIndex;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfResizableRows;
    double mCapturedRowHeights;
    double mCurrentRowHeights;
    double mMinimumRowHeights;
    double mCapturedRowHeightTotal;
    TSTCellRegion *mColumnRegion;
    unsigned char mStartColumnIndex;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfResizableColumns;
    double mCapturedColumnWidths;
    double mCurrentColumnWidths;
    double mMinimumColumnWidths;
    double mCapturedColumnWidthTotal;
}

- (id)columnWidths;
- (id)rowHeights;
- (void)enumerateRowHeightsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateColumnWidthsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (CGSize)capturedTableSize;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)applyColumnTotalWidth:(double)arg1;
- (double)applyRowTotalHeight:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)getColumnWidthResize:(unsigned char)arg1;
- (double)getRowHeightResize:(unsigned short)arg1;
- (double)getColumnWidth:(unsigned char)arg1;
- (double)getRowHeight:(unsigned short)arg1;
- (double)getColumnInitialWidth:(unsigned char)arg1;
- (double)getRowInitialHeight:(unsigned short)arg1;
- (BOOL)hasWidthForColumn:(unsigned char)arg1;
- (BOOL)hasHeightForRow:(unsigned short)arg1;
- (void)invalidate;
- (BOOL)valid;
- (void)p_captureRowColumnInformation:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;
- (void)dealloc;
- (id)initWithDynamicResizeInfo:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;
- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;
- (id)initWithMasterLayout:(id)arg1;

@end

