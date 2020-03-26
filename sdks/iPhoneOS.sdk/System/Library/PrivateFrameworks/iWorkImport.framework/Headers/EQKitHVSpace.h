//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitBox.h>

__attribute__((visibility("hidden")))
@interface EQKitHVSpace : EQKitBox
{
    double mWidth;
    double mHeight;
    double mDepth;
}

@property(readonly, nonatomic) double depth; // @synthesize depth=mDepth;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
@property(readonly, nonatomic) double width; // @synthesize width=mWidth;
- (BOOL)appendOpticalAlignToSpec:(struct Spec )arg1 offset:(CGPoint)arg2;
@property(readonly, nonatomic) double layoutDepth;
@property(readonly, nonatomic) double layoutHeight;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2 depth:(double)arg3;
- (id)init;

@end

