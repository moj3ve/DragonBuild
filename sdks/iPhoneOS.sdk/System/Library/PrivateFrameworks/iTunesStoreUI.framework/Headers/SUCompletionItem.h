//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SUCompletionItem : NSObject
{
    NSString *_alternateTitle;
    NSString *_title;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *alternateTitle; // @synthesize alternateTitle=_alternateTitle;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;
- (id)init;

@end

