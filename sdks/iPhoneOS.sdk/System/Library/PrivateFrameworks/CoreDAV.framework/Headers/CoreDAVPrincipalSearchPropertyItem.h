//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem
{
    CoreDAVItem *_prop;
    CoreDAVLeafItem *_descriptionItem;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVLeafItem *descriptionItem; // @synthesize descriptionItem=_descriptionItem;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
// - (void).cxx_destruct;
- (id)description;
- (id)init;

@end

