//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableData;

@interface NUBrushStroke : NSObject <NSCopying, NSMutableCopying>
{
    float _radius;
    float _softness;
    float _opacity;
    long long _pressureMode;
    CDStruct_996ac03c _extent;
    NSMutableData *_data;
}

+ (id)dictionaryFromBrushStroke:(id)arg1;
+ (id)brushStrokeFromDictionary:(id)arg1;
@property(readonly, nonatomic) long long pressureMode; // @synthesize pressureMode=_pressureMode;
@property(readonly, nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) float softness; // @synthesize softness=_softness;
@property(readonly, nonatomic) float radius; // @synthesize radius=_radius;
// - (void).cxx_destruct;
- (void)_updateExtent;
- (id)_createDataFromPointArray:(id)arg1;
- (id)_createPointArrayFromData:(id)arg1;
- (id)description;
- (CDStruct_996ac03c)extent;
- (CDStruct_869f9c67)pointAtIndex:(long long)arg1;
- (long long)pointCount;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (id)points;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_initializeWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 extent:(CDStruct_996ac03c)arg4 data:(id)arg5 pressureMode:(long long)arg6;
- (id)initWithDictionary:(id)arg1;
- (void)writeToTIFFAtPath:(id)arg1 closed:(BOOL)arg2 pressureMode:(long long)arg3;
- (id)ciImageTiled:(BOOL)arg1 closed:(BOOL)arg2 pressureMode:(long long)arg3;

@end

