//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _CUIRawDataRendition : CUIThemeRendition
{
    NSData *_dataBytes;
}

- (id)data;
- (int)pixelFormat;
- (id)_initWithCSIHeader:(const struct _csiheader )arg1;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken )arg2 artworkStatus:(long long)arg3;

@end

