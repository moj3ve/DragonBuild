//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCHeldRecords, NSArray, NSDictionary;
@protocol FCContentContext;

@interface FCWidgetConfigDataOperation : FCOperation
{
    id <FCContentContext> _context;
    NSDictionary *_widgetConfiguration;
    id /* CDUnknownBlockType */ _widgetConfigDataCompletionHandler;
    NSArray *_recordSources;
    NSDictionary *_recordSourcesByRecordType;
    FCHeldRecords *_cachedRecords;
    NSDictionary *_resultWidgetSectionConfigDictionary;
    NSArray *_resultArticleIDs;
    NSArray *_resultArticleListIDs;
    NSDictionary *_resultHeldRecordsByType;
}

@property(retain, nonatomic) NSDictionary *resultHeldRecordsByType; // @synthesize resultHeldRecordsByType=_resultHeldRecordsByType;
@property(retain, nonatomic) NSArray *resultArticleListIDs; // @synthesize resultArticleListIDs=_resultArticleListIDs;
@property(retain, nonatomic) NSArray *resultArticleIDs; // @synthesize resultArticleIDs=_resultArticleIDs;
@property(retain, nonatomic) NSDictionary *resultWidgetSectionConfigDictionary; // @synthesize resultWidgetSectionConfigDictionary=_resultWidgetSectionConfigDictionary;
@property(retain, nonatomic) FCHeldRecords *cachedRecords; // @synthesize cachedRecords=_cachedRecords;
@property(retain, nonatomic) NSDictionary *recordSourcesByRecordType; // @synthesize recordSourcesByRecordType=_recordSourcesByRecordType;
@property(retain, nonatomic) NSArray *recordSources; // @synthesize recordSources=_recordSources;
@property(copy, nonatomic) id /* CDUnknownBlockType */ widgetConfigDataCompletionHandler; // @synthesize widgetConfigDataCompletionHandler=_widgetConfigDataCompletionHandler;
@property(copy, nonatomic) NSDictionary *widgetConfiguration; // @synthesize widgetConfiguration=_widgetConfiguration;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (id)_recordSourceForRecordType:(id)arg1;
- (void)_finalizeResultFromCachedRecords;
- (void)_collectRecordsFromWidgetConfigDictionary:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (BOOL)validateOperation;

@end

