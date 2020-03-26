//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OISFUCryptoKey : NSObject
{
    unsigned int mIterationCount;
    char mKey;
    NSUInteger mKeyLength;
    NSData *mSaltData;
    NSString *_passphrase;
}

@property(readonly, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
- (id)saltData;
- (NSUInteger)keyLength;
- (const char )keyData;
- (unsigned int)iterationCount;
- (int)keyType;
- (void)dealloc;
- (id)initAes128Key:(const char )arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(const char )arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3 saltData:(id)arg4;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2 saltData:(id)arg3;
- (id)initAes128KeyFromPassphrase:(const char )arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2;

@end

