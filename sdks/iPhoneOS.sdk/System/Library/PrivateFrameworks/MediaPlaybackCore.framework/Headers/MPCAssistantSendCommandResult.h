//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface MPCAssistantSendCommandResult : NSObject
{
    NSArray *_returnStatuses;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *returnStatuses; // @synthesize returnStatuses=_returnStatuses;
// - (void).cxx_destruct;
- (id)initWithReturnStatuses:(id)arg1 error:(id)arg2;

@end

