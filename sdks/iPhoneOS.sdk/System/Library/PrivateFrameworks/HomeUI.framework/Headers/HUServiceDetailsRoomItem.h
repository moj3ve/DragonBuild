//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceDetailsAbstractItem.h>

@class HFItemBuilder;
@protocol HFServiceLikeBuilder;

@interface HUServiceDetailsRoomItem : HUServiceDetailsAbstractItem
{
    HFItemBuilder<HFServiceLikeBuilder> *_serviceLikeBuilder;
}

@property(readonly, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // @synthesize serviceLikeBuilder=_serviceLikeBuilder;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithSourceServiceItem:(id)arg1 home:(id)arg2 serviceLikeBuilder:(id)arg3;

@end

