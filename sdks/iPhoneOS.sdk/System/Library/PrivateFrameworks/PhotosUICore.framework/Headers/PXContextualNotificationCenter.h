//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableSet, PXContextualNotification, UIPanGestureRecognizer, UITapGestureRecognizer, UIWindow, _PXContextualNotificationCenterUpdatingView;

@interface PXContextualNotificationCenter : NSObject <UIGestureRecognizerDelegate>
{
    NSMutableSet *_contextualNotifications;
    NSMutableSet *_contextualNotificationsNeedingUpdate;
    _PXContextualNotificationCenterUpdatingView *_containerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PXContextualNotification *_pannedContextualNotification;
    UIWindow *_window;
}

+ (id)defaultCenter;
@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) PXContextualNotification *pannedContextualNotification; // @synthesize pannedContextualNotification=_pannedContextualNotification;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) _PXContextualNotificationCenterUpdatingView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) NSMutableSet *contextualNotificationsNeedingUpdate; // @synthesize contextualNotificationsNeedingUpdate=_contextualNotificationsNeedingUpdate;
@property(readonly, nonatomic) NSMutableSet *contextualNotifications; // @synthesize contextualNotifications=_contextualNotifications;
// - (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)_contextualNotificationAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 isInsideDismissArea:(BOOL )arg3 isInsidePassthroughArea:(BOOL )arg4;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_updateAppearanceStateForContextualNotification:(id)arg1;
- (void)updateContextualNotificationsIfNeeded;
- (void)_updateContainerView;
- (void)invalidateContextualNotification:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)init;

@end

