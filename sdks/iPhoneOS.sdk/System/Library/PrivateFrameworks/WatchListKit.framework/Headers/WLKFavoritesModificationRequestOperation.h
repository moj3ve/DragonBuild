//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKFavoritesModificationRequestOperation : WLKUTSNetworkRequestOperation
{
    NSUInteger _action;
    NSString *_entityID;
}

@property(readonly, copy, nonatomic) NSString *entityID; // @synthesize entityID=_entityID;
@property(readonly, nonatomic) NSUInteger action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)processResponse;
- (id)initWithAction:(NSUInteger)arg1 entityId:(id)arg2 caller:(id)arg3;

@end

