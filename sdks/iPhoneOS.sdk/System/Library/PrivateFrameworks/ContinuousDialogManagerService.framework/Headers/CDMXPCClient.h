//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContinuousDialogManagerService/CDMXPCListenerService-Protocol.h>
#import <ContinuousDialogManagerService/CDMXPCListenerServiceDelegate-Protocol.h>

@class NSXPCConnection;
@protocol CDMXPCClientDelegate;

@interface CDMXPCClient : NSObject <CDMXPCListenerServiceDelegate, CDMXPCListenerService>
{
    NSXPCConnection *_connection;
    id <CDMXPCClientDelegate> _delegate;
}

// - (void).cxx_destruct;
- (void)handleServiceAceUpdate:(id)arg1;
- (void)handleClientAceUpdate:(id)arg1;
- (id)_remoteObjectProxy;
- (void)_clearConnectionWithError:(id)arg1;
- (id)_connection;
- (void)disconnect;
- (void)connect;
- (id)initWithDelegate:(id)arg1;

@end

