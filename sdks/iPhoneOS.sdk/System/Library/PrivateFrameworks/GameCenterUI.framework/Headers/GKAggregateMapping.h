//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GKCollectionViewDataSource, NSMutableDictionary, NSString;

@interface GKAggregateMapping : NSObject <NSCopying>
{
    GKCollectionViewDataSource *_dataSource;
    long long _sectionCount;
    NSString *_dynamicTag;
    NSMutableDictionary *_globalToLocalSections;
    NSMutableDictionary *_localToGlobalSections;
    NSMutableDictionary *_globalSectionsToTags;
}

@property(retain, nonatomic) NSMutableDictionary *globalSectionsToTags; // @synthesize globalSectionsToTags=_globalSectionsToTags;
@property(retain, nonatomic) NSMutableDictionary *localToGlobalSections; // @synthesize localToGlobalSections=_localToGlobalSections;
@property(retain, nonatomic) NSMutableDictionary *globalToLocalSections; // @synthesize globalToLocalSections=_globalToLocalSections;
@property(retain, nonatomic) NSString *dynamicTag; // @synthesize dynamicTag=_dynamicTag;
@property(nonatomic) long long sectionCount; // @synthesize sectionCount=_sectionCount;
@property(retain, nonatomic) GKCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (NSUInteger)updateMappingsStartingWithGlobalSection:(NSUInteger)arg1;
- (void)addMappingFromGlobalSection:(NSUInteger)arg1 toLocalSection:(NSUInteger)arg2 withTag:(id)arg3;
- (id)tagForGlobalSection:(long long)arg1;
- (id)initWithGlobalToLocalMapping:(id)arg1;
- (id)init;
- (id)globalIndexPathForLocalIndexPath:(id)arg1;
- (id)localIndexPathForGlobalIndexPath:(id)arg1;
- (NSUInteger)globalSectionForLocalSection:(NSUInteger)arg1;
- (NSUInteger)localSectionForGlobalSection:(NSUInteger)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)description;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;

@end

