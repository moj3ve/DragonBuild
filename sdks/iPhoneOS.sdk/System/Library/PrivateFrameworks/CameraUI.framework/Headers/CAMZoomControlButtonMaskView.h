//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface CAMZoomControlButtonMaskView : UIView
{
    CAShapeLayer *__shapeLayer;
    CGRect _maskOvalFrame;
}

@property(readonly, nonatomic) CAShapeLayer *_shapeLayer; // @synthesize _shapeLayer=__shapeLayer;
@property(nonatomic) CGRect maskOvalFrame; // @synthesize maskOvalFrame=_maskOvalFrame;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

