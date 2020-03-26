//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>

@class NSArray, NSDateComponentsFormatter, PKPaymentPass, PKPaymentPassAction, PKPaymentWebService;
@protocol PKPaymentDataProvider;

@interface PKCommutePlanDetailsViewController : PKSectionTableViewController <PKPerformActionViewControllerDelegate>
{
    long long _style;
    NSArray *_fields;
    PKPaymentPass *_pass;
    id <PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    NSArray *_reminderIntervals;
    NSUInteger _selectedReminderIntervalsIndex;
    BOOL _shouldLoadReminderInterval;
    PKPaymentPassAction *_action;
    NSDateComponentsFormatter *_timeIntervalFormatter;
    BOOL _canShowReminders;
}

// - (void).cxx_destruct;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateSelectedReminderIntervalsIndexWithInterval:(double)arg1;
- (void)_handleActionSelected;
- (void)_handleReminderIntervalChanged:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldMapSection:(NSUInteger)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithSuicaFields:(id)arg1 forPass:(id)arg2 associatedAction:(id)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 style:(long long)arg6;

@end

