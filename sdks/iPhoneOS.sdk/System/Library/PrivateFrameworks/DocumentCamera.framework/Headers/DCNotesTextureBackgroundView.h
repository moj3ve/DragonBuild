//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class DCNotesTextureView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface DCNotesTextureBackgroundView : UIView
{
    BOOL _scrollsTexture;
    DCNotesTextureView *_textureView;
    NSLayoutConstraint *_textureYConstraint;
    NSLayoutConstraint *_textureHeightConstraint;
}

+ (id)colorWithPaperTexturePatternImage;
+ (id)textureImage;
@property(retain, nonatomic) NSLayoutConstraint *textureHeightConstraint; // @synthesize textureHeightConstraint=_textureHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textureYConstraint; // @synthesize textureYConstraint=_textureYConstraint;
@property BOOL scrollsTexture; // @synthesize scrollsTexture=_scrollsTexture;
@property(readonly, nonatomic) DCNotesTextureView *textureView; // @synthesize textureView=_textureView;
// - (void).cxx_destruct;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)setContentOffset:(CGPoint)arg1;
- (void)commonInitWithScrollingTextures:(BOOL)arg1 hasAlpha:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 scrollingTextures:(BOOL)arg2 hasAlpha:(BOOL)arg3;
- (double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2;

@end

