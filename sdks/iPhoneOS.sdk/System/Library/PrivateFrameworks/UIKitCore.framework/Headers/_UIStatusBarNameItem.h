//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class NSString, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarNameItem : _UIStatusBarItem
{
    NSString *_nameEntryKey;
    _UIStatusBarStringView *_nameView;
}

@property(retain, nonatomic) _UIStatusBarStringView *nameView; // @synthesize nameView=_nameView;
@property(readonly, nonatomic) NSString *nameEntryKey; // @synthesize nameEntryKey=_nameEntryKey;
// - (void).cxx_destruct;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_nameView;
- (id)dependentEntryKeys;

@end

