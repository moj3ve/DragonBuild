//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIKBKeyplaneChangeContext;
@protocol _UIRemoteKeyboardControllerDelegate;

@protocol _UIRemoteKeyboardViewSource <NSObject>
@property(nonatomic) BOOL dontDismissReachability;
@property(readonly, nonatomic) BOOL isOnScreenRotating;
@property(retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate;
- (void)updateForKeyplaneChangeWithContext:(UIKBKeyplaneChangeContext *)arg1;
- (void)checkPlaceholdersForRemoteKeyboards;
@end

