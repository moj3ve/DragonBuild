//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMemoriesBlacklistAccessoryViewSpec.h>

@protocol PXPerson;

@interface PXMemoriesBlacklistPersonAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec
{
    id <PXPerson> _person;
}

+ (id)specWithPerson:(id)arg1;
@property(readonly, nonatomic) id <PXPerson> person; // @synthesize person=_person;
// - (void).cxx_destruct;
- (id)initWithPerson:(id)arg1;

@end

