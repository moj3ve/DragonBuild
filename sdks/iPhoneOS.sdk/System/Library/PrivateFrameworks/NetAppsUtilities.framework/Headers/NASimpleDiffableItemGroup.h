//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NADiffableItemGroup-Protocol.h>

@class NSArray, NSString;

@interface NASimpleDiffableItemGroup : NSObject <NADiffableItemGroup, NSCopying>
{
    NSString *_groupIdentifier;
    NSArray *_diffableItems;
}

@property(copy, nonatomic) NSArray *diffableItems; // @synthesize diffableItems=_diffableItems;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

