//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFIVGenerator-Protocol.h>

@class NSData;

@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator>
{
    id _incrementingIVGeneratorInternal;
}

// - (void).cxx_destruct;
- (id)generateIVWithLength:(long long)arg1 error:(id )arg2;
@property(copy, nonatomic) NSData *messageID;
- (id)initWithMessageID:(id)arg1;
- (id)initWithRandomMessageID;
- (id)init;

@end

