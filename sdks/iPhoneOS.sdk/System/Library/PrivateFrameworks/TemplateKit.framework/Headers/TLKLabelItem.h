//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TemplateKit/TLKGridArrangementItem-Protocol.h>

@class NSString, NUISizeCache, TLKRichText;

__attribute__((visibility("hidden")))
@interface TLKLabelItem : NSObject <TLKGridArrangementItem>
{
    NSUInteger row;
    double horizontalHuggingPriority;
    double horizontalCompressionResistance;
    NUISizeCache *sizeCache;
    TLKRichText *_richText;
    _NSRange columnRange;
    CGRect frame;
}

+ (id)font;
+ (double)minimumWidthForLabelItem;
+ (void)setFontValues;
+ (void)initialize;
@property(retain, nonatomic) TLKRichText *richText; // @synthesize richText=_richText;
@property(retain, nonatomic) NUISizeCache *sizeCache; // @synthesize sizeCache;
@property(nonatomic) double horizontalCompressionResistance; // @synthesize horizontalCompressionResistance;
@property(nonatomic) double horizontalHuggingPriority; // @synthesize horizontalHuggingPriority;
@property(nonatomic) NSUInteger row; // @synthesize row;
@property(nonatomic) _NSRange columnRange; // @synthesize columnRange;
@property(nonatomic) CGRect frame;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)attributedString;
- (CGSize)sizeForTargetSize:(CGSize)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (id)init;

@end

