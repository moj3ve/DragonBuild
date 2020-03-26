//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPaletteView, UIView;

@protocol PKPaletteViewInternalDelegate <NSObject>
@property(readonly, nonatomic, getter=isPaletteVisible) BOOL paletteVisible;
@property(readonly, nonatomic, getter=isPaletteDragging) BOOL paletteDragging;
@property(readonly, nonatomic, getter=isPaletteMinimized) BOOL paletteMinimized;
@property(readonly, nonatomic) UIView *hostingView;
- (void)paletteViewShowFeedbackForToolChange:(PKPaletteView *)arg1;
- (void)paletteView:(PKPaletteView *)arg1 didChangeAnnotationSupport:(BOOL)arg2;
- (void)paletteView:(PKPaletteView *)arg1 didToggleAutoHideOption:(BOOL)arg2;
- (CGSize)paletteSizeForEdge:(NSUInteger)arg1;
@end

