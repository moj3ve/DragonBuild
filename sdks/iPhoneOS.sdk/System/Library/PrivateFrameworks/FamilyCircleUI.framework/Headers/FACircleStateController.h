//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FARequestConfigurator, RUIStyle, UIViewController;

@interface FACircleStateController : NSObject
{
    FARequestConfigurator *_requestConfigurator;
    id /* CDUnknownBlockType */ _performOperationCompletion;
    UIViewController *_presenter;
    RUIStyle *_customRUIStyle;
}

@property(retain, nonatomic) RUIStyle *customRUIStyle; // @synthesize customRUIStyle=_customRUIStyle;
@property(nonatomic) __weak UIViewController *presenter; // @synthesize presenter=_presenter;
// - (void).cxx_destruct;
- (void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_presentViewServiceWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_contextRequiresRemoteService:(id)arg1;
- (void)_ensurePresenterWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)performOperationWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithPresenter:(id)arg1;
- (id)init;

@end

