//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MFBrush, MFFont, MFPalette, MFPath, MFPen, MFTransform, NSMutableArray, OITSUColor;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFDeviceContext : NSObject <NSCopying>
{
    NSObject<MFDeviceDriver> *m_driver;
    BOOL m_textUpdateCP;
    double m_miterLimit;
    int m_textHorizontalAlign;
    int m_textVerticalAlign;
    int m_textDirection;
    MFFont *m_font;
    OITSUColor *m_textColour;
    int m_textBreakExtra;
    int m_textBreakCount;
    int m_textCharExtra;
    OITSUColor *m_bkColour;
    int m_bkMode;
    CGPoint m_brushOrg;
    CGPoint m_penPos;
    int m_arcDirection;
    int m_polyFillMode;
    MFTransform *m_transform;
    MFPen *m_pen;
    MFBrush *m_brush;
    MFPalette *m_selectedPalette;
    int m_rop2;
    int m_stretchMode;
    NSMutableArray *m_clippingPaths;
    BOOL m_clippingIsRestarted;
    MFPath *m_path;
}

+ (id)deviceContextWithDriver:(id)arg1;
@property(nonatomic) BOOL clippingIsRestarted; // @synthesize clippingIsRestarted=m_clippingIsRestarted;
@property(readonly, nonatomic) NSMutableArray *clippingPaths; // @synthesize clippingPaths=m_clippingPaths;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)setRop2:(int)arg1;
- (int)getRop2;
- (void)setBrush:(id)arg1;
- (id)getBrush;
- (void)setPen:(id)arg1;
- (id)getPen;
- (void)setSelectedPalette:(id)arg1;
- (id)getSelectedPalette;
- (void)setPath:(id)arg1;
- (id)getPath;
- (id)getCurrentTransform;
- (void)setCurrentTransform:(id)arg1;
- (int)getStretchBltMode;
- (void)setStretchBltMode:(int)arg1;
- (int)getPolyFillMode;
- (void)setPolyFillMode:(int)arg1;
- (int)getArcDirection;
- (void)setArcDirection:(int)arg1;
- (id)getFont;
- (void)setFont:(id)arg1;
- (CGPoint)getBrushOrg;
- (void)setBrushOrg:(CGPoint)arg1;
- (int)getBkMode;
- (void)setBkMode:(int)arg1;
- (id)getBkColour;
- (void)setBkColour:(id)arg1;
- (int)getTextCharExtra;
- (void)setTextCharExtra:(int)arg1;
- (int)getTextBreakCount;
- (int)getTextBreakExtra;
- (void)setTextJustification:(int)arg1 in_breakCount:(int)arg2;
- (id)getTextColour;
- (void)setTextColour:(id)arg1;
- (int)getTextDirection;
- (void)setTextDirection:(int)arg1;
- (int)getTextVerticalAlign;
- (void)setTextVerticalAlign:(int)arg1;
- (int)getTextHorizontalAlign;
- (void)setTextHorizontalAlign:(int)arg1;
- (double)getMiterLimit;
- (void)setMiterLimit:(double)arg1;
- (BOOL)getTextUpdateCP;
- (void)setTextUpdateCP:(BOOL)arg1;
- (void)setPenPosition:(CGPoint)arg1;
- (CGPoint)getPenPosition;
- (id)initWithDriver:(id)arg1;

@end

