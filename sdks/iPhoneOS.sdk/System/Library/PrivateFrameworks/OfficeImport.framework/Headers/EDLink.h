//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDLink : NSObject
{
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)arg1;
// - (void).cxx_destruct;
- (id)description;
- (id)externalNames;
- (void)setType:(int)arg1;
- (int)type;
- (id)initWithType:(int)arg1;

@end

