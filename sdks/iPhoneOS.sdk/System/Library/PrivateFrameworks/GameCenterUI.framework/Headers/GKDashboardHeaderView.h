//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKGameRecord, UISegmentedControl;

@interface GKDashboardHeaderView : UICollectionReusableView
{
    BOOL _didSetupLikeButton;
    GKGameRecord *_gameRecord;
    UISegmentedControl *_segmentedControl;
}

+ (double)defaultHeight;
@property(nonatomic) BOOL didSetupLikeButton; // @synthesize didSetupLikeButton=_didSetupLikeButton;
@property(nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
- (void)awakeFromNib;
- (void)dealloc;

@end

