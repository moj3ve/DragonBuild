//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HFWallpaperEditCollectionBuilder, NSString;

@interface HFHomeBuilder : HFItemBuilder
{
    NSString *_name;
    NSString *_userNotes;
    HFWallpaperEditCollectionBuilder *_wallpaperBuilder;
}

+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) HFWallpaperEditCollectionBuilder *wallpaperBuilder; // @synthesize wallpaperBuilder=_wallpaperBuilder;
@property(copy, nonatomic) NSString *userNotes; // @synthesize userNotes=_userNotes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)updateUserNotes;
- (id)updateName;
- (id)createHome;
- (id)performValidation;
- (id)commitItem;
- (void)setHome:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

