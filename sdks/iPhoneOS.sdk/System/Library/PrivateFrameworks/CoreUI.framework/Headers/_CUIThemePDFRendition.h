//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

__attribute__((visibility("hidden")))
@interface _CUIThemePDFRendition : CUIThemeRendition
{
    CGPDFDocument _pdfDocument;
}

- (CGImage )createImageFromPDFRenditionWithScale:(double)arg1;
- (CGPDFDocument )pdfDocument;
- (id)metrics;
- (int)pixelFormat;
- (id)_initWithCSIHeader:(const struct _csiheader )arg1;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken )arg2 artworkStatus:(long long)arg3;

@end

