//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FBSSceneSettings, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneCoordinateSpace : NSObject <UICoordinateSpace>
{
    FBSSceneSettings *_effectiveSettings;
    UIWindowScene *_windowScene;
}

@property(readonly, nonatomic) __weak UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGRect bounds;
- (CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (id)initWithWindowScene:(id)arg1 effectiveSettings:(id)arg2;

@end

