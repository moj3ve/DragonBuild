//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString;

@interface PGGraphPublicEventCategoryNode : PGGraphNode <PGGraphLocalizable, PGGraphSynonymSupport>
{
}

- (id)associatedNodesForRemoval;
@property(readonly, nonatomic) NSArray *localizedSynonyms;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSUInteger level;

@end

