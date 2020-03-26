//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKContentContainerObserver-Protocol.h>
#import <PassKitUI/PKViewWindowObserver-Protocol.h>

@class PKCompactNavigationContainedNavigationController, PKWrapperViewController, UITapGestureRecognizer, UIView;
@protocol PKCompactNavigationContainerControllerDelegate, UICoordinateSpace;

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver, PKViewWindowObserver>
{
    BOOL _centeredCard;
    BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
    NSUInteger _explicitlyDefinedSupportedInterfaceOrientations;
    BOOL _requiresMasking;
    UIView *_maskingContainerView;
    CGRect _maximumModalPresentationFrame;
    PKWrapperViewController *_presentationContextVC;
    CDStruct_47050b7f _topVCInfo;
    CGRect _statusBarFrame;
    unsigned short _layoutGroupCounter;
    unsigned short _contentSizeUpdateDeferralCounter;
    BOOL _deferredContentSizeUpdate;
    BOOL _deferredContentSizeUpdateIsAnimated;
    BOOL _deferredContentSizeUpdateIsForced;
    UIViewController *_topVC;
    BOOL _topVCIsExpectedClass;
    BOOL _topVCIsInInitialLayout;
    UIViewController *_pendingTopVC;
    NSUInteger _pendingTopVCIdentifier;
    NSUInteger _updateChildViewControllerSizeCounter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned char _visibility;
    BOOL _keyboardVisible;
    CGRect _keyboardFrame;
    CGRect _lastKeyboardFrame;
    BOOL _didMoveToWindowDirtiesLayout;
    BOOL _presentingNavigationController;
    PKCompactNavigationContainedNavigationController *_containedNavigationController;
    NSUInteger _style;
    id <UICoordinateSpace> _exclusionCoordinateSpace;
    id <PKCompactNavigationContainerControllerDelegate> _delegate;
    CGRect _exclusionRect;
}

+ (id)dimmingColor;
@property(nonatomic, getter=isPresentingNavigationController) BOOL presentingNavigationController; // @synthesize presentingNavigationController=_presentingNavigationController;
@property(nonatomic) __weak id <PKCompactNavigationContainerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <UICoordinateSpace> exclusionCoordinateSpace; // @synthesize exclusionCoordinateSpace=_exclusionCoordinateSpace;
@property(readonly, nonatomic) CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
@property(readonly, nonatomic) NSUInteger style; // @synthesize style=_style;
@property(readonly, nonatomic) PKCompactNavigationContainedNavigationController *containedNavigationController; // @synthesize containedNavigationController=_containedNavigationController;
@property(nonatomic) BOOL didMoveToWindowDirtiesLayout; // @synthesize didMoveToWindowDirtiesLayout=_didMoveToWindowDirtiesLayout;
// - (void).cxx_destruct;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (long long)preferredUserInterfaceStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)_updateLayoutForKeyboardAction:(id /* CDUnknownBlockType */)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_updateForKeyboardIfNecessary;
- (void)tapGestureRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_updateStatusBarFrame;
- (void)observedView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2;
- (CGSize)_navigationControllerSizeForChildViewControllerInfo:(CDStruct_47050b7f)arg1 withCurrentInfo:(CDStruct_47050b7f)arg2;
- (CDStruct_47050b7f)_infoForViewController:(id)arg1;
- (void)_updateTopViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_updateTopViewControllerAsync:(id)arg1 animated:(BOOL)arg2;
- (void)updateChildViewControllerSizeAnimated:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)updateChildViewControllerSizeAnimated:(BOOL)arg1;
- (id)_backgroundColor;
- (void)setExclusionRect:(CGRect)arg1 withCoordinateSpace:(id)arg2;
- (void)setSupportedInterfaceOrientations:(NSUInteger)arg1;
- (NSUInteger)supportedInterfaceOrientations;
- (CGSize)modalPresentationSize;
- (CGSize)childViewControllerSizeForNavigationControllerSize:(CGSize)arg1;
- (CGSize)navigationControllerSizeForChildViewControllerPreferredContentSize:(CGSize)arg1 isRoot:(BOOL)arg2;
- (CGSize)childViewControllerPreferredContentSizeForSize:(CGSize)arg1 isRoot:(BOOL)arg2;
- (void)insertBackgroundLevelView:(id)arg1;
- (void)_endLayoutGroup;
- (void)_beginLayoutGroup;
- (CGRect)_targetNavigationControllerFrameForInfo:(CDStruct_47050b7f)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1 style:(NSUInteger)arg2;
- (id)initWithNavigationController:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

