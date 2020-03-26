//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMContact, NSArray, NSNumber, NSString;

@interface EDAMRelatedContent : FATObject
{
    NSString *_contentId;
    NSString *_title;
    NSString *_url;
    NSString *_sourceId;
    NSString *_sourceUrl;
    NSString *_sourceFaviconUrl;
    NSString *_sourceName;
    NSNumber *_date;
    NSString *_teaser;
    NSArray *_thumbnails;
    NSNumber *_contentType;
    NSNumber *_accessType;
    NSString *_visibleUrl;
    NSString *_clipUrl;
    EDAMContact *_contact;
    NSArray *_authors;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSArray *authors; // @synthesize authors=_authors;
@property(retain, nonatomic) EDAMContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *clipUrl; // @synthesize clipUrl=_clipUrl;
@property(retain, nonatomic) NSString *visibleUrl; // @synthesize visibleUrl=_visibleUrl;
@property(retain, nonatomic) NSNumber *accessType; // @synthesize accessType=_accessType;
@property(retain, nonatomic) NSNumber *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(retain, nonatomic) NSString *teaser; // @synthesize teaser=_teaser;
@property(retain, nonatomic) NSNumber *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *sourceFaviconUrl; // @synthesize sourceFaviconUrl=_sourceFaviconUrl;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
// - (void).cxx_destruct;

@end

