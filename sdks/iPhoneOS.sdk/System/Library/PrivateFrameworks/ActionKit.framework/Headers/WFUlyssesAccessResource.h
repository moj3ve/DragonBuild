//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource
{
    ICScheme *_scheme;
}

+ (BOOL)refreshesAvailabilityOnApplicationResume;
@property(readonly, nonatomic) ICScheme *scheme; // @synthesize scheme=_scheme;
// - (void).cxx_destruct;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (id)associatedAppIdentifier;

@end

