//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CommunicationsSetupUI/RUIObjectModelDelegate-Protocol.h>

@class CNFRegController, CNFRegLoadingView, NSMutableArray, NSTimer, RUILoader, UIWebView;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, RUIObjectModelDelegate>
{
    CNFRegController *_regController;
    CNFRegLoadingView *_loadingView;
    NSTimer *_timeoutTimer;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    struct {
        unsigned int isLoading:1;
        unsigned int isLoaded:1;
        unsigned int wantsWifi:1;
        unsigned int modifiedWiFi:1;
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int checkedLogState:1;
        unsigned int shouldLog:1;
        unsigned int timedOut;
    } _webControllerFlags;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL timedOut; // @dynamic timedOut;
@property(readonly, nonatomic) BOOL isLoading; // @dynamic isLoading;
@property(readonly, nonatomic) BOOL isLoaded; // @dynamic isLoaded;
- (void)applicationWillSuspend;
- (void)_handleTimeout;
- (void)_timeoutFired:(id)arg1;
- (void)_stopTimeout;
- (void)_startTimeoutWithDuration:(double)arg1;
- (BOOL)canSendURLRequest:(id)arg1;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (id)overrideURLForURL:(id)arg1;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(NSUInteger)arg3;
- (void)cancelButtonPressed:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (void)_cleanupLoader;
- (void)loadURL:(id)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)setWantsWifi:(BOOL)arg1;
- (void)stopRequiringWifi;
- (void)startRequiringWifi;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_shouldLog;
- (id)logName;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)initWithRegController:(id)arg1;

@end

