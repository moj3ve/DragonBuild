//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXActionMenuController, PXActionPerformer, UIViewController;

@protocol PXActionMenuDelegate <NSObject>
- (BOOL)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 dismissViewController:(UIViewController *)arg3 completionHandler:(void (^)(void))arg4;
- (BOOL)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 presentViewController:(UIViewController *)arg3;

@optional
- (void)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 didChangeState:(NSUInteger)arg3;
@end

