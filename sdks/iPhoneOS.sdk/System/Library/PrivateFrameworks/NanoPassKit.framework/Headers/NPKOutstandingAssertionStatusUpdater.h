//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NPKProvisioningServiceAgentStatusUpdater.h>

@class NSUUID;

@interface NPKOutstandingAssertionStatusUpdater : NPKProvisioningServiceAgentStatusUpdater
{
    int _assertType;
    NSUUID *_assertionUUID;
}

@property(nonatomic) int assertType; // @synthesize assertType=_assertType;
@property(retain, nonatomic) NSUUID *assertionUUID; // @synthesize assertionUUID=_assertionUUID;
// - (void).cxx_destruct;

@end

