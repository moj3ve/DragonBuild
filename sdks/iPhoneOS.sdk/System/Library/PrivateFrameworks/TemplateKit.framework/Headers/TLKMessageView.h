//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class CKTextBalloonView, NSString;

@interface TLKMessageView : TLKView
{
    NSString *_messageText;
    NSUInteger _messageServiceType;
    NSUInteger _messageStatus;
    CKTextBalloonView *_textBalloonView;
}

@property(retain, nonatomic) CKTextBalloonView *textBalloonView; // @synthesize textBalloonView=_textBalloonView;
@property(nonatomic) NSUInteger messageStatus; // @synthesize messageStatus=_messageStatus;
@property(nonatomic) NSUInteger messageServiceType; // @synthesize messageServiceType=_messageServiceType;
@property(retain, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
// - (void).cxx_destruct;
- (void)observedPropertiesChanged;
- (BOOL)usesDefaultInsets;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)setupContentView;

@end

