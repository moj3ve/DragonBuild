//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GKChallengeInternal, GKGame, GKPlayer, NSString;

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding>
{
    GKChallengeInternal *_internal;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)loadReceivedChallengesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
+ (void)getCountOfChallenges:(id /* CDUnknownBlockType */)arg1;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;
+ (id)challengeForInternalRepresentation:(id)arg1;
+ (id)stringForState:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain) GKChallengeInternal *internal; // @synthesize internal=_internal;
- (void)loadDetailsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) BOOL detailsLoaded;
- (id)infoTextForIssuingPlayer:(id)arg1;
- (void)loadUIDetailsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)hasLoadedUIDetails;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, copy, nonatomic) GKPlayer *receivingPlayer; // @dynamic receivingPlayer;
@property(readonly, copy, nonatomic) GKPlayer *issuingPlayer; // @dynamic issuingPlayer;
@property(readonly, copy, nonatomic) NSString *receivingPlayerID;
@property(readonly, copy, nonatomic) NSString *issuingPlayerID;
@property(readonly, nonatomic) GKGame *game; // @dynamic game;
- (void)decline;
- (void)declineWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)issueToPlayers:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

