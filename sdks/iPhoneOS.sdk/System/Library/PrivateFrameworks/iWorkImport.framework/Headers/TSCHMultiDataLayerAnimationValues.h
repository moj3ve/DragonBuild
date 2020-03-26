//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataLayerAnimationValues : NSObject
{
    CALayer *mLayer;
    NSString *mKey;
    NSArray *mValues;
    NSArray *mKeyTimes;
    BOOL mNeedPresentationLayerValues;
}

+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
@property(readonly, nonatomic) BOOL needPresentationLayerValues; // @synthesize needPresentationLayerValues=mNeedPresentationLayerValues;
@property(readonly, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=mKeyTimes;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=mValues;
@property(readonly, nonatomic) NSString *key; // @synthesize key=mKey;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=mLayer;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5;

@end

