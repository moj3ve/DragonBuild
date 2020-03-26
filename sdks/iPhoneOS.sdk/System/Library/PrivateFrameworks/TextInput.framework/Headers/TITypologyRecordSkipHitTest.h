//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent;

@interface TITypologyRecordSkipHitTest : TITypologyRecord
{
    TIKeyboardTouchEvent *_touchEvent;
    TIKeyboardState *_keyboardState;
    TIKeyboardLayout *_keyLayout;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(retain, nonatomic) TIKeyboardTouchEvent *touchEvent; // @synthesize touchEvent=_touchEvent;
// - (void).cxx_destruct;
- (void)replaceDocumentState:(id)arg1;
- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end

