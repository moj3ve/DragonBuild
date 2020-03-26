//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppleAccountUI/AAUISwitchTableViewCellDelegate-Protocol.h>

@class AAUIBuddyView, AAUIHeaderView, NSArray, NSDictionary, UITableView, _AAUIDataclassOptionCache;
@protocol AAUIDataclassPickerViewControllerDelegate;

@interface AAUIDataclassPickerViewController : UIViewController <AAUISwitchTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate, NSCoding, NSSecureCoding>
{
    AAUIHeaderView *_tableHeaderView;
    UITableView *_tableView;
    AAUIBuddyView *_tableFooterView;
    NSArray *_compactConstraints;
    NSArray *_expandedConstraints;
    _AAUIDataclassOptionCache *_dataclassOptionCache;
    id <AAUIDataclassPickerViewControllerDelegate> _delegate;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak id <AAUIDataclassPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateConstraintsForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (double)_compressedHeightForView:(id)arg1 containedInView:(id)arg2;
- (double)heightForFooterInTableView:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)switchTableViewCellDidUpdateValue:(id)arg1;
- (void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)arg1;
- (void)_delegate_signOutViewControllerDidCancel;
- (void)_dismissAdditionalInformation:(id)arg1;
- (void)_additionalInformationSelected:(id)arg1;
- (void)_nextButtonSelected:(id)arg1;
- (void)_cancelButtonSelected:(id)arg1;
- (id)_signOutFooterText;
- (id)_tableFooterView;
- (id)_tableView;
- (id)_tableHeaderView;
- (id)_nextBarButtonItem;
- (id)_cancelBarButtonItem;
@property(copy, nonatomic) NSDictionary *dataclassOptions;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDataclassOptions:(NSDictionary )arg1;

@end

