//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class CNGeminiBadge, UILabel;

@interface TSCellularPlanUsesTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    CNGeminiBadge *_badge;
}

@property(retain) CNGeminiBadge *badge; // @synthesize badge=_badge;
@property(retain) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)setLabel:(id)arg1 description:(id)arg2 badge:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

