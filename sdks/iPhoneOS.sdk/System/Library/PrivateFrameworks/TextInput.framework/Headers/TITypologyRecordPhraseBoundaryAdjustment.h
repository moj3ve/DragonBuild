//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord
{
    BOOL _forwardAdjustment;
    int _granularity;
    TIKeyboardState *_keyboardState;
    TIKeyboardConfiguration *_keyboardConfig;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // @synthesize keyboardConfig=_keyboardConfig;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(nonatomic) int granularity; // @synthesize granularity=_granularity;
@property(nonatomic) BOOL forwardAdjustment; // @synthesize forwardAdjustment=_forwardAdjustment;
// - (void).cxx_destruct;
- (void)replaceDocumentState:(id)arg1;
- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end

