//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class UITextView;

__attribute__((visibility("hidden")))
@interface WDContactConsolidationLearnMoreViewController : HKViewController
{
    UITextView *_textView;
    id /* CDUnknownBlockType */ _dismissHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
// - (void).cxx_destruct;
- (void)createTextView;
- (void)dismissButtonPressed:(id)arg1;
- (void)createDismissButton;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

