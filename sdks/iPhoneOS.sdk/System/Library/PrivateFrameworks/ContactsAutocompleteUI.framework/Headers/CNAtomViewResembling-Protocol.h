//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIFont;

@protocol CNAtomViewResembling <NSObject>
@property(retain, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) UIEdgeInsets edgeInsets;
@property(readonly, nonatomic) CGPoint baselinePoint;
@property(nonatomic) NSUInteger presentationOptions;
@property(nonatomic) int separatorStyle;
@property(nonatomic) double scale;
@property(nonatomic) BOOL separatorIsLeftAligned;
@property(nonatomic) BOOL separatorHidden;
@property(nonatomic) BOOL hidesVIPIndicator;
@property(nonatomic) BOOL isPrimaryAddressAtom;
- (void)performBuildInAnimationFromTextColor:(UIColor *)arg1 withDuration:(double)arg2;
@end

