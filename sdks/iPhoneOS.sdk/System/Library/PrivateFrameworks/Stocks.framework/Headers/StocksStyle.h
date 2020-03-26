//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface StocksStyle : NSObject
{
    UIColor *_chartHighlightColor;
    UIFont *_mainFont;
    UIFont *_chartLabelFont;
}

+ (id)sharedStyle;
// - (void).cxx_destruct;
- (id)boldFontOfSize:(double)arg1;
- (id)mediumFontOfSize:(double)arg1;
- (id)fontOfSize:(double)arg1;
- (id)lightFontOfSize:(double)arg1;
- (id)chartHighlightColor;
- (id)lossColor;
- (id)gainColor;
- (void)resetLocale;
- (id)init;

@end

