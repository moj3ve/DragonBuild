//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TPPageInfo.h>

@class NSArray, TPDrawablesZOrder;

__attribute__((visibility("hidden")))
@interface TPPaginatedPageInfo : TPPageInfo
{
}

- (Class)repClass;
- (Class)layoutClass;
- (CGRect)pageFrame;
- (id)pageController;
- (id)orderedDrawables:(id)arg1;
@property(readonly, nonatomic) BOOL isDocumentSetupPage;
@property(readonly, nonatomic) TPDrawablesZOrder *drawablesZOrder;
@property(readonly, nonatomic) NSArray *floatingDrawableInfos;

@end

