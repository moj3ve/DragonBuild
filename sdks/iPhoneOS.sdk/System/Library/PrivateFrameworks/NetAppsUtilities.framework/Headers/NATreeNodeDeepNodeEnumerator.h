//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>


@class NATreeNode, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NATreeNodeDeepNodeEnumerator : NSEnumerator <NSCopying>
{
    NSMutableArray *_enumeratorStack;
    NATreeNode *_node;
}

@property(readonly, copy, nonatomic) NATreeNode *node; // @synthesize node=_node;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)nextObject;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithNode:(id)arg1;

@end

