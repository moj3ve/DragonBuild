//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIWindow, UIWindowScene;

@interface CKSceneDelegate : NSObject <UIWindowSceneDelegate>
{
    BOOL _handlingLaunchTask;
    UIWindowScene *_scene;
    UIWindow *_window;
}

+ (id)stateFromUserInfoDictionary:(id)arg1;
+ (id)userInfoDictionaryForState:(id)arg1;
+ (Class)containerClassForType:(long long)arg1;
@property(nonatomic, getter=isHandlingLaunchTask) BOOL handlingLaunchTask; // @synthesize handlingLaunchTask=_handlingLaunchTask;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) __weak UIWindowScene *scene; // @synthesize scene=_scene;
// - (void).cxx_destruct;
- (void)updateSceneTitleForConversation:(id)arg1;
- (id)predicateMatchingConversation:(id)arg1;
- (id)prefersToActivatePredicate;
- (id)canActivatePredicate;
- (void)updateSceneActivationConditions;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (id)stateRestorationActivityForScene:(id)arg1;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (long long)type;
- (id)init;

@end

