//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicCarDisplayUI/MCDButton.h>

@class UIColor;

@interface MCDLabelButton : MCDButton
{
    UIColor *_disabledTextColor;
}

@property(retain, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
// - (void).cxx_destruct;
- (id)colorForKnobFocusLayer;
- (void)setEnabled:(BOOL)arg1;
- (id)tintColor;
- (void)updateButtonOpacityForKnobUnfocused;

@end

