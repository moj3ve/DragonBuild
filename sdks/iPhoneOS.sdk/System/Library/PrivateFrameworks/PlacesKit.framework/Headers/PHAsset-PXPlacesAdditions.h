//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAsset.h>

#import <PlacesKit/PXPlacesGeotaggable-Protocol.h>

@interface PHAsset (PXPlacesAdditions) <PXPlacesGeotaggable>
+ (id)pk_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (long long)pk_isContentEqualTo:(id)arg1;
- (long long)compareTo:(id)arg1;
- (struct CLLocationCoordinate2D)coordinate;
@end

