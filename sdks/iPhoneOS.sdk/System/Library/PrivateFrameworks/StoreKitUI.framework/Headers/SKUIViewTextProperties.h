//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface SKUIViewTextProperties : NSObject <NSCopying>
{
    double _baselineOffsetFromBottom;
    double _desiredOffsetTop;
    double _firstBaselineOffset;
}

@property(nonatomic) double firstBaselineOffset; // @synthesize firstBaselineOffset=_firstBaselineOffset;
@property(nonatomic) double desiredOffsetTop; // @synthesize desiredOffsetTop=_desiredOffsetTop;
@property(nonatomic) double baselineOffsetFromBottom; // @synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTextLayout:(id)arg1 isExpanded:(BOOL)arg2;
- (id)initWithStringLayout:(id)arg1;

@end

