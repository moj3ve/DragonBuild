//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSCH3DShaderVariable;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderLinkedVariable : NSObject
{
    NSString *name;
    TSCH3DShaderVariable *variable;
    struct TSCH3DShaderVariableScopeType scope;
}

+ (id)linkedVariable;
@property(nonatomic) struct TSCH3DShaderVariableScopeType scope; // @synthesize scope;
@property(retain, nonatomic) TSCH3DShaderVariable *variable; // @synthesize variable;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id).cxx_construct;
- (id)inputVariableName;
- (BOOL)isAttribute;
- (id)description;
- (void)dealloc;

@end

