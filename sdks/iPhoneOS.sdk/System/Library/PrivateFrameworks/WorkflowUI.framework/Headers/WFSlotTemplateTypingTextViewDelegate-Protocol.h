//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WFSlotTemplateTypingTextView;

@protocol WFSlotTemplateTypingTextViewDelegate <UITextViewDelegate>

@optional
- (void)slotTemplateTypingTextViewDidPaste:(WFSlotTemplateTypingTextView *)arg1 withOriginalBlock:(void (^)(void))arg2;
- (void)slotTemplateTypingTextViewDidCopy:(WFSlotTemplateTypingTextView *)arg1 withOriginalBlock:(void (^)(void))arg2;
- (void)slotTemplateTypingTextViewDidCut:(WFSlotTemplateTypingTextView *)arg1 withOriginalBlock:(void (^)(void))arg2;
- (void)slotTemplateTypingTextViewDidDelete:(WFSlotTemplateTypingTextView *)arg1;
@end

