//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol TXRBuffer;

@protocol TXRBufferAllocator <NSObject>
- (id <TXRBuffer>)newBufferWithLength:(NSUInteger)arg1;

@optional
- (id <TXRBuffer>)newBufferWithBytesNoCopy:(void )arg1 length:(NSUInteger)arg2 deallocNotification:(void (^)(void , NSUInteger))arg3 error:(id )arg4;
@end

