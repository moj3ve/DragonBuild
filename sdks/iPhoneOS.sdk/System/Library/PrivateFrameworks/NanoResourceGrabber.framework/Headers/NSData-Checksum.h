//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (Checksum)
- (BOOL)matchesChecksumData:(id)arg1;
- (BOOL)matchesChecksum:(unsigned char [32])arg1;
- (void)checksumDataToChecksum:(unsigned char [32])arg1;
- (void)checksum:(unsigned char [32])arg1;
- (id)checksumData;
@end

