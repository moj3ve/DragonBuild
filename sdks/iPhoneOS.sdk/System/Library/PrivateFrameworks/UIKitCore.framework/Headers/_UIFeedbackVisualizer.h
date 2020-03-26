//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIFeedbackVisualizer : NSObject
{
    UIWindow *_visualFeedbackWindow;
    NSMapTable *_engineLayers;
}

+ (id)sharedVisualizer;
@property(retain, nonatomic) NSMapTable *engineLayers; // @synthesize engineLayers=_engineLayers;
@property(retain, nonatomic) UIWindow *visualFeedbackWindow; // @synthesize visualFeedbackWindow=_visualFeedbackWindow;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_showVisualForFeedback:(id)arg1;
- (void)cancelVisualForFeedback:(id)arg1;
- (void)showVisualForFeedback:(id)arg1 withDelay:(double)arg2;
- (void)_updateEngine:(id)arg1;
- (void)addEngine:(id)arg1;
- (id)_colorForFeedback:(id)arg1;
- (id)_colorForEngineState:(long long)arg1;
- (id)_colorForEngine:(id)arg1;
- (id)_monogramForEngine:(id)arg1;
- (id)init;

@end

