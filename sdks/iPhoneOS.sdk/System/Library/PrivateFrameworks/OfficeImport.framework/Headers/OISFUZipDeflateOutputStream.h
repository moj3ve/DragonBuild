//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUOutputStream-Protocol.h>

@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipDeflateOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mOutputStream;
    struct z_stream_s mDeflateStream;
    char mOutBuffer;
}

- (id)inputStream;
- (BOOL)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canSeek;
- (void)writeBuffer:(const char )arg1 size:(NSUInteger)arg2;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

@end

