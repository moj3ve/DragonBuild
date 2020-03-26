//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CloudDocsUI/_UIDocumentPickerServiceViewController-Protocol.h>

@class NSArray, NSString, NSURL, _UIDocumentPickerContainerViewController, _UIDocumentSearchListController;
@protocol _UIDocumentListControllerDelegate;

@interface _UIDocumentListController : UIViewController <_UIDocumentPickerServiceViewController, UIViewControllerRestoration>
{
    _UIDocumentListController *_rootListController;
    _UIDocumentPickerContainerViewController *_containerViewController;
    int _sortOrderIfNotDeferred;
    long long _displayModeIfNotDeferred;
    long long _availableActionsIfNotDeferred;
    id <_UIDocumentListControllerDelegate> _delegateIfNotDeferred;
    _UIDocumentSearchListController *_searchController;
    CGPoint _stateRestoredContentOffset;
    BOOL _hideSearchField;
    BOOL _editing;
}

+ (id)listControllerHierarchyForURL:(id)arg1;
+ (id)_listControllerHierarchyForURL:(id)arg1 withConstructorBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(nonatomic) __weak _UIDocumentListController *rootListController; // @synthesize rootListController=_rootListController;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) BOOL hideSearchField; // @synthesize hideSearchField=_hideSearchField;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_updateScrollPositionForStateRestoration;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 listMode:(long long)arg4;
@property(retain, nonatomic) NSArray *selectedItems;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *containedItems;
@property(readonly, nonatomic) NSURL *presentedURL;
- (id)model;
- (id)previewViewControllerForItem:(id)arg1;
- (void)itemsOrSelectionDidChange:(BOOL)arg1;
- (BOOL)shouldShowAction:(long long)arg1;
- (void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)didSelectItem:(id)arg1;
- (BOOL)shouldSelectItem:(id)arg1;
- (void)didUnhighlightItem:(id)arg1;
- (void)didHighlightItem:(id)arg1;
- (BOOL)shouldHighlightItem:(id)arg1;
- (Class)_classForChildren;
@property(nonatomic) long long availableActions;
- (long long)displayMode;
- (void)setDisplayMode:(long long)arg1;
- (int)sortOrder;
- (void)setSortOrder:(int)arg1;
@property(nonatomic) __weak id <_UIDocumentListControllerDelegate> delegate;
- (void)startSearchWithQueryString:(id)arg1 becomeFirstResponder:(BOOL)arg2;
- (void)updateTitle;
- (void)_setContainerViewController:(id)arg1;
- (void)createSearchControllerWithModel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)_commonInitWithModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

