//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString, SAIntentGroupDetailLabelTemplateComponent, SALocation, SAUIColor;
@protocol SAIntentGroupSetMapLocation;

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate
{
}

+ (id)mapSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapSnippetTemplate;
@property(retain, nonatomic) id <SAIntentGroupSetMapLocation> updateLocationCommand;
@property(copy, nonatomic) NSString *mapSize;
@property(retain, nonatomic) SALocation *location;
@property(nonatomic) BOOL interactive;
@property(retain, nonatomic) SAIntentGroupDetailLabelTemplateComponent *detailLabelComponent;
@property(retain, nonatomic) SAUIColor *color;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

