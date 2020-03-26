//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSDate, NSMapTable, NSMutableArray, NTKComplication;
@protocol NTKComplicationDisplay;

@interface NTKComplicationController : NSObject
{
    BOOL _hasGoneLive;
    BOOL _active;
    id <NTKComplicationDisplay> _legacyDisplayDEPRECATED;
    NSMutableArray *_displayWrappers;
    NSMapTable *_displayWrappersToDataMode;
    BOOL _showsLockedUI;
    BOOL _faceZooming;
    NTKComplication *_complication;
    long long _complicationFamily;
    CLKDevice *_device;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSDate *_pauseDate;
    long long _cachingMode;
    long long _updatingMode;
    long long _animationMode;
    long long _effectiveFaceDataMode;
}

+ (id)DEPRECATEDControllerForComplication:(id)arg1 withLegacyDisplay:(id)arg2 forDevice:(id)arg3;
+ (BOOL)_isLegacy;
+ (BOOL)_acceptsComplicationType:(NSUInteger)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (BOOL)_acceptsComplicationType:(NSUInteger)arg1 forDevice:(id)arg2;
+ (Class)controllerClassForComplicationType:(NSUInteger)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (id)controllerForComplication:(id)arg1 withRequestedFamily:(long long)arg2 face:(id)arg3 slot:(id)arg4;
@property(readonly, nonatomic) long long effectiveFaceDataMode; // @synthesize effectiveFaceDataMode=_effectiveFaceDataMode;
@property(readonly, nonatomic) long long animationMode; // @synthesize animationMode=_animationMode;
@property(readonly, nonatomic) long long updatingMode; // @synthesize updatingMode=_updatingMode;
@property(readonly, nonatomic) long long cachingMode; // @synthesize cachingMode=_cachingMode;
@property(nonatomic, getter=isFaceZooming) BOOL faceZooming; // @synthesize faceZooming=_faceZooming;
@property(nonatomic) BOOL showsLockedUI; // @synthesize showsLockedUI=_showsLockedUI;
@property(retain, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long complicationFamily; // @synthesize complicationFamily=_complicationFamily;
@property(readonly, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;
// - (void).cxx_destruct;
- (void)notifyDelegateOnTimelineChangeWithTritiumUpdatePriority:(long long)arg1;
- (id)complicationApplicationIdentifier;
- (void)performBackgroundDataRefresh;
- (void)_openApp:(id)arg1 withURL:(id)arg2 result:(id /* CDUnknownBlockType */)arg3;
- (void)_openAppWithURL:(id)arg1;
- (void)didTouchUpInsideView:(id)arg1;
- (void)didTouchDownInView:(id)arg1;
- (void)performTapAction;
- (BOOL)hasTapAction;
- (void)handleFaceDefaultsChanged;
- (void)_configureForLegacyDisplay:(id)arg1;
@property(readonly, nonatomic) __weak id <NTKComplicationDisplay> legacyDisplay;
- (void)enumerateDisplayWrappersWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)removeDisplayWrapper:(id)arg1;
- (void)addDisplayWrapper:(id)arg1;
- (void)dealloc;
- (void)_activate;
- (void)activate;
- (void)_deactivate;
- (void)deactivate;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)_updateIsComplicationActive:(BOOL)arg1;
- (void)_applyAnimationMode;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_updateInternalModes:(BOOL)arg1;
- (void)_updateEffectiveFaceDataMode;
- (void)_updateEffectiveAnimationMode;
- (void)_updateEffectiveUpdatingMode;
- (void)_updateEffectiveCachingMode;
- (void)DEPRECATEDInvalidate;
- (id)_initWithComplication:(id)arg1 legacyDisplay:(id)arg2 forDevice:(id)arg3;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (Class)richComplicationDisplayViewClass;
- (BOOL)wantsLegacyDisplay;

@end

