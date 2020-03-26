//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKCameraController.h>

#import <VectorKit/VKAnnotationTrackingCameraController-Protocol.h>
#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class VKAnnotationTrackingCameraController, VKCameraRegionRestriction, VKGestureCameraBehavior, VKTimedAnimation;
@protocol VKTrackableAnnotation;

__attribute__((visibility("hidden")))
@interface VKScreenCameraController : VKCameraController <VKAnnotationTrackingCameraController, VKGesturingCameraController>
{
    VKTimedAnimation *_zoomAnimation;
    VKTimedAnimation *_pitchAnimation;
    VKTimedAnimation *_rotationAnimation;
    VKTimedAnimation *_regionAnimation;
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
    VKGestureCameraBehavior *_gestureCameraControllerBehavior;
    long long _annotationTrackingZoomStyle;
    long long _annotationTrackingHeadingAnimationDisplayRate;
    BOOL _isPitchIncreasing;
    VKCameraRegionRestriction *_regionRestriction;
    struct {
        double min;
        double max;
    } _centerCoordinateDistanceRange;
}

@property(retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // @synthesize regionRestriction=_regionRestriction;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinateDistanceRange; // @synthesize centerCoordinateDistanceRange=_centerCoordinateDistanceRange;
@property(nonatomic) long long annotationTrackingHeadingAnimationDisplayRate; // @synthesize annotationTrackingHeadingAnimationDisplayRate=_annotationTrackingHeadingAnimationDisplayRate;
@property(nonatomic) long long annotationTrackingZoomStyle; // @synthesize annotationTrackingZoomStyle=_annotationTrackingZoomStyle;
- (void)setCamera:(id)arg1;
- (BOOL)canEnter3DMode;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (long long)tileSize;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* CDUnknownBlockType */)arg7 completion:(id /* CDUnknownBlockType */)arg8;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* CDUnknownBlockType */)arg7 completion:(id /* CDUnknownBlockType */)arg8;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (BOOL)tapAtPoint:(CGPoint)arg1;
- (void)transferGestureState:(id)arg1;
- (void)stopPitchingWithFocusPoint:(CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(CGPoint)arg1;
- (void)stopPanningAtPoint:(CGPoint)arg1;
- (void)updatePanWithTranslation:(CGPoint)arg1;
- (void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(BOOL)arg2;
- (void)stopPinchingWithFocusPoint:(CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(id /* CDUnknownBlockType */)arg3;
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(id /* CDUnknownBlockType */)arg3;
- (void)clampZoomLevelIfNecessary;
- (BOOL)snapMapIfNecessary:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)stopAnimations;
- (void)stopRegionAnimation;
- (void)stopSnappingAnimations;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
@property(readonly, nonatomic) BOOL isAnimatingToTrackAnnotation;
@property(readonly, nonatomic) BOOL isTrackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)dealloc;
- (id)initWithMapDataAccess:(struct MapDataAccess )arg1 animationRunner:(struct AnimationRunner )arg2 runLoopController:(struct RunLoopController )arg3 cameraDelegate:(id)arg4;

@end

