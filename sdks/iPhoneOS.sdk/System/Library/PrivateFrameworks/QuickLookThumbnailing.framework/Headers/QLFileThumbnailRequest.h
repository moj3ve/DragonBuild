//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface QLFileThumbnailRequest : NSObject
{
    double _scale;
    NSURL *_fileURL;
    NSUInteger _badgeType;
    CGSize _maximumSize;
    CGSize _minimumSize;
}

@property(nonatomic) NSUInteger badgeType; // @synthesize badgeType=_badgeType;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
// - (void).cxx_destruct;
- (id)initWithMaximumSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(NSUInteger)arg4 fileURL:(id)arg5;

@end

