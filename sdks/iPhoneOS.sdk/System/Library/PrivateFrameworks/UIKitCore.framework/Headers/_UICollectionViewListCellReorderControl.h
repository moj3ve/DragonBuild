//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"


@class UIImageView, UILongPressGestureRecognizer;
@protocol _UICollectionViewListCellReorderControlDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListCellReorderControl : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_imageView;
    UILongPressGestureRecognizer *_reorderRecognizer;
    BOOL _tracking;
    id <_UICollectionViewListCellReorderControlDelegate> _delegate;
    id /* CDUnknownBlockType */ _grabberImageProvider;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ grabberImageProvider; // @synthesize grabberImageProvider=_grabberImageProvider;
@property(nonatomic) __weak id <_UICollectionViewListCellReorderControlDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)endReordering:(BOOL)arg1;
- (void)moveToPoint:(CGPoint)arg1;
- (void)beginReordering;
- (void)pan:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 grabberImageProvider:(id /* CDUnknownBlockType */)arg2;

@end

