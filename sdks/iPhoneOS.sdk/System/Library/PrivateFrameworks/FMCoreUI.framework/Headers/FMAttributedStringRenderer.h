//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMAttributedStringRendererOptions;

@interface FMAttributedStringRenderer : NSObject
{
    FMAttributedStringRendererOptions *_options;
}

@property(readonly, nonatomic) FMAttributedStringRendererOptions *options; // @synthesize options=_options;
// - (void).cxx_destruct;
- (id)_imageFromTextStorage:(id)arg1 width:(double)arg2 showExclusionPaths:(BOOL)arg3;
- (CGSize)_sizeFromTextStorage:(id)arg1;
- (id)_textStorageForAttributedString:(id)arg1 width:(double)arg2 options:(id)arg3;
- (id)imageForAttributedString:(id)arg1 width:(double)arg2 showExclusionPaths:(BOOL)arg3 options:(id)arg4;
- (id)imageForAttributedString:(id)arg1 width:(double)arg2 options:(id)arg3;
- (id)imageForAttributedString:(id)arg1 width:(double)arg2;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

