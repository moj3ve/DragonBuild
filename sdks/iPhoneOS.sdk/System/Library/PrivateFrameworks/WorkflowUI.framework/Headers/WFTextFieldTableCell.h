//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>


@class UILabel, UIStackView, UITextField, WFTextFieldTableItem;

@interface WFTextFieldTableCell : UITableViewCell <UITextFieldDelegate>
{
    UILabel *_textLabel;
    WFTextFieldTableItem *_tableItem;
    UIStackView *_stackView;
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak WFTextFieldTableItem *tableItem; // @synthesize tableItem=_tableItem;
- (id)textLabel;
// - (void).cxx_destruct;
- (void)textDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

