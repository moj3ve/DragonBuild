//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OAVReadState.h>

@class NSMutableDictionary, WDParagraph, WXReadState;

__attribute__((visibility("hidden")))
@interface WXOAVReadState : OAVReadState
{
    WXReadState *mWxState;
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
}

// - (void).cxx_destruct;
- (id)nextVmlShapeIdToTextBoxMap;
- (void)setCurrentParagraph:(id)arg1;
- (id)currentParagraph;
- (id)wxReadState;
- (id)initWithWXReadState:(id)arg1;

@end

