//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@class _UILegibilitySettings;

@interface SBFolderTitleTextField : UITextField
{
    BOOL _showingEditUI;
    BOOL _allowsEditing;
    _UILegibilitySettings *_legibilitySettings;
}

+ (id)_clearButtonImage;
+ (id)_editBackgroundImage;
+ (void)warmupIfNecessary;
@property(readonly, nonatomic) BOOL showingEditUI; // @synthesize showingEditUI=_showingEditUI;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
// - (void).cxx_destruct;
- (id)_clearButtonImage;
- (id)_backgroundImage;
- (void)_updateLegibility;
- (CGRect)clearButtonRectForBounds:(CGRect)arg1;
- (CGRect)editingRectForBounds:(CGRect)arg1;
- (CGRect)textRectForBounds:(CGRect)arg1;
- (CGRect)_textRectForBounds:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(nonatomic) double fontSize;
- (void)setShowsEditUI:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

