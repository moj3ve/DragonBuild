//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell
{
    UILabel *_introLabel;
    UILabel *_registrarLabel;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UILabel *registrarLabel; // @synthesize registrarLabel=_registrarLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
// - (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

