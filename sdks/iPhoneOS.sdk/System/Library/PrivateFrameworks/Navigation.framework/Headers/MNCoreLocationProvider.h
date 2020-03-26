//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/CLLocationManagerDelegate-Protocol.h>
#import <Navigation/CLLocationManagerVehicleDelegate-Protocol.h>
#import <Navigation/MNLocationProvider-Protocol.h>

@class CLLocationManager, NSBundle, NSLock, NSRunLoop, NSString;
@protocol MNLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider>
{
    BOOL _waitingForAuthorization;
    BOOL _hasQueriedAuthorization;
    NSLock *_authorizationLock;
    BOOL _alternate;
    CLLocationManager *_clLocationManager;
    id <MNLocationProviderDelegate> _delegate;
    BOOL _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    id /* CDUnknownBlockType */ _authorizationRequestBlock;
    NSRunLoop *_debug_initRunLoop;
    NSRunLoop *_debug_deinitRunLoop;
    BOOL _updatingLocations;
}

@property(nonatomic) BOOL updatingLocations; // @synthesize updatingLocations=_updatingLocations;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(nonatomic) long long activityType;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authorizationRequestBlock;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) NSUInteger traceVersion;
@property(readonly, nonatomic) BOOL isTracePlayer;
@property(readonly, nonatomic) BOOL isSimulation;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int headingOrientation;
@property(nonatomic) BOOL matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)_resetForNewEffectiveBundle;
- (void)resetForActiveTileGroupChanged;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)requestLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)_updateAuthorizationStatus;
@property(readonly, nonatomic) BOOL usesCLMapCorrection;
@property(readonly, nonatomic) CLLocationManager *_clLocationManager;
- (void)_createCLLocationManager;
- (void)_sharedInit;
- (void)dealloc;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)initWithEffectiveBundle:(id)arg1;
- (id)init;

@end

