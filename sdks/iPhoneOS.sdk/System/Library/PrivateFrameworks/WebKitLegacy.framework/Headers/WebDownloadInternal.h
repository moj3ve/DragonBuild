//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate>
{
    id realDelegate;
}

- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didCreateDestination:(id)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(NSUInteger)arg2;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)downloadDidBegin:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setRealDelegate:(id)arg1;
- (void)dealloc;

@end

