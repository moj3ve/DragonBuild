//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol TITextCheckerSupport <NSObject>
- (void)appendWordToTextCheckerLocalDictionary:(NSString *)arg1;
- (void)requestTextCheckerLocalDictionaryWithCompletionHandler:(void (^)(NSData *))arg1;
- (void)string:(NSString *)arg1 isExemptFromTextCheckerWithCompletionHandler:(void (^)(BOOL))arg2;
@end

