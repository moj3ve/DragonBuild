//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/SUActivityItemProviderDelegate-Protocol.h>

@class NSString, SUActivityItemProvider, SUScriptFunction, WebScriptObject;

@interface SUScriptActivityItemProvider : SUScriptObject <SUActivityItemProviderDelegate>
{
    id _item;
    id /* CDUnknownBlockType */ _itemBlock;
    SUScriptFunction *_itemFunction;
    int _loadState;
    NSString *_mimeType;
    SUActivityItemProvider *_nativeProvider;
    int _previewLoadState;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_newPlaceholderWithMIMEType:(id)arg1;
- (void)_finishPreviewWithImage:(id)arg1;
- (void)_finishItemWithItem:(id)arg1;
- (void)activityItemProvider:(id)arg1 provideItemUsingBlock:(id /* CDUnknownBlockType */)arg2;
@property(copy) NSString *status;
@property double progress;
@property(retain) WebScriptObject *itemFunction;
@property(readonly) NSString *MIMEType;
- (id)_className;
@property(readonly) NSString *activityType;
- (void)setPreviewImageWithURLString:(id)arg1;
- (void)setItem:(id)arg1;
- (id)activitySupportsMIMEType:(id)arg1;
@property(readonly) SUActivityItemProvider *nativeActivityItemProvider;
- (void)dealloc;
- (id)initWithMIMEType:(id)arg1;

@end

