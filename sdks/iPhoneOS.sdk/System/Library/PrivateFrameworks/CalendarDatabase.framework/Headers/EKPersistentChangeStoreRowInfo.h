//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EKPersistentChangeStoreRowInfo : NSObject
{
    int _consumedSequenceNumber;
    NSString *_clientIdentifier;
}

@property(nonatomic) int consumedSequenceNumber; // @synthesize consumedSequenceNumber=_consumedSequenceNumber;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
// - (void).cxx_destruct;
- (id)description;

@end

