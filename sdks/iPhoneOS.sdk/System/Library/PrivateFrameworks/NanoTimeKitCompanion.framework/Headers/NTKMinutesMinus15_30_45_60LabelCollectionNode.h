//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKLabelCollectionNode.h>

@class NSArray;

@interface NTKMinutesMinus15_30_45_60LabelCollectionNode : NTKLabelCollectionNode
{
    NSArray *_visibleComplicationSlots;
}

@property(retain, nonatomic) NSArray *visibleComplicationSlots; // @synthesize visibleComplicationSlots=_visibleComplicationSlots;
// - (void).cxx_destruct;
- (void)_updateNodeVisibility;
- (void)createSubNodes;

@end

