//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIInputViewElement.h>

@class NSString, SKUIViewElementText;

__attribute__((visibility("hidden")))
@interface SKUISearchBarViewElement : SKUIInputViewElement
{
    NSString *_accessoryText;
    SKUIViewElementText *_defaultText;
    NSString *_placeholderString;
    NSString *_searchHintsURLString;
    NSString *_trendingSearchURLString;
}

@property(readonly, nonatomic) NSString *trendingSearchURLString; // @synthesize trendingSearchURLString=_trendingSearchURLString;
@property(readonly, nonatomic) NSString *searchHintsURLString; // @synthesize searchHintsURLString=_searchHintsURLString;
@property(readonly, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property(readonly, nonatomic) SKUIViewElementText *defaultText; // @synthesize defaultText=_defaultText;
@property(readonly, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
// - (void).cxx_destruct;
- (long long)pageComponentType;
- (NSUInteger)elementType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

