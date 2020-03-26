//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutRow : NSObject
{
    BOOL _isValid;
    BOOL _complete;
    int _verticalAlignement;
    int _horizontalAlignement;
    BOOL _fixedItemSize;
    _UIFlowLayoutSection *_section;
    long long _index;
    NSMutableArray *_items;
    double _availableSpace;
    CGSize _rowSize;
    CGRect _rowFrame;
}

@property(nonatomic) double availableSpace; // @synthesize availableSpace=_availableSpace;
@property(nonatomic) BOOL fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) CGRect rowFrame; // @synthesize rowFrame=_rowFrame;
@property(nonatomic) CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) __weak _UIFlowLayoutSection *section; // @synthesize section=_section;
// - (void).cxx_destruct;
- (long long)indexOfNearestItemAtPoint:(CGPoint)arg1;
- (id)copyFromSection:(id)arg1;
- (id)snapshot;
- (void)removeItemAtIndex:(long long)arg1;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
- (void)addItem:(id)arg1 atEnd:(BOOL)arg2;
- (void)layoutRow;
- (void)invalidate;
- (id)init;

@end

