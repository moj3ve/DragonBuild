//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, WebScriptObject;

__attribute__((visibility("hidden")))
@interface SKScriptStoreSheetRequest : SUScriptObject
{
    long long _pageStyle;
    WebScriptObject *_productParameters;
    NSString *_productURL;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char )arg1;
// - (void).cxx_destruct;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_safeValueForValue:(id)arg1;
@property(readonly) long long productPageStylePhone;
@property(readonly) long long productPageStylePad;
@property(readonly) long long productPageStyleBanner;
@property(readonly) long long productPageStyleAutomatic;
@property(retain) NSString *productURL;
@property(retain) WebScriptObject *productParameters;
@property long long productPageStyle;
- (id)_className;
- (id)newNativeStorePageRequest;

@end

