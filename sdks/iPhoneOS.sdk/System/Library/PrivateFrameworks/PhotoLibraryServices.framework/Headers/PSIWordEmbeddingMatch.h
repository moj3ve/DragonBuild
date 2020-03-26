//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding>
{
    NSString *_word;
    NSString *_extendedWord;
    double _score;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) double score; // @synthesize score=_score;
@property(readonly) NSString *extendedWord; // @synthesize extendedWord=_extendedWord;
@property(readonly) NSString *word; // @synthesize word=_word;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithWord:(id)arg1 extendedWord:(id)arg2 score:(double)arg3;

@end

