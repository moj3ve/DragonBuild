//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

__attribute__((visibility("hidden")))
@interface GQDAffineGeometry : NSObject <GQDNameMappable>
{
    CGSize mNaturalSize;
    CGSize mSize;
    BOOL mSizesLocked;
    BOOL mAspectRatioLocked;
    CGPoint mPosition;
    float mAngle;
    BOOL mHorizontalFlip;
    BOOL mVerticalFlip;
    float mShearXAngle;
    float mShearYAngle;
}

+ (CGRect)boundsOfTransformedRect:(CGRect)arg1 transform:(id)arg2;
+ (void)transformRect:(CGRect)arg1 transform:(id)arg2 upperLeft:(CGPoint )arg3 lowerLeft:(CGPoint )arg4 lowerRight:(CGPoint )arg5 upperRight:(CGPoint )arg6;
+ (const struct StateSpec )stateForReading;
- (CGAffineTransform)transformHasVFlip:(BOOL)arg1 vFlip:(BOOL)arg2 hasHFlip:(BOOL)arg3 hFlip:(BOOL)arg4;
- (CGAffineTransform)transform;
- (CGRect)naturalBounds;
- (CGPoint)nonrotatedPosition;
- (CGSize)sizeOfBoundingBox;
- (void)setShearYAngle:(float)arg1;
- (float)shearYAngle;
- (void)setShearXAngle:(float)arg1;
- (float)shearXAngle;
- (void)setVerticalFlip:(BOOL)arg1;
- (BOOL)verticalFlip;
- (void)setHorizontalFlip:(BOOL)arg1;
- (BOOL)horizontalFlip;
- (void)setAngle:(float)arg1;
- (float)angle;
- (void)setPosition:(CGPoint)arg1;
- (CGPoint)position;
- (void)setAspectRatioLocked:(BOOL)arg1;
- (BOOL)aspectRatioLocked;
- (void)setSizesLocked:(BOOL)arg1;
- (BOOL)sizesLocked;
- (void)setSize:(CGSize)arg1;
- (CGSize)size;
- (void)setNaturalSize:(CGSize)arg1;
- (CGSize)naturalSize;
- (int)readAttributesFromReader:(struct _xmlTextReader )arg1;

@end

