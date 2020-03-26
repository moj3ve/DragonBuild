//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, NSString, UIControl, UILabel, UITextField, UIView;
@protocol UITextFieldDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGiftTextFieldTableViewCell : UITableViewCell
{
    UILabel *_label;
    UITextField *_textField;
    UIView *_topBorderView;
    BOOL _leftToRight;
}

@property(nonatomic) BOOL leftToRight; // @synthesize leftToRight=_leftToRight;
@property(readonly, nonatomic) UIControl *textField; // @synthesize textField=_textField;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) NSString *value;
@property(nonatomic) id <UITextFieldDelegate> textFieldDelegate;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) long long keyboardType;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

