//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDShapeLayout.h>

@class TSDBezierPath, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout;

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout
{
    TSDBezierPath *mClippedBezierPath;
    TSDConnectionLinePathSource *mOriginalPathSource;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSDLayout *mConnectedFrom;
    TSDLayout *mConnectedTo;
    TSDBezierPath *mCachedFromWrapPath;
    TSDBezierPath *mCachedToWrapPath;
    double mCachedFromOutset;
    double mCachedToOutset;
    TSDBezierPath *mCachedFromOutsetWrapPath;
    TSDBezierPath *mCachedToOutsetWrapPath;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    BOOL mValidConnections;
    BOOL mVisibleLine;
    BOOL mValidLine;
    CGPoint mLooseEndPosition;
    CGPoint mAcumulatedDrag;
    BOOL mUseResizePoints[3];
    CGPoint mResizeControlPoints[3];
    BOOL mUseDynamicOutsets;
    double mDynamicOutsetFrom;
    double mDynamicOutsetTo;
}

@property(nonatomic) double dynamicOutsetTo; // @synthesize dynamicOutsetTo=mDynamicOutsetTo;
@property(nonatomic) double dynamicOutsetFrom; // @synthesize dynamicOutsetFrom=mDynamicOutsetFrom;
@property(nonatomic) BOOL useDynamicOutsets; // @synthesize useDynamicOutsets=mUseDynamicOutsets;
@property(readonly, nonatomic) BOOL validLine; // @synthesize validLine=mValidLine;
@property(nonatomic) TSDLayout *connectedTo; // @synthesize connectedTo=mConnectedTo;
@property(nonatomic) TSDLayout *connectedFrom; // @synthesize connectedFrom=mConnectedFrom;
- (id)p_infoForConnectingToInfo:(id)arg1;
- (CGPoint)getControlKnobPosition:(NSUInteger)arg1;
- (BOOL)isStraightLine;
- (void)pauseDynamicTransformation;
- (CGPoint)i_accumulatedDrag;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (BOOL)shouldDisplayGuides;
- (CGPoint)unclippedTailPoint;
- (CGPoint)unclippedHeadPoint;
- (id)path;
- (BOOL)pathIsOpen;
- (BOOL)pathIsLineSegment;
- (void)invalidatePath;
- (void)invalidatePosition;
- (CGRect)boundsForStandardKnobs;
- (id)layoutInfoGeometry;
- (id)pathSource;
@property(readonly, nonatomic) TSDConnectionLinePathSource *connectedPathSource;
- (int)wrapType;
- (BOOL)canResetTextAndObjectHandles;
- (BOOL)canBeIntersected;
- (BOOL)canFlip;
- (BOOL)canEndpointsCoincide;
- (BOOL)isInvisible;
- (void)updateConnectedPath;
- (id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(BOOL)arg4 isValid:(BOOL )arg5;
- (CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint [3])arg3;
- (void)checkConnections;
- (void)validate;
- (void)invalidateConnections;
- (void)removeConnections;
- (void)connectedLayoutInvalidated:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)parentDidChange;
- (void)updateRepPath;
- (BOOL)supportsFlipping;
- (BOOL)supportsRotation;
- (BOOL)supportsResize;
- (id)additionalLayoutsForRepCreation;
- (id)reliedOnLayouts;
- (BOOL)shouldValidate;
- (id)connectionLineInfo;
@property(readonly, nonatomic) double outsetTo;
@property(readonly, nonatomic) double outsetFrom;
- (void)dealloc;

@end

