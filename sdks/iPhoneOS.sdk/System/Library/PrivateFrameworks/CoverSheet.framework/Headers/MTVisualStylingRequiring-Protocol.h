//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/MTVisualStylingProviding-Protocol.h>

@class MTVisualStylingProvider, NSArray;

@protocol MTVisualStylingRequiring <MTVisualStylingProviding>
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 forCategory:(long long)arg2;
@end

