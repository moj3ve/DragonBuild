//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CSSEscaping)
+ (id)tsu_numberSymbols;
+ (id)tsu_stringByHexEncodingData:(id)arg1;
+ (id)tsu_stringWithXMLString:(const char )arg1;
+ (id)tsu_stringByBase64EncodingBytes:(const char )arg1 length:(NSUInteger)arg2 breakLines:(BOOL)arg3;
+ (id)tsu_stringByBase64EncodingBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)tsu_stringWithHexFromBytes:(const char )arg1 length:(NSUInteger)arg2;
+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(NSUInteger)arg2;
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)tsu_stringWithUUID;
+ (id)tsu_localizedDisplayNameWithPersonNameComponents:(id)arg1;
+ (id)tsu_fogFilenameFromShareToken:(id)arg1;
+ (id)tsu_fogShareTokenFromFileURL:(id)arg1;
+ (id)tsu_customNumberFormatDecimalFormatStringWithDigits:(NSUInteger)arg1 digitString:(id)arg2 includeDecimalSeparator:(BOOL)arg3;
+ (id)tsu_customNumberFormatDecimalTokenRepresentedStringWithDigits:(NSUInteger)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatDecimalTokenDisplayStringWithDigits:(NSUInteger)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerFormatStringWithDigits:(NSUInteger)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerTokenRepresentedStringWithDigits:(NSUInteger)arg1 separator:(BOOL)arg2 digitString:(id)arg3;
+ (id)tsu_customNumberFormatIntegerTokenDisplayStringWithDigits:(NSUInteger)arg1 separator:(BOOL)arg2 digitString:(id)arg3 locale:(id)arg4;
+ (id)tsu_customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)tc_stringByFixingUnpairedSurrogateCharactersInString:(id)arg1;
+ (BOOL)tc_fixUnpairedSurrogateCharactersInBuffer:(vector_195fe69b )arg1;
+ (id)tc_stringWithXmlString:(const char )arg1;
+ (id)stringWithOcText:(const struct OcText )arg1;
+ (id)stringWithCsString:(const struct CsString )arg1;
+ (BOOL)tc_skipString:(id)arg1;
+ (id)tc_mapString:(id)arg1;
- (id)CM_stringByAddingCSSEscapes;
- (id)copyCsvRows:(NSUInteger )arg1;
- (id)_copyCsvRows:(NSUInteger )arg1 usingDelimiter:(id)arg2 columnCountIsConstant:(BOOL )arg3;
- (_NSRange)oi_rangeOfCharactersFromSet:(id)arg1 index:(int)arg2;
- (double)oi_sizeWithFontName:(id)arg1 size:(int)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4;
- (double)oi_sizeWithFontName:(id)arg1 size:(int)arg2;
- (id)tsu_stringByReplacing2DigitYearStringWith4DigitYearString;
- (id)tsu_stringByReplacing4DigitYearStringWith2DigitYearString;
- (id)tsu_prefixOfNumberFormatSubpattern;
- (NSUInteger)tsu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)tsu_suffixOfNumberFormatSubpattern;
- (NSUInteger)tsu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)tsu_numberPortionOfNumberFormatSubpattern;
- (id)tsu_negativeSubpatternOfNumberFormatPattern;
- (id)tsu_positiveSubpatternOfNumberFormatPattern;
- (NSUInteger)tsu_indexOfNumberFormatSubpatternSeparator;
- (id)tsu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)tsu_newRangesOfEscapedCharactersInNumberFormatPattern;
- (BOOL)tsu_isNumberFormatPattern;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsu_stringWithNormalizedQuotationMarks;
- (id)tsu_stringWithNormalizedHyphens;
- (id)tsu_stringWithNormalizedHyphensAndQuotationMarks;
- (BOOL)tsu_isEqualToString:(id)arg1;
- (id)tsu_middleTruncateToLength:(NSUInteger)arg1;
- (id)tsu_stringWithoutAttachmentCharacters;
- (id)tsu_setOfContainedWordsIncludingPunctuationAndSymbols:(BOOL)arg1;
- (BOOL)tsu_containsSubstring:(id)arg1;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (_NSRange)tsu_range;
- (_NSRange)tsu_rangeOfString:(id)arg1 options:(NSUInteger)arg2 updatingSearchRange:(_NSRange )arg3;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (BOOL)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (id)tsu_unescapeXML;
- (id)tsu_escapeXML;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_stringByMakingFirstCharacterLowercase;
- (id)tsu_encodeStringBase64;
- (id)tsu_stringByTrimmingCharactersInSetFromFront:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(BOOL)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(NSUInteger)arg1;
- (id)tsu_substringWithComposedCharacterSequencesTruncatedToLength:(NSUInteger)arg1;
- (id)tsu_stringWithRealpath;
- (BOOL)tsu_isChildOfPath:(id)arg1;
- (BOOL)tsu_isDescendantOfPath:(id)arg1;
- (id)tsu_escapeForIcuRegex;
- (NSUInteger)tsu_countInstancesOfString:(id)arg1 options:(NSUInteger)arg2;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_md5Hash;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (id)tsu_stringByAddingCSVEscapesForLocale:(id)arg1;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringByExpandingTableFormatting;
- (BOOL)tsu_isLegalEmailAddress;
- (id)tsu_uncommentedAddressRespectingGroups;
- (id)tsu_uncommentedAddress;
- (BOOL)tsu_isCJKString;
- (id)tsu_sha256HexHashString;
- (long long)tsu_compareToVersionString:(id)arg1;
- (NSUInteger)tsu_numberOfKeysInKeyPath;
- (id)tsu_lastKey;
- (id)tsu_firstKey;
- (id)tsu_keyPathByAppendingKey:(id)arg1;
- (id)tsu_keyPathByPrependingKey:(id)arg1;
- (id)tsu_keyPathByRemovingFirstKey;
- (id)tsu_keyPathByRemovingLastKey;
- (id)tsu_initUnRedactedWithFormat:(id)arg1;
- (id)tsu_initRedactedWithFormat:(id)arg1;
- (id)tsu_initUnRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)tsu_initRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (unsigned short)tsu_spaceCharacterInCustomNumberFormatSpaceToken;
- (unsigned short)tsu_scaleCharacterInCustomNumberFormatScaleToken;
- (id)tsu_formatStringFromCustomNumberFormatScaleToken;
- (int)tsu_fractionAccuracyFromCustomNumberFormatFractionToken;
- (id)tsu_currencyCodeFromCustomNumberFormatCurrencyToken;
- (id)tsu_digitPlaceholderStringInDigitToken;
- (NSUInteger)tsu_numberOfDigitsInCustomNumberFormatDecimalToken;
- (id)tsu_stringByInsertingFormatGroupingSeparators:(id)arg1;
- (BOOL)tsu_customFormatIntegerTokenUsesSeparator;
- (NSUInteger)tsu_numberOfDigitsInCustomNumberFormatIntegerToken;
- (BOOL)tsu_isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (BOOL)tsu_isSpecialCustomNumberFormatToken;
- (BOOL)tsu_pathExtensionConformsToUTI:(id)arg1;
- (BOOL)tsu_pathConformsToUTI:(id)arg1;
@property(readonly, nonatomic) NSString *tsu_pathUTI;
@property(readonly, nonatomic) NSString *tsu_UTIFilenameExtension;
- (BOOL)tsu_conformsToAnyUTI:(id)arg1;
- (BOOL)tsu_conformsToUTI:(id)arg1;
- (const char )nulTerminatedUTF8;
- (BOOL)tc_doesURLHostContainWhitespace;
- (BOOL)tc_startsWithString:(id)arg1;
- (id)tc_stringByRemovingInvalidXmlChars;
- (BOOL)tc_isEqualToXmlString:(const char )arg1;
- (id)tc_componentsSeparatedByWhitespace;
- (id)tc_initFromXmlNode:(struct _xmlNode )arg1 nsWithFallbackNs:(id)arg2 attributeName:(const char )arg3;
- (id)tc_initFromXmlNode:(struct _xmlNode )arg1 ns:(const char )arg2 attributeName:(const char )arg3;
- (id)tc_initWithContentOfXmlNode:(struct _xmlNode )arg1;
- (id)tc_initWithValueOfXmlAttribute:(struct _xmlAttr )arg1;
- (const char )tc_xmlString;
- (id)tc_initWithXmlString:(const char )arg1;
- (void)copyToOcText:(struct OcText )arg1 encoding:(int)arg2;
- (void)copyToOcText:(struct OcText )arg1;
- (void)copyToCsString:(struct CsString )arg1;
- (id)dataUsingWordEncoding:(int)arg1;
- (id)initWithOcText:(const struct OcText )arg1;
- (id)initWithCsString:(const struct CsString )arg1;
- (unsigned short )cWideString;
- (id)tc_escapedFragment;
- (id)tc_escapedPath;
- (int)tc_languageTypeAtIndex:(NSUInteger)arg1 effectiveRange:(_NSRange )arg2;
- (id)tc_initialsFromAuthorName;
- (id)getDataUsingOfficeCryptographicEncoding;
- (int)tc_fontTypeAtIndex:(NSUInteger)arg1 effectiveRange:(_NSRange )arg2 forXML:(BOOL)arg3;
- (int)fontTypeForCharacter:(unsigned short)arg1 isControl:(BOOL )arg2;
@end

