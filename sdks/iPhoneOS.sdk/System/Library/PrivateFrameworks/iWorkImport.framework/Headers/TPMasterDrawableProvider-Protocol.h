//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSSet, TSDDrawableInfo, TSKAddedToDocumentContext;

@protocol TPMasterDrawableProvider <NSObject>
@property(readonly, nonatomic) NSArray *masterDrawables;
@property(readonly, nonatomic) NSUInteger countOfMasterDrawables;
- (void)removeMasterDrawable:(TSDDrawableInfo *)arg1 suppressDOLC:(BOOL)arg2;
- (void)addMasterDrawables:(NSArray *)arg1 atIndex:(NSUInteger)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(BOOL)arg4;
- (void)addMasterDrawable:(TSDDrawableInfo *)arg1 atIndex:(NSUInteger)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(BOOL)arg4;
- (NSUInteger)indexOfMasterDrawable:(TSDDrawableInfo *)arg1;
- (NSArray *)masterDrawablesSortedByZOrder:(NSSet *)arg1;
@end

