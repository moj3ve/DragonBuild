//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDGradient.h>

#import <iWorkImport/TSDMixing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDTransformGradient : TSDGradient <TSDMixing>
{
    CGPoint mStart;
    CGPoint mEnd;
    CGSize mBaseNaturalSize;
    CGAffineTransform mTransformBeforeUpgrade;
}

@property(readonly, nonatomic) CGSize baseNaturalSize; // @synthesize baseNaturalSize=mBaseNaturalSize;
@property(readonly, nonatomic) CGPoint endPoint; // @synthesize endPoint=mEnd;
@property(readonly, nonatomic) CGPoint startPoint; // @synthesize startPoint=mStart;
- (void)p_drawQuartzShadingInContext:(CGContext )arg1 withGradientNaturalSize:(CGSize)arg2 baseNaturalSize:(CGSize)arg3 start:(CGPoint)arg4 end:(CGPoint)arg5;
- (CGPoint)p_scalePoint:(CGPoint)arg1 fromShapeWithNaturalSize:(CGSize)arg2;
- (CGPoint)p_scalePoint:(CGPoint)arg1 toShapeWithNaturalSize:(CGSize)arg2;
- (void)p_setDefaultValues;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (double)gradientAngleInDegrees;
- (CGSize)baseNaturalSizeForBounds:(CGRect)arg1;
- (CGPoint)endPointForPath:(id)arg1 andBounds:(CGRect)arg2;
- (CGPoint)startPointForPath:(id)arg1 andBounds:(CGRect)arg2;
- (CGAffineTransform)transformForSize:(CGSize)arg1;
- (void)paintPath:(CGPath )arg1 naturalBounds:(CGRect)arg2 inContext:(CGContext )arg3 isPDF:(BOOL)arg4;
- (void)paintPath:(CGPath )arg1 inContext:(CGContext )arg2;
- (void)paintRect:(CGRect)arg1 inContext:(CGContext )arg2;
- (void)paintRect:(CGRect)arg1 inContext:(CGContext )arg2 atAngle:(double)arg3;
- (void)p_setBaseNaturalSize:(CGSize)arg1;
- (void)p_setEndPoint:(CGPoint)arg1;
- (void)p_setStartPoint:(CGPoint)arg1;
- (CGPoint)normalizedPointForSize:(CGSize)arg1 endPoint:(BOOL)arg2;
- (BOOL)isAdvancedGradientIgnoringFlag;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (BOOL)isEqualIgnoringTransform:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (NSUInteger)hash;
- (id)initWithGradient:(id)arg1 inPath:(id)arg2 andBounds:(CGRect)arg3;
- (id)initWithGradientStops:(id)arg1 type:(NSUInteger)arg2;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(NSUInteger)arg3;
- (void)saveToArchive:(struct FillArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive )arg1 unarchiver:(id)arg2;

@end

