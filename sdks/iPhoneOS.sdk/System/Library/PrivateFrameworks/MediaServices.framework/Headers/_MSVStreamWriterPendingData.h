//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _MSVStreamWriterPendingData : NSObject
{
    NSData *_data;
    id /* CDUnknownBlockType */ _completionHandler;
    long long _bytesWritten;
}

@property(nonatomic) long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;

@end

