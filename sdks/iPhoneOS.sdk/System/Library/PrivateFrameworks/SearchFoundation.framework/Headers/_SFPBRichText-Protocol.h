//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBFormattedText, _SFPBGraphicalFloat, _SFPBImage, _SFPBText;

@protocol _SFPBRichText <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *formattedTextPieces;
@property(copy, nonatomic) NSArray *icons;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(retain, nonatomic) _SFPBGraphicalFloat *starRating;
@property(retain, nonatomic) _SFPBText *text;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFormattedText *)formattedTextPiecesAtIndex:(NSUInteger)arg1;
- (NSUInteger)formattedTextPiecesCount;
- (void)addFormattedTextPieces:(_SFPBFormattedText *)arg1;
- (void)clearFormattedTextPieces;
- (_SFPBImage *)iconsAtIndex:(NSUInteger)arg1;
- (NSUInteger)iconsCount;
- (void)addIcons:(_SFPBImage *)arg1;
- (void)clearIcons;
@end

