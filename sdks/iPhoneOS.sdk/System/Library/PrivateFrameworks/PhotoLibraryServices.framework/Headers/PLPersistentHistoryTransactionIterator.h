//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSPersistentHistoryToken;

@interface PLPersistentHistoryTransactionIterator : NSObject
{
    NSArray *_transactions;
    NSUInteger _transactionIndex;
    NSPersistentHistoryToken *_lastIteratedToken;
    NSPersistentHistoryToken *_initialToken;
    NSUInteger _count;
    NSManagedObjectContext *_context;
}

+ (id)iteratorSinceToken:(id)arg1 withBatchSize:(NSUInteger)arg2 managedObjectObjectContext:(id)arg3 error:(id )arg4;
+ (id)iteratorSinceToken:(id)arg1 withManagedObjectObjectContext:(id)arg2 error:(id )arg3;
@property(readonly, copy, nonatomic) NSPersistentHistoryToken *lastIteratedToken; // @synthesize lastIteratedToken=_lastIteratedToken;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSPersistentHistoryToken *initialToken; // @synthesize initialToken=_initialToken;
// - (void).cxx_destruct;
- (id)_safeTransactionAtIndex:(NSUInteger)arg1;
- (BOOL)_enumerateOneTransactionWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateRemainingTransactionsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_hasMoreTransactions;
- (id)initWithInitialToken:(id)arg1 transactions:(id)arg2 managedObjectObjectContext:(id)arg3;

@end

