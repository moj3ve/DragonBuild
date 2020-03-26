//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>

@class NSLayoutConstraint, PKPaletteButton, UIStackView;
@protocol PKPaletteUndoRedoViewDelegate;

@interface PKPaletteUndoRedoView : UIView <PKEdgeLocatable, PKPaletteViewSizeScaling>
{
    BOOL _undoEnabled;
    BOOL _redoEnabled;
    NSUInteger _edgeLocation;
    double _scalingFactor;
    id <PKPaletteUndoRedoViewDelegate> _delegate;
    UIView *_contentView;
    UIStackView *_stackView;
    PKPaletteButton *_undoButton;
    PKPaletteButton *_redoButton;
    NSLayoutConstraint *_undoButtonWidthConstraint;
    NSLayoutConstraint *_undoButtonHeightConstraint;
    NSLayoutConstraint *_redoButtonWidthConstraint;
    NSLayoutConstraint *_redoButtonHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *redoButtonHeightConstraint; // @synthesize redoButtonHeightConstraint=_redoButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *redoButtonWidthConstraint; // @synthesize redoButtonWidthConstraint=_redoButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *undoButtonHeightConstraint; // @synthesize undoButtonHeightConstraint=_undoButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *undoButtonWidthConstraint; // @synthesize undoButtonWidthConstraint=_undoButtonWidthConstraint;
@property(retain, nonatomic) PKPaletteButton *redoButton; // @synthesize redoButton=_redoButton;
@property(retain, nonatomic) PKPaletteButton *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isRedoEnabled) BOOL redoEnabled; // @synthesize redoEnabled=_redoEnabled;
@property(nonatomic, getter=isUndoEnabled) BOOL undoEnabled; // @synthesize undoEnabled=_undoEnabled;
@property(nonatomic) __weak id <PKPaletteUndoRedoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) NSUInteger edgeLocation; // @synthesize edgeLocation=_edgeLocation;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)handleRedo:(id)arg1;
- (void)handleUndo:(id)arg1;
- (void)updateConstraints;
- (CGSize)_buttonSize;
- (void)installRedoButton;
- (void)installUndoButton;
- (void)installStackView;
- (id)initWithFrame:(CGRect)arg1;

@end

