//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFGuaranteedCollectingDataConsumer-Protocol.h>

@class NSMutableData, NSString;

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer>
{
    NSMutableData *_data;
    int _fd;
    NSString *_path;
}

- (void)done;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)init;

@end

