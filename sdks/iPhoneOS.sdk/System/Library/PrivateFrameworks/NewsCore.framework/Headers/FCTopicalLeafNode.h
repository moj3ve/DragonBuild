//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCTopicalNode;

@interface FCTopicalLeafNode : NSObject
{
    FCTopicalNode *_node;
    double _score;
}

@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) FCTopicalNode *node; // @synthesize node=_node;
// - (void).cxx_destruct;
- (id)initWithNode:(id)arg1 score:(double)arg2;

@end

