//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSWPRuleOffset : NSObject <TSSPropertyValueArchiving, NSCopying>
{
    double _dX;
    double _dY;
}

+ (id)instanceWithArchive:(const struct Message )arg1 unarchiver:(id)arg2;
+ (id)ruleOffsetWithDX:(double)arg1 dY:(double)arg2;
+ (id)ruleOffset;
@property(readonly, nonatomic) double dY; // @synthesize dY=_dY;
@property(readonly, nonatomic) double dX; // @synthesize dX=_dX;
- (id)description;
- (CGSize)sizeValue;
- (CGPoint)pointValue;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)saveToArchive:(struct Point )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Point )arg1 unarchiver:(id)arg2;
- (id)init;
- (id)initWithDX:(double)arg1 dY:(double)arg2;

@end

