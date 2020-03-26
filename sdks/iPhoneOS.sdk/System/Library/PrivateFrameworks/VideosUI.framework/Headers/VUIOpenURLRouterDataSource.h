//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, VUIAction;

__attribute__((visibility("hidden")))
@interface VUIOpenURLRouterDataSource : NSObject
{
    BOOL _actionFirst;
    NSArray *_documentDataSources;
    VUIAction *_action;
    NSString *_tabIdentifier;
    NSDictionary *_localLibraryLink;
    NSString *_nativePageName;
}

+ (id)routerDataSourceWithDict:(id)arg1 appContext:(id)arg2;
@property(nonatomic) BOOL actionFirst; // @synthesize actionFirst=_actionFirst;
@property(retain, nonatomic) NSString *nativePageName; // @synthesize nativePageName=_nativePageName;
@property(copy, nonatomic) NSDictionary *localLibraryLink; // @synthesize localLibraryLink=_localLibraryLink;
@property(retain, nonatomic) NSString *tabIdentifier; // @synthesize tabIdentifier=_tabIdentifier;
@property(retain, nonatomic) VUIAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *documentDataSources; // @synthesize documentDataSources=_documentDataSources;
// - (void).cxx_destruct;

@end

