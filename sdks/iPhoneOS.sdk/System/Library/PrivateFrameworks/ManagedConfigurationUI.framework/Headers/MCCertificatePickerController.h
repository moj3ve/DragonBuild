//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListItemsController.h>

__attribute__((visibility("hidden")))
@interface MCCertificatePickerController : PSListItemsController
{
}

- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setRowToSelect;
- (id)specifiers;
- (void)_setCellPropertiesOnSpecifier:(id)arg1 forCertificate:(struct __SecCertificate )arg2;
- (id)navigationTitle;

@end

