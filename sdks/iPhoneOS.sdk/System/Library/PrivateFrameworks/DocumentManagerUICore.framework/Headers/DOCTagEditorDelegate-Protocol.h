//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DOCTag;
@protocol DOCTagEditorPresenter;

@protocol DOCTagEditorDelegate <NSObject>
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidDeselectTag:(DOCTag *)arg2;
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidSelectTag:(DOCTag *)arg2;
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidCreateTag:(DOCTag *)arg2;
@end

