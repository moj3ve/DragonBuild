//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFMessageHeaders.h>

@interface MFLocalizedMessageHeaders : MFMessageHeaders
{
}

+ (id)englishHeadersFromLocalizedHeaders:(id)arg1;
+ (id)localizedHeadersFromEnglishHeaders:(id)arg1;
+ (id)localizedHeaders;
- (id)markupString;
- (void)appendHeaderMarkupForKey:(id)arg1 value:(id)arg2 toString:(id)arg3;
- (id)copyFormattedHeaderValueFromAddressList:(id)arg1;

@end

