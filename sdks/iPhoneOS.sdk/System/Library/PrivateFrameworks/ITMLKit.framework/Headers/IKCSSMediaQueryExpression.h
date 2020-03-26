//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IKCSSMediaQueryExpression : NSObject
{
    long long _type;
    NSString *_key;
    NSString *_stringValue;
    NSString *_dimension;
    NSString *_mediaType;
    double _doubleValue;
}

@property double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *dimension; // @synthesize dimension=_dimension;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
- (id)valueAsString;
- (id)expressionAsString;
- (BOOL)evaluate;

@end

