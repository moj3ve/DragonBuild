//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSNumber;

@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem
{
}

+ (id)tabularDataColumnWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tabularDataColumn;
@property(copy, nonatomic) NSArray *values;
@property(copy, nonatomic) NSNumber *rightMargin;
@property(copy, nonatomic) NSNumber *minimumWidth;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

