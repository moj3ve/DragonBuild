//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <GameCenterUI/_GKStateMachineDelegate-Protocol.h>

@class GKPlaceholderContentStateMachine, GKPlaceholderView, NSArray, NSString, UIActivityIndicatorView;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <_GKStateMachineDelegate>
{
    GKPlaceholderView *_placeholderView;
    NSString *_noContentTitle;
    NSString *_noContentMessage;
    NSString *_noContentButtonTitle;
    id _noContentButtonTarget;
    SEL _noContentButtonAction;
    NSString *_errorTitle;
    NSString *_errorMessage;
    long long _alignment;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderContentStateMachine *_loadingMachine;
    NSArray *_cachedConstraints;
}

@property(retain, nonatomic) NSArray *cachedConstraints; // @synthesize cachedConstraints=_cachedConstraints;
@property(retain, nonatomic) GKPlaceholderContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(nonatomic) SEL noContentButtonAction; // @synthesize noContentButtonAction=_noContentButtonAction;
@property(nonatomic) id noContentButtonTarget; // @synthesize noContentButtonTarget=_noContentButtonTarget;
@property(retain, nonatomic) NSString *noContentButtonTitle; // @synthesize noContentButtonTitle=_noContentButtonTitle;
@property(retain, nonatomic) NSString *noContentMessage; // @synthesize noContentMessage=_noContentMessage;
@property(retain, nonatomic) NSString *noContentTitle; // @synthesize noContentTitle=_noContentTitle;
@property(retain, nonatomic) GKPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void)didExitErrorState;
- (void)didEnterErrorState;
- (void)didExitNoContentState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
- (void)delayedShowLoadingIndicator;
@property(retain, nonatomic) NSString *loadingState; // @dynamic loadingState;
- (void)updateConstraints;
- (void)buttonPressed;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

