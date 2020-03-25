//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSSearchableItem, UILabel, UILayoutGuide;

@interface SUIKSearchResultCollectionViewListCell : _UICollectionViewListCell
{
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UILayoutGuide *_simulatedImageViewLayoutGuide;
    CSSearchableItem *_searchableItem;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) CSSearchableItem *searchableItem; // @synthesize searchableItem=_searchableItem;
@property(retain, nonatomic) UILayoutGuide *simulatedImageViewLayoutGuide; // @synthesize simulatedImageViewLayoutGuide=_simulatedImageViewLayoutGuide;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
// - (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)configureWithSearchableItem:(id)arg1;
- (void)prepareForReuse;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end

