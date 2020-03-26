//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol BRLTTranslatorProtocol <NSObject>
- (NSString *)textForPrintBraille:(NSString *)arg1 mode:(NSUInteger)arg2 locations:(id )arg3;
- (NSString *)printBrailleForText:(NSString *)arg1 mode:(NSUInteger)arg2 locations:(id )arg3 textPositionsRange:(_NSRange)arg4;
- (BOOL)activeTableSupportsIPA;
- (BOOL)activeTableSupportsTechnicalBraille;
- (BOOL)activeTableSupportsEightDotBraille;
- (BOOL)activeTableSupportsContractedBraille;
- (NSString *)activeTable;
- (void)setActiveTable:(NSString *)arg1;
- (NSUInteger)interfaceVersion;
@end

