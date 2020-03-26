//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCSessionDelegate-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionManager : NSObject <VCSessionDelegate>
{
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
- (id)participantConfigFromXPCDictionary:(id)arg1;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (void)vcSession:(id)arg1 participantID:(id)arg2 spatialAudioSourceIDDidChange:(NSUInteger)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 didChangeProminence:(unsigned char)arg3 description:(id)arg4;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(BOOL)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(BOOL)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(BOOL)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(BOOL)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 didStopWithError:(id)arg2;
- (void)vcSession:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
- (id)sessionForStreamToken:(unsigned int)arg1;
- (id)sessionForUUID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

