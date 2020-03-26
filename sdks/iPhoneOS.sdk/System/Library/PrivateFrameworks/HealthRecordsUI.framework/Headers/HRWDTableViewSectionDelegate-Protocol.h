//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HRProfile, NSIndexPath, UITableView, UITableViewCell, UIViewController;

@protocol HRWDTableViewSectionDelegate <NSObject>
@property(retain) UITableView *tableView;
@property(retain) HRProfile *profile;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)sectionAddedChildViewController:(UIViewController *)arg1;
- (void)pushViewController:(UIViewController *)arg1;
- (void)reloadTable;
- (void)reloadSection:(NSUInteger)arg1 animated:(BOOL)arg2;
- (NSIndexPath *)indexPathForCell:(UITableViewCell *)arg1;
@end

