//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSaverTileLoaderProxy-Protocol.h>

@interface GEODataSaverTileLoaderLocalProxy : NSObject <GEODataSaverTileLoaderProxy>
{
}

- (void)_debug_initiateDataSaverPreload;
@property(readonly, nonatomic, getter=isDataSaverEnabled) BOOL dataSaverEnabled;
- (void)_removeOldRegionStateFromDisk;
- (id)init;

@end

