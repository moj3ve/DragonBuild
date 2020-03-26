//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _UIActivityItemCustomization : NSObject
{
    BOOL _enabled;
    NSString *_title;
    NSString *_footerText;
    NSString *_identifier;
}

+ (id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
+ (id)pickerCustomizationWithIdentifier:(id)arg1 options:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4 valueChangedHandler:(id /* CDUnknownBlockType */)arg5;
+ (id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 value:(BOOL)arg4 valueChangedHandler:(id /* CDUnknownBlockType */)arg5;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3;

@end

