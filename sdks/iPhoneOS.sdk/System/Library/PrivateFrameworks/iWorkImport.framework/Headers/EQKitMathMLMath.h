//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/EQKitExpression-Protocol.h>
#import <iWorkImport/EQKitMathMLNode-Protocol.h>
#import <iWorkImport/EQKitRootNode-Protocol.h>

@class EQKitEnvironmentInstance, EQKitMathMLNode, NSString;
@protocol EQKitLayoutNode;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMath : NSObject <EQKitMathMLNode, EQKitRootNode, EQKitExpression>
{
    EQKitMathMLNode *mExpression;
    struct AttributeCollection mAttributeCollection;
    EQKitEnvironmentInstance *mEnvironment;
}

@property(readonly, copy) NSString *description;
- (BOOL)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (BOOL)isBaseFontNameUsed;
- (int)isOperatorPaddingRequired;
- (id)operatorCore;
- (BOOL)isEmbellishedOperator;
- (BOOL)isSpaceLike;
- (BOOL)isNumber;
- (long long)scriptLevelWithBase:(long long)arg1;
- (id)layoutStyleNode;
- (struct Schemata)layoutSchemata;
@property(readonly, nonatomic) id <EQKitLayoutNode> parent;
- (id)newLayout;
- (struct AttributeCollection )attributeCollection;
- (void)dealloc;
- (const set_25e6ba53 )mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;
- (id)init;

@end

