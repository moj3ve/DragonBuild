//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSXPCConnection;

@interface PLRemoteDiagnosticsClient : NSObject <NSXPCListenerDelegate>
{
    NSXPCConnection *_connection;
}

+ (id)_connectionForListenerEndpoint:(id)arg1;
+ (id)diagnosticsAgentWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
// - (void).cxx_destruct;

@end

