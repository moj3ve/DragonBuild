//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AXDialectMap, NSMutableOrderedSet, NSString;

@interface AXLanguageTag : NSObject <NSCopying>
{
    BOOL _wasPredicted;
    BOOL _createdFromNewline;
    NSString *_content;
    NSMutableOrderedSet *_unambiguousDialects;
    NSMutableOrderedSet *_ambiguousDialects;
    NSMutableOrderedSet *_predictedSecondaryDialects;
    _NSRange _range;
}

+ (id)tagWithDialects:(id)arg1 range:(_NSRange)arg2 content:(id)arg3 predictedByTagger:(BOOL)arg4;
@property(nonatomic) BOOL createdFromNewline; // @synthesize createdFromNewline=_createdFromNewline;
@property(retain, nonatomic) NSMutableOrderedSet *predictedSecondaryDialects; // @synthesize predictedSecondaryDialects=_predictedSecondaryDialects;
@property(nonatomic) BOOL wasPredicted; // @synthesize wasPredicted=_wasPredicted;
@property(retain, nonatomic) NSMutableOrderedSet *ambiguousDialects; // @synthesize ambiguousDialects=_ambiguousDialects;
@property(retain, nonatomic) NSMutableOrderedSet *unambiguousDialects; // @synthesize unambiguousDialects=_unambiguousDialects;
@property(nonatomic) __weak NSString *content; // @synthesize content=_content;
@property(nonatomic) _NSRange range; // @synthesize range=_range;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)canBeSpokenByLanguage:(id)arg1;
- (BOOL)canBeSpokenByDialect:(id)arg1;
- (id)description;
- (void)addPredictedSecondaryDialects:(id)arg1;
- (void)addAmbiguousDialects:(id)arg1;
- (void)addAmbiguousDialect:(id)arg1;
- (void)addUnambiguousDialect:(id)arg1;
@property(readonly, nonatomic) __weak AXDialectMap *dialect;
@property(readonly, nonatomic) __weak NSString *contentSubstring;
@property(readonly, nonatomic) __weak AXDialectMap *preferredUnambiguousDialect;
@property(readonly, nonatomic) __weak AXDialectMap *preferredAmbiguousDialect;
- (BOOL)hasAmbigiousDialects;

@end

