//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCMagazinesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
}

- (void)fetchNextUnseenGroupFromCursor:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)magazineFromCursor;
- (id)magazineFeedManager;
- (void)performOperation;
- (BOOL)validateOperation;

@end

