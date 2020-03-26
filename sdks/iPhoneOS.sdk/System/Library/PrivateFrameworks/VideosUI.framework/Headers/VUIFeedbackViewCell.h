//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class IKViewElement, VUIFeedbackView;

__attribute__((visibility("hidden")))
@interface VUIFeedbackViewCell : VUIFocusableCollectionViewCell
{
    IKViewElement *_viewElement;
    VUIFeedbackView *_cardView;
}

+ (id)configureViewWithElement:(id)arg1 existingCell:(id)arg2;
@property(retain, nonatomic) VUIFeedbackView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
- (void)_setupElements:(id)arg1 inCardView:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

