//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPZone.h>

__attribute__((visibility("hidden")))
@interface CPRotation : CPZone
{
    double rotationAngle;
}

- (CGRect)renderedBounds;
- (CGRect)bounds;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg1;
- (void)accept:(id)arg1;
- (id)init;

@end

