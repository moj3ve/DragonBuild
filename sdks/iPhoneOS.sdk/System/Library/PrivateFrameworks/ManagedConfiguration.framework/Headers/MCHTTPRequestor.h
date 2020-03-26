//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface MCHTTPRequestor : NSObject <NSURLSessionDataDelegate>
{
    BOOL _didFailDueToMissingCredentials;
    NSString *_username;
    NSString *_password;
    NSArray *_anchorCertificates;
    id _selfReference;
}

@property(nonatomic) BOOL didFailDueToMissingCredentials; // @synthesize didFailDueToMissingCredentials=_didFailDueToMissingCredentials;
@property(retain, nonatomic) id selfReference; // @synthesize selfReference=_selfReference;
@property(retain, nonatomic) NSArray *anchorCertificates; // @synthesize anchorCertificates=_anchorCertificates;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(id /* CDUnknownBlockType */)arg5;

@end

