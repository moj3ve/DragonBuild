//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSTTableHeaderInfo;

@protocol TSTTableHeaderStorage <NSObject>
- (unsigned int)lowerBound:(unsigned int)arg1;
- (unsigned int)upperBound:(unsigned int)arg1;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (long long)count;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (void)applyFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 withState:(void )arg2 willModify:(BOOL)arg3;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(BOOL)arg2;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(TSTTableHeaderInfo *)arg1 forKey:(unsigned int)arg2;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(BOOL)arg2;
@end

