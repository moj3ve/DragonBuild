//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarsDaemon-Protocol.h>
#import <AvatarUI/AVTAvatarsDaemonServer-Protocol.h>

@class NSXPCListener;
@protocol AVTAvatarsDaemonServerDelegate, AVTUILogger;

@interface AVTAvatarsDaemonServer : NSObject <NSXPCListenerDelegate, AVTAvatarsDaemon, AVTAvatarsDaemonServer>
{
    id <AVTAvatarsDaemonServerDelegate> delegate;
    NSXPCListener *_listener;
    id <AVTUILogger> _logger;
}

@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic) __weak id <AVTAvatarsDaemonServerDelegate> delegate; // @synthesize delegate;
// - (void).cxx_destruct;
- (void)checkIn;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startListening;
- (id)initWithListener:(id)arg1 logger:(id)arg2;
- (id)initWithLogger:(id)arg1;

@end

