//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDebugDescriptionProviding-Protocol.h>

@class BSSettings, FBSDisplayConfiguration, FBSDisplayIdentity, NSArray, NSSet, NSString;

@interface FBSSceneSettings : NSObject <BSDebugDescriptionProviding, NSCopying, NSMutableCopying>
{
    FBSDisplayConfiguration *_displayConfiguration;
    CGRect _frame;
    double _level;
    long long _interfaceOrientation;
    BOOL _foreground;
    BSSettings *_otherSettings;
    BSSettings *_transientLocalSettings;
    BOOL _prefersProcessTaskSuspensionWhileSceneForeground;
    long long _isOccluded;
    BOOL _occluded;
    BOOL _occludedHasBeenCalculated;
    NSSet *_ignoreOcclusionReasons;
    NSArray *_occlusions;
}

+ (BOOL)_isMutable;
+ (id)settings;
@property(readonly, copy, nonatomic) NSArray *occlusions; // @synthesize occlusions=_occlusions;
@property(readonly, nonatomic, getter=isForeground) BOOL foreground; // @synthesize foreground=_foreground;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) double level; // @synthesize level=_level;
@property(readonly, nonatomic) CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
// - (void).cxx_destruct;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3;
- (id)keyDescriptionForSetting:(NSUInteger)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(BOOL)arg2;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)setPrefersProcessTaskSuspensionWhileSceneForeground:(BOOL)arg1;
- (BOOL)prefersProcessTaskSuspensionWhileSceneForeground;
- (id)transientLocalSettings;
- (BOOL)isIgnoringOcclusions;
- (id)ignoreOcclusionReasons;
- (id)otherSettings;
- (BOOL)isOccluded;
@property(readonly, nonatomic, getter=isBackgrounded) BOOL backgrounded;
- (CGRect)bounds;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;

@end

