//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <ChatKit/CKSearchResultSupplementryCell-Protocol.h>

@class CALayer, NSString, UITableView;
@protocol CKDetailsSearchResultsFooterCellDelegate;

@interface CKDetailsSearchResultsFooterCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource, CKSearchResultSupplementryCell>
{
    id <CKDetailsSearchResultsFooterCellDelegate> _delegate;
    NSUInteger _sectionIndex;
    NSString *_sectionIdentifier;
    NSString *_title;
    UITableView *_tableView;
    CALayer *_topHairline;
    CALayer *_bottomHairline;
    UIEdgeInsets marginInsets;
}

+ (double)desiredZPosition;
+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
@property(retain, nonatomic) CALayer *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(retain, nonatomic) CALayer *topHairline; // @synthesize topHairline=_topHairline;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(nonatomic) NSUInteger sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) id <CKDetailsSearchResultsFooterCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) UIEdgeInsets marginInsets; // @synthesize marginInsets;
// - (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

