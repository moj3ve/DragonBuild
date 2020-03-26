//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHFetchResult;

@interface PXResultTuple : NSObject
{
    BOOL _fetchedWithReverseSortOrder;
    PHFetchResult *_fetchResult;
    PHFetchResult *_curatedFetchResult;
    PHFetchResult *_keyAssetsFetchResult;
}

@property(readonly, nonatomic) PHFetchResult *keyAssetsFetchResult; // @synthesize keyAssetsFetchResult=_keyAssetsFetchResult;
@property(readonly, nonatomic) PHFetchResult *curatedFetchResult; // @synthesize curatedFetchResult=_curatedFetchResult;
@property(readonly, nonatomic) BOOL fetchedWithReverseSortOrder; // @synthesize fetchedWithReverseSortOrder=_fetchedWithReverseSortOrder;
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
// - (void).cxx_destruct;
- (id)description;
- (id)resultTupleUpdatedWithChange:(id)arg1;
- (id)initWithFetchResult:(id)arg1 fetchedWithReverseSortOrder:(BOOL)arg2 curatedFetchResult:(id)arg3 keyAssetsFetchResult:(id)arg4;

@end

