//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIWindow.h"

@class UIColor, UITraitCollection, _UIHostedWindowHostingHandle;
@protocol _UIHostedWindowDelegate;

@interface _UIHostedWindow : UIWindow
{
    BOOL _wantsTraitPropagation;
    BOOL __hostViewUnderlapsStatusBar;
    long long _hostTintAdjustmentMode;
    UIColor *__hostTintColor;
    UITraitCollection *_hostTraitCollection;
    id <_UIHostedWindowDelegate> __hostedWindowDelegate;
}

@property(nonatomic) __weak id <_UIHostedWindowDelegate> _hostedWindowDelegate; // @synthesize _hostedWindowDelegate=__hostedWindowDelegate;
- (void)__setHostViewUnderlapsStatusBar:(BOOL)arg1;
- (BOOL)__hostViewUnderlapsStatusBar;
@property(nonatomic, setter=_setWantsTraitPropagation:) BOOL _wantsTraitPropagation; // @synthesize _wantsTraitPropagation;
@property(retain, nonatomic, setter=_setHostTraitCollection:) UITraitCollection *_hostTraitCollection; // @synthesize _hostTraitCollection;
@property(retain, nonatomic, setter=_setHostTintColor:) UIColor *_hostTintColor; // @synthesize _hostTintColor=__hostTintColor;
@property(nonatomic, setter=_setHostTintAdjustmentMode:) long long _hostTintAdjustmentMode; // @synthesize _hostTintAdjustmentMode;
// - (void).cxx_destruct;
- (id)_traitCollectionForSize:(CGSize)arg1 parentCollection:(id)arg2;
- (void)_updateWindowTraitsAndNotify:(BOOL)arg1;
- (BOOL)_shouldPropagateTraitCollectionChanges;
- (BOOL)_allowsLinkPreviewInteractionInViewServices;
- (void)didSetResponderTargetForCalloutBar:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2;
- (void)_configureContextOptions:(id)arg1;
- (long long)_defaultTintAdjustmentMode;
- (id)_normalInheritedTintColor;
- (long long)_orientationForSceneTransform;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (BOOL)_needsShakesWhenInactive;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_didCreateRootPresentationController;
- (BOOL)_preventsRootPresentationController;
- (BOOL)_updatesSafeAreaInsetsOnRead;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_extendsScreenSceneLifetime;
@property(readonly, nonatomic) _UIHostedWindowHostingHandle *hostingHandle;
- (unsigned int)contextID;
- (BOOL)_canPromoteFromKeyWindowStack;
- (BOOL)_isWindowServerHostingManaged;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

