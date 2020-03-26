//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, SAUIAppPunchOut, SAUIDecoratedText;
@protocol SAClientBoundCommand;

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>
{
}

+ (id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2;
+ (id)answerProperty;
@property(copy, nonatomic) NSString *valueAnnotation;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSNumber *selected;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValueAnnotation;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

