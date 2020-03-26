//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLViewModel-Protocol.h>

@class FLFollowUpController, FLItemChangeObserver, NSString;

@interface FLTopLevelViewModel : NSObject <FLViewModel>
{
    FLFollowUpController *_controller;
    FLItemChangeObserver *_observer;
    NSString *_bundleIdentifier;
    NSString *_localizedDeviceRowTitle;
}

+ (id)_prefixFromBundleIdentifier:(id)arg1;
+ (id)redirectURLForItem:(id)arg1 withAction:(id)arg2;
@property(copy, nonatomic) NSString *localizedDeviceRowTitle; // @synthesize localizedDeviceRowTitle=_localizedDeviceRowTitle;
// - (void).cxx_destruct;
- (void)setItemChangeHandler:(id /* CDUnknownBlockType */)arg1;
- (void)mapItemsToGroups:(id)arg1;
- (id)groups;
- (BOOL)allPendingItemsContains:(id)arg1;
- (void)_refreshItemsWithExtensionToItemMap:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)extensionToItemMapFromItems:(id)arg1;
- (void)refreshItems:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)refreshItemsForItem:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)allPendingItems;
- (id)initWithBundleIdentifier:(id)arg1 controller:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 clientIdentifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

