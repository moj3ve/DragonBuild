//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPLocationReadWriteServerProtocol-Protocol.h>

@interface PPLocationReadWriteServerRequestHandler : NSObject <PPLocationReadWriteServerProtocol>
{
}

- (void)clearWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)cloudSyncWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 completion:(id /* CDUnknownBlockType */)arg7;

@end

