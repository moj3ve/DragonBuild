//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSError;
@protocol TXRBuffer, TXRDataSourceProvider;

@interface TXRImage : NSObject <NSCopying>
{
    id <TXRBuffer> _buffer;
    NSUInteger _offset;
    NSUInteger _bytesPerImage;
    NSUInteger _bytesPerRow;
    NSError *_error;
    long long _face;
    NSUInteger _element;
    NSUInteger _level;
    id <TXRDataSourceProvider> _dataSourceProvider;
}

@property(readonly) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initAsLevel:(NSUInteger)arg1 element:(NSUInteger)arg2 face:(NSUInteger)arg3 dataSourceProvider:(id)arg4;
- (id)initWithBytesPerRow:(NSUInteger)arg1 bytesPerImage:(NSUInteger)arg2 buffer:(id)arg3 offset:(NSUInteger)arg4;
@property(readonly) NSUInteger bytesPerImage;
@property(readonly) NSUInteger bytesPerRow;
@property(readonly) id <TXRBuffer> buffer; // @synthesize buffer=_buffer;
@property(readonly) NSUInteger offset; // @synthesize offset=_offset;
- (void)deferredProvide;

@end

