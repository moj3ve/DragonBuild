//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class MCBook, MCUIProfile;

__attribute__((visibility("hidden")))
@interface MCManagedMediaDetailsViewController : UITableViewController <PSStateRestoration>
{
    MCUIProfile *_UIProfile;
    MCBook *_managedBook;
}

@property(retain, nonatomic) MCBook *managedBook; // @synthesize managedBook=_managedBook;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
// - (void).cxx_destruct;
- (void)_profileChanged:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setup;
- (id)initWithUIProfile:(id)arg1 managedBook:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end

