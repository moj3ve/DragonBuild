//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AMPCoreUI/AMPUserNotificationContentDelegate-Protocol.h>
#import <AMPCoreUI/UNNotificationContentExtension-Protocol.h>

@class AMPUserNotificationContentViewController;
@protocol AMSURLBagContract;

@interface AMPUserNotificationViewController : UIViewController <AMPUserNotificationContentDelegate, UNNotificationContentExtension>
{
    id <AMSURLBagContract> _bagContract;
    AMPUserNotificationContentViewController *_contentViewController;
}

+ (id)userNotificationFromNotification:(id)arg1;
@property(retain, nonatomic) AMPUserNotificationContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) id <AMSURLBagContract> bagContract; // @synthesize bagContract=_bagContract;
// - (void).cxx_destruct;
- (void)didReceiveNotificationResponse:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)didReceiveNotification:(id)arg1;
- (void)renderUserNotification:(id)arg1;
- (void)viewController:(id)arg1 didUpdatePreferredContentSize:(CGSize)arg2;
- (void)openNotification;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

