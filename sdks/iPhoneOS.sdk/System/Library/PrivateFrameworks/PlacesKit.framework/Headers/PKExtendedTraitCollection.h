//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITraitCollection;

@interface PKExtendedTraitCollection : NSObject
{
    long long _layoutSizeClass;
    long long _layoutSizeSubclass;
    long long _userInterfaceIdiom;
    long long _userInterfaceStyle;
    double _displayScale;
    UITraitCollection *_traitCollectionForMapKit;
}

@property(retain, nonatomic) UITraitCollection *traitCollectionForMapKit; // @synthesize traitCollectionForMapKit=_traitCollectionForMapKit;
@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(nonatomic) long long layoutSizeSubclass; // @synthesize layoutSizeSubclass=_layoutSizeSubclass;
@property(nonatomic) long long layoutSizeClass; // @synthesize layoutSizeClass=_layoutSizeClass;
// - (void).cxx_destruct;
- (id)description;

@end

