//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGIconLocation : NSObject
{
    long long _page;
    long long _idx;
    long long _folderPage;
}

@property(nonatomic) long long folderPage; // @synthesize folderPage=_folderPage;
@property(nonatomic) long long idx; // @synthesize idx=_idx;
@property(nonatomic) long long page; // @synthesize page=_page;
- (id)initWithPage:(long long)arg1 pageIndex:(long long)arg2 folderPage:(long long)arg3;

@end

