//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REScriptASTNode.h>

@class NSArray;

@interface REScriptASTBinaryExpressionListNode : REScriptASTNode
{
    NSArray *_expressions;
}

+ (id)parseBuffer:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSArray *expressions; // @synthesize expressions=_expressions;
// - (void).cxx_destruct;
- (id)dependencies;
- (id)initWithExpressions:(id)arg1;

@end

