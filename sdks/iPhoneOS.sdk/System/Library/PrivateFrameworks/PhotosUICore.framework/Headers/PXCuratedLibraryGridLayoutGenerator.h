//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCuratedLibraryGridLayoutGenerator : PXLayoutGenerator
{
    CGSize _itemSize;
    double _interItemSpacing;
    UIEdgeInsets _insets;
    BOOL _isPrepared;
    struct _PXLayoutGeometry _geometries;
    NSUInteger _geometriesCount;
    CGSize _actualSize;
    double _lastFullRowBottomEdge;
    struct _PXCornerSpriteIndexes _cornerSpriteIndexes;
}

- (struct _PXCornerSpriteIndexes)cornerSpriteIndexes;
- (_NSRange)geometriesRangeCoveringRect:(CGRect)arg1;
- (void)_prepareGeometriesBufferForCount:(NSUInteger)arg1;
- (void)_prepareIfNeeded;
- (void)getGeometries:(struct _PXLayoutGeometry )arg1 inRange:(_NSRange)arg2 withKind:(long long)arg3;
@property(readonly, nonatomic) double lastFullRowBottomEdge;
- (CGSize)size;
- (CGSize)estimatedSize;
- (void)invalidate;
- (void)dealloc;
- (id)initWithMetrics:(id)arg1;

@end

