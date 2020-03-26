//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TTMergeableStringStorage;

@protocol TTMergeableStringStorage
- (id)emptyCopy;
- (id)storageFromRange:(_NSRange)arg1;
- (void)replaceStorageInRange:(_NSRange)arg1 withStorage:(id <TTMergeableStringStorage>)arg2 fromRange:(_NSRange)arg3;
- (void)appendStorage:(id <TTMergeableStringStorage>)arg1 fromRange:(_NSRange)arg2;
- (void)insertStorage:(id <TTMergeableStringStorage>)arg1 atIndex:(NSUInteger)arg2;
- (void)removeObjectsInRange:(_NSRange)arg1;
@property(nonatomic, readonly) long long length;
- (id)mutableCopy;
@end

