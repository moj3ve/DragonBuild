//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, NSString;
@protocol SXFontAttributes, SXFontFace;

@protocol SXFontFamily <NSObject>
@property(readonly, nonatomic) NSSet *fontFaces;
@property(readonly, nonatomic) NSString *familyName;
- (id <SXFontFace>)fontFaceWithAttributes:(id <SXFontAttributes>)arg1 size:(long long)arg2;
@end

