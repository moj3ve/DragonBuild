//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLCompoundExpression-Protocol.h>

@class NSArray, NSString;

@interface EFSQLAndExpression : NSObject <EFSQLCompoundExpression>
{
    NSArray *_expressions;
}

@property(readonly, copy, nonatomic) NSArray *expressions; // @synthesize expressions=_expressions;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (id)initWithExpressions:(id)arg1;

@end

