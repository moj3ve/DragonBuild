//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPowerAssertion.h>

@class NSDate, NSString, UMUserSwitchBlockingTask;

@interface MCMDMPowerAssertion : MCPowerAssertion
{
    NSString *_reason;
    NSDate *_creationDate;
    UMUserSwitchBlockingTask *_blockingTask;
}

+ (id)_dateFormatter;
+ (id)_currentAssertions;
+ (id)assertionDescriptions;
@property(retain, nonatomic) UMUserSwitchBlockingTask *blockingTask; // @synthesize blockingTask=_blockingTask;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithReason:(id)arg1;

@end

