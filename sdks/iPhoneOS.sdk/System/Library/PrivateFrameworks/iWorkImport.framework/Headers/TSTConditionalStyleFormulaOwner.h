//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCEFormulaOwning-Protocol.h>

@class TSCECalculationEngine, TSCECellCoordinateVector, TSTTableModel;

__attribute__((visibility("hidden")))
@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning>
{
    TSTTableModel *_tableModel;
    TSCECalculationEngine *_calcEngine;
    UUIDData_5fbc143e _ownerUID;
    struct TSCESubFormulaOwnerID _planeUID;
    TSCECellCoordinateVector *_cellsToInvalidate;
    struct TSCESubFormulaOwnerID _subOwnerID;
}

+ (id)allCondStyleFormulasForTable:(id)arg1;
@property(nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(nonatomic) struct TSCESubFormulaOwnerID subOwnerID; // @synthesize subOwnerID=_subOwnerID;
@property(nonatomic) UUIDData_5fbc143e ownerUID; // @synthesize ownerUID=_ownerUID;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e )arg2;
- (void)changedConditionForCellID:(struct TSUCellCoord)arg1;
- (void)replaceFormulaForConditionalStyle:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)removeFormulasInRange:(struct TSUCellRect)arg1;
- (void)removeFormulaAtCellID:(struct TSUCellCoord)arg1;
- (void)addFormulaForConditionalStyle:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (BOOL)checkConditionForCellID:(struct TSUCellCoord)arg1 withConditionalStyle:(id)arg2 withIndex:(NSUInteger )arg3;
- (id)initWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1 ownerUID:(const UUIDData_5fbc143e )arg2;

@end

