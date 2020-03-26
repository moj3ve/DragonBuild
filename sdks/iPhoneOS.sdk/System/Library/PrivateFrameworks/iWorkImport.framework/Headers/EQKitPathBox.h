//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitBox.h>

__attribute__((visibility("hidden")))
@interface EQKitPathBox : EQKitBox
{
    CGPath mCGPath;
    double mHeight;
    double mPaddingLeft;
    double mPaddingRight;
    double mDepth;
    double mWidth;
    BOOL mDimensionsValid;
    CGRect mErasableBounds;
    BOOL mErasableBoundsValid;
    CGColor mCGColor;
    int mDrawingMode;
    double mLineWidth;
}

@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=mLineWidth;
@property(readonly, nonatomic) int drawingMode; // @synthesize drawingMode=mDrawingMode;
@property(readonly, nonatomic) CGColor color; // @synthesize color=mCGColor;
@property(readonly, nonatomic) double paddingRight; // @synthesize paddingRight=mPaddingRight;
@property(readonly, nonatomic) double paddingLeft; // @synthesize paddingLeft=mPaddingLeft;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
@property(readonly, nonatomic) CGPath cgPath; // @synthesize cgPath=mCGPath;
- (CGRect)p_cacheErasableBounds;
- (void)p_cacheDimensions;
- (id)description;
- (BOOL)appendOpticalAlignToSpec:(struct Spec )arg1 offset:(CGPoint)arg2;
- (void)renderIntoContext:(CGContext )arg1 offset:(CGPoint)arg2;
- (CGRect)erasableBounds;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCGPath:(CGPath )arg1 height:(double)arg2 cgColor:(CGColor )arg3 drawingMode:(int)arg4 lineWidth:(double)arg5;
- (id)initWithCGPath:(CGPath )arg1 height:(double)arg2 cgColor:(CGColor )arg3;
- (id)initWithCGPath:(CGPath )arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(CGColor )arg5;
- (id)initWithCGPath:(CGPath )arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(CGColor )arg5 drawingMode:(int)arg6 lineWidth:(double)arg7;

@end

