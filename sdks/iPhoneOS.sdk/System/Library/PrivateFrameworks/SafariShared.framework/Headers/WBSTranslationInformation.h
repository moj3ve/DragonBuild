//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSTranslationInformation : NSObject
{
    NSString *_urlString;
    NSString *_sourceLanguage;
    NSString *_targetLanguage;
}

@property(readonly, copy, nonatomic) NSString *targetLanguage; // @synthesize targetLanguage=_targetLanguage;
@property(readonly, copy, nonatomic) NSString *sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithURLString:(id)arg1 sourceLanguage:(id)arg2 targetLanguage:(id)arg3;
- (id)init;

@end

