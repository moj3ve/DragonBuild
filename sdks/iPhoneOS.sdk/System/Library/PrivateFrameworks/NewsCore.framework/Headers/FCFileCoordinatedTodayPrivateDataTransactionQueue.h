//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject
{
    FCFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property(retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary; // @synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary;
// - (void).cxx_destruct;
- (void)dequeueTransactionsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)peekAtTransactionsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)enqueueTransaction:(id)arg1 withMaxTransactionCount:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

