//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/MKMapViewDelegate-Protocol.h>

@class GEORouteMatch, MKAnnotationView, MKMapView, NSError, NSString, UIControl, UITouch, VKLabelMarker, VKVenueBuildingFeatureMarker, VKVenueFeatureMarker;

@protocol MKMapViewDelegatePrivate <MKMapViewDelegate>

@optional
- (void)mapView:(MKMapView *)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 didDecelerate:(BOOL)arg4 tiltDirection:(long long)arg5;
- (void)mapView:(MKMapView *)arg1 didUpdateYaw:(double)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeDisplayedFloorOrdinal:(short)arg2 forVenue:(VKVenueFeatureMarker *)arg3;
- (void)mapView:(MKMapView *)arg1 didChangeFocusedVenue:(VKVenueFeatureMarker *)arg2 focusedBuilding:(VKVenueBuildingFeatureMarker *)arg3;
- (void)mapView:(MKMapView *)arg1 calloutPrimaryActionTriggeredForAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(MKMapView *)arg1 calloutPrimaryActionTriggeredForLabelMarker:(VKLabelMarker *)arg2;
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(MKMapView *)arg1;
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(MKMapView *)arg1;
- (void)mapViewNavigationCameraHasStoppedPanning:(MKMapView *)arg1;
- (void)mapViewNavigationCameraHasStartedPanning:(MKMapView *)arg1;
- (GEORouteMatch *)mapViewCurrentRouteMatch:(MKMapView *)arg1;
- (void)mapViewDidFinishCalloutExpansion:(MKMapView *)arg1;
- (void)mapViewCompass3DButtonTapped:(MKMapView *)arg1;
- (BOOL)mapViewCompass3DButtonEnabled:(MKMapView *)arg1;
- (CGPoint)mapView:(MKMapView *)arg1 focusPointForPoint:(CGPoint)arg2 gesture:(long long)arg3;
- (void)mapView:(MKMapView *)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(BOOL)arg5 tiltDirection:(long long)arg6;
- (void)mapView:(MKMapView *)arg1 willStartRespondingToGesture:(long long)arg2 animated:(BOOL)arg3;
- (void)mapViewDidStopUserInteraction:(MKMapView *)arg1;
- (void)mapViewDidStartUserInteraction:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 didChangeMuninAvailability:(long long)arg2;
- (void)mapView:(MKMapView *)arg1 flyoverModeWillChange:(int)arg2;
- (void)mapView:(MKMapView *)arg1 flyoverModeDidChange:(int)arg2;
- (void)mapView:(MKMapView *)arg1 flyoverTourLabelDidChange:(NSString *)arg2;
- (void)mapView:(MKMapView *)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
- (void)mapViewWillStartFlyoverTour:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 showingFlyoverDidChange:(BOOL)arg2;
- (void)mapView:(MKMapView *)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)mapView:(MKMapView *)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)mapView:(MKMapView *)arg1 didBecomePitched:(BOOL)arg2;
- (void)mapView:(MKMapView *)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)mapView:(MKMapView *)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)_mapView:(MKMapView *)arg1 calloutDidAppearForAnnotationView:(MKAnnotationView *)arg2;
- (void)mapViewDidAnimateInAnnotationViews:(MKMapView *)arg1;
- (void)mapViewWillAnimateInAnnotationViews:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 didDeselectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 didSelectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 willSelectLabelMarker:(VKLabelMarker *)arg2;
- (BOOL)mapView:(MKMapView *)arg1 shouldSelectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 labelMarker:(VKLabelMarker *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (BOOL)mapViewShouldHandleTapToDeselect:(MKMapView *)arg1;
- (BOOL)mapView:(MKMapView *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeMapType:(NSUInteger)arg2;
- (void)mapViewDidFinishInitialUserTrackingModeAnimation:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3 fromTrackingButton:(BOOL)arg4;
- (BOOL)_mapViewCanChangeUserTrackingModeWhenRegionDidChange:(MKMapView *)arg1;
- (double)mapView:(MKMapView *)arg1 shouldDelayTapResponse:(UITouch *)arg2 onAnnotationView:(MKAnnotationView *)arg3 forDuration:(double)arg4;
- (void)mapView:(MKMapView *)arg1 arTrackingStateDidChange:(NSUInteger)arg2 reason:(NSUInteger)arg3;
- (void)mapViewARSessionInterruptionEnded:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 arSessionWasInterrupted:(NSUInteger)arg2;
- (void)mapView:(MKMapView *)arg1 didEncounterARError:(NSError *)arg2;
- (void)mapViewDidExitAR:(MKMapView *)arg1;
- (void)mapViewDidEnterAR:(MKMapView *)arg1;
- (void)mapViewWillEnterAR:(MKMapView *)arg1;
- (void)_mapView:(MKMapView *)arg1 willDeselectLabelMarker:(VKLabelMarker *)arg2;
- (void)_mapView:(MKMapView *)arg1 willDeselectAnnotationView:(MKAnnotationView *)arg2;
@end

