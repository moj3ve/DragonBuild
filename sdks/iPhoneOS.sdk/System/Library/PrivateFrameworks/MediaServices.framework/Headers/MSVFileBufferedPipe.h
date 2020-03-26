//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSFileHandle, NSMutableSet, NSPipe;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MSVFileBufferedPipe : NSObject
{
    NSFileHandle *_writeBufferFileHandle;
    NSFileHandle *_readBufferFileHandle;
    NSPipe *_inputPipe;
    NSPipe *_outputPipe;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readyForData;
    BOOL _hasBufferedData;
    BOOL _readSourceClosed;
    NSData *_dataPendingWrite;
    unsigned int _dataPendingOffset;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_uniqueWriteErrors;
    long long _writeSourceState;
    NSFileHandle *_fileHandleForReading;
    NSFileHandle *_fileHandleForWriting;
}

+ (id)pipe;
@property(readonly, retain) NSFileHandle *fileHandleForWriting; // @synthesize fileHandleForWriting=_fileHandleForWriting;
@property(readonly, retain) NSFileHandle *fileHandleForReading; // @synthesize fileHandleForReading=_fileHandleForReading;
// - (void).cxx_destruct;
- (void)_writeBufferedData;
- (void)_inputReadyForReading:(NSUInteger)arg1;
- (void)_outputReadyForWriting:(NSUInteger)arg1;
- (void)_createBufferFiles;
- (id)init;

@end

