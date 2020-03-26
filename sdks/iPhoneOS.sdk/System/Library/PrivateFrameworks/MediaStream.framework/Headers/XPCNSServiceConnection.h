//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaStream/XPCServiceConnectionDelegate-Protocol.h>

@class NSString, XPCServiceConnection;
@protocol NSObject, XPCNSServiceConnectionDelegate;

@interface XPCNSServiceConnection : NSObject <XPCServiceConnectionDelegate>
{
    XPCServiceConnection *_serviceConnection;
    id <XPCNSServiceConnectionDelegate> _delegate;
    id <NSObject> _context;
}

@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(nonatomic) __weak id <XPCNSServiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)shutDownCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)XPCServiceConnectionDidDisconnect:(id)arg1;
- (void)XPCServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(NSUInteger)arg3;
@property(readonly, retain, nonatomic) NSString *serviceName;
- (void)sendMessage:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithXPCServiceConnection:(id)arg1;

@end

