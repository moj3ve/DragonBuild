//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKHealthPrivacyServicePromptController-Protocol.h>

@class HKClinicalAuthorizationHeaderView, HKClinicalAuthorizationSequenceContext, UITableView;
@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationIntroViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>
{
    id <HKHealthPrivacyServicePromptControllerDelegate> _delegate;
    HKClinicalAuthorizationSequenceContext *_context;
    UITableView *_tableView;
    HKClinicalAuthorizationHeaderView *_headerView;
}

@property(readonly, nonatomic) HKClinicalAuthorizationHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <HKHealthPrivacyServicePromptControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_viewHealthRecordsCellTapped:(id)arg1;
- (void)_nextButtonPressed:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_cellForViewHealthRecordsAtIndexPath:(id)arg1;
- (id)_cellForDetailsAtIndexPath:(id)arg1;
- (long long)_rowFromIndexPath:(id)arg1;
- (BOOL)_indexPathIsValidRow:(id)arg1;
- (id)_createFooterView;
- (void)_configureHeaderViewWithSource:(id)arg1;
- (void)_configureNavigationItem;
- (void)_configureTableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

