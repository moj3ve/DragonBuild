//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/SFUInputStream-Protocol.h>
#import <iWorkImport/TSUStreamReadChannel-Protocol.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPDatabaseInputStream : NSObject <TSUStreamReadChannel, SFUInputStream>
{
    NSObject<OS_dispatch_queue> *_readQueue;
    struct sqlite3_blob _blob;
    int _offset;
    int _length;
}

// - (void).cxx_destruct;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (long long)offset;
- (void)readWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithBlob:(struct sqlite3_blob )arg1;

@end

