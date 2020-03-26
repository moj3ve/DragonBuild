//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSAnalyzedImageColors-Protocol.h>

@class SKUIJSColor;

__attribute__((visibility("hidden")))
@interface SKUIJSAnalyzedImageColors : IKJSObject <SKUIJSAnalyzedImageColors>
{
    SKUIJSColor *_backgroundColor;
    SKUIJSColor *_textPrimaryColor;
    SKUIJSColor *_textSecondaryColor;
    BOOL _isBackgroundLight;
}

@property(readonly, nonatomic) BOOL isBackgroundLight; // @synthesize isBackgroundLight=_isBackgroundLight;
@property(readonly, nonatomic) SKUIJSColor *textSecondaryColor; // @synthesize textSecondaryColor=_textSecondaryColor;
@property(readonly, nonatomic) SKUIJSColor *textPrimaryColor; // @synthesize textPrimaryColor=_textPrimaryColor;
@property(readonly, nonatomic) SKUIJSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
// - (void).cxx_destruct;
- (id)initWithAppContext:(id)arg1 analyzedImageColors:(id)arg2;

@end

