//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPFieldTreeNode.h>

__attribute__((visibility("hidden")))
@interface TSPFieldTreeNodeWithChildren : TSPFieldTreeNode
{
    struct map<int, TSPFieldTreeNode *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSPFieldTreeNode *>>> _children;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1 message:(struct Message )arg2;
- (BOOL)addChildNode:(id)arg1 forFieldNumber:(int)arg2;
- (id)childNodeForFieldNumber:(int)arg1;

@end

