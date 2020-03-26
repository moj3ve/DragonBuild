//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AnnotationKit/CHPointFIFODrawingTarget-Protocol.h>

@class AKBitmapFIFO, AKController, CHBoxcarFilterPointFIFO, CHPointStrokeFIFO, CHQuadCurvePointFIFO, MISSING_TYPE, UIColor;
@protocol AKSmoothPathViewDelegate;

@interface AKSmoothPathView : UIView <CHPointFIFODrawingTarget>
{
    double _cachedEffectiveStrokeWidthInModel;
    double _cachedModelToViewScale;
    BOOL _prestrokedOutputMode;
    BOOL _hasShadow;
    BOOL _applyModelBaseScaleFactorToStroke;
    BOOL _startedTouchDrawing;
    BOOL _isAddingPointWithoutSmoothing;
    BOOL _disableSingleDotSpecialCase;
    AKController *_controller;
    id <AKSmoothPathViewDelegate> _delegate;
    UIColor *_strokeColor;
    double _strokeWidth;
    double _shadowRadiusInModel;
    double _shadowRadiusInView;
    double _minPressure;
    double _maxPressure;
    double _minThickness;
    double _maxThickness;
    CHPointStrokeFIFO *_strokeFIFO;
    CHBoxcarFilterPointFIFO *_smoothingFIFO;
    CHQuadCurvePointFIFO *_interpolatingFIFO;
    AKBitmapFIFO *_bitmapFifo;
    double _currentWeight;
    double _singleDotCurrentSize;
    CGRect _singleDotRect;
}

+ (id)newSmoothPathViewForCurrentPlatformWithController:(id)arg1;
@property double singleDotCurrentSize; // @synthesize singleDotCurrentSize=_singleDotCurrentSize;
@property BOOL disableSingleDotSpecialCase; // @synthesize disableSingleDotSpecialCase=_disableSingleDotSpecialCase;
@property double currentWeight; // @synthesize currentWeight=_currentWeight;
@property(retain, nonatomic) AKBitmapFIFO *bitmapFifo; // @synthesize bitmapFifo=_bitmapFifo;
@property(retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) CHBoxcarFilterPointFIFO *smoothingFIFO; // @synthesize smoothingFIFO=_smoothingFIFO;
@property(retain, nonatomic) CHPointStrokeFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property(nonatomic) double maxThickness; // @synthesize maxThickness=_maxThickness;
@property(nonatomic) double minThickness; // @synthesize minThickness=_minThickness;
@property(nonatomic) double maxPressure; // @synthesize maxPressure=_maxPressure;
@property(nonatomic) double minPressure; // @synthesize minPressure=_minPressure;
@property double cachedModelToViewScale; // @synthesize cachedModelToViewScale=_cachedModelToViewScale;
@property double shadowRadiusInView; // @synthesize shadowRadiusInView=_shadowRadiusInView;
@property double shadowRadiusInModel; // @synthesize shadowRadiusInModel=_shadowRadiusInModel;
@property CGRect singleDotRect; // @synthesize singleDotRect=_singleDotRect;
@property BOOL isAddingPointWithoutSmoothing; // @synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing;
@property(nonatomic) BOOL startedTouchDrawing; // @synthesize startedTouchDrawing=_startedTouchDrawing;
@property BOOL applyModelBaseScaleFactorToStroke; // @synthesize applyModelBaseScaleFactorToStroke=_applyModelBaseScaleFactorToStroke;
@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) BOOL prestrokedOutputMode; // @synthesize prestrokedOutputMode=_prestrokedOutputMode;
@property(retain) id <AKSmoothPathViewDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak AKController *controller; // @synthesize controller=_controller;
// - (void).cxx_destruct;
- (void)_updateInterpolatingFifoLineWidth;
- (double)_windowBackingScaleFactor;
- (MISSING_TYPE *)_pointForRecognizer:(id)arg1;
- (MISSING_TYPE *)_pointForTouch:(id)arg1;
- (double)_convertValueFromModelToSelf:(double)arg1;
- (double)_effectiveStrokeWidthInModel;
- (void)_updateShadowRadiusInView;
- (void)_setupShadowInContext:(CGContext )arg1;
- (CGContext )_getPlatformCGContext;
- (void)_clear;
- (double)weightForValue:(double)arg1;
- (void)handleDragAction:(id)arg1;
- (BOOL)_catchUpAccumulatedTouchesForRecognizer:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)terminateStroke;
- 
- 
- (void)startStroke;
- (void)drawRect:(CGRect)arg1;
- (id)drawing;
- (BOOL)isOpaque;
- (void)callDelegate;
- (void)updateInterpolatingFifoUnitScale;
- (void)_setupFilterChainWithBitmapFifo:(BOOL)arg1;
- (void)teardown;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithController:(id)arg1;

@end

