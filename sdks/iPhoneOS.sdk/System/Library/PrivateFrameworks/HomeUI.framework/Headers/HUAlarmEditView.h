//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIDatePicker, UITableView;

@interface HUAlarmEditView : UIView
{
    UITableView *_settingsTable;
    UIDatePicker *_timePicker;
}

@property(readonly, nonatomic) UIDatePicker *timePicker; // @synthesize timePicker=_timePicker;
@property(readonly, nonatomic) UITableView *settingsTable; // @synthesize settingsTable=_settingsTable;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

