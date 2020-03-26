//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol HFIconDescriptor;

@interface HFServiceIconSet : NSObject
{
    NSSet *_allIcons;
    id <HFIconDescriptor> _defaultIcon;
}

+ (id)setWithDefaultIcon:(id)arg1 alternateIcons:(id)arg2;
+ (id)setWithImageIdentifier:(id)arg1;
+ (id)setWithDefaultIcon:(id)arg1;
+ (id)placeholderIconSet;
@property(readonly, nonatomic) id <HFIconDescriptor> defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(readonly, nonatomic) NSSet *allIcons; // @synthesize allIcons=_allIcons;
// - (void).cxx_destruct;

@end

