//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CKAcknowledgmentGlyphView, CKMessageAcknowledgmentDraftDescriptor, UIButton;
@protocol CKMessageAcknowledgmentPickerBarItemViewDelegate;

__attribute__((visibility("hidden")))
@interface CKMessageAcknowledgmentPickerBarItemView : UIView
{
    BOOL _selected;
    long long _messageAcknowledgmentType;
    id <CKMessageAcknowledgmentPickerBarItemViewDelegate> _delegate;
    CKAcknowledgmentGlyphView *_acknowledgmentGlyphView;
    UIButton *_itemButton;
    CKMessageAcknowledgmentDraftDescriptor *_draft;
}

@property(readonly, nonatomic) CKMessageAcknowledgmentDraftDescriptor *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) UIButton *itemButton; // @synthesize itemButton=_itemButton;
@property(readonly, nonatomic) CKAcknowledgmentGlyphView *acknowledgmentGlyphView; // @synthesize acknowledgmentGlyphView=_acknowledgmentGlyphView;
@property(nonatomic) __weak id <CKMessageAcknowledgmentPickerBarItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long messageAcknowledgmentType; // @synthesize messageAcknowledgmentType=_messageAcknowledgmentType;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL displaySelected;
- (void)layoutSubviews;
- (void)itemButtonTapped:(id)arg1;
- (void)configureWithMessageAcknowledgmentDescriptor:(id)arg1 initiallySelected:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

