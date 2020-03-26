//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAgentNotificationListener-Protocol.h>

@protocol MTSystemStateDelegate;

@interface MTSystemStateListener : NSObject <MTAgentNotificationListener, MTAgentDiagnosticDelegate>
{
    BOOL _restoreDoneHandled;
    id <MTSystemStateDelegate> _delegate;
}

+ (id)_restoreNotification;
+ (BOOL)isSystemRestoreDone;
@property(nonatomic) BOOL restoreDoneHandled; // @synthesize restoreDoneHandled=_restoreDoneHandled;
@property(nonatomic) __weak id <MTSystemStateDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (id)liveDarwinNotifications;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)_handleF5Reset;
- (void)_handleRestoreDone;
- (void)_verifyRestoreDone;
- (BOOL)_checkIfRestoreDone;
- (BOOL)checkSystemReady;
- (id)initWithDelegate:(id)arg1;

@end

