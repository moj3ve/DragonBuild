//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSProtobufSerializable-Protocol.h>

@class NSString;

@interface BKSBacklightFeatures : NSObject <BSProtobufSerializable>
{
    BOOL _disableFeatures;
    float _fixedBrightnessNitsWhileDisabled;
    float _fixedBrightnessLevelWhileDisabled;
}

+ (id)protobufSchema;
@property(nonatomic) float fixedBrightnessLevelWhileDisabled; // @synthesize fixedBrightnessLevelWhileDisabled=_fixedBrightnessLevelWhileDisabled;
@property(nonatomic) float fixedBrightnessNitsWhileDisabled; // @synthesize fixedBrightnessNitsWhileDisabled=_fixedBrightnessNitsWhileDisabled;
@property(nonatomic) BOOL disableFeatures; // @synthesize disableFeatures=_disableFeatures;
- (id)didFinishProtobufDecodingWithError:(out id )arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)init;

@end

