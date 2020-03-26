//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDAddressObjectGeocodingResult, GEOPDAutocompleteResult, GEOPDBatchCategoryLookupResult, GEOPDBatchMerchantLookupBrandResult, GEOPDBatchPopularNearbySearchResult, GEOPDBatchSpatialLookupResult, GEOPDBrandLookupResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDClusterGeocodingResult, GEOPDExternalTransitLookupResult, GEOPDFeatureIdGeocodingResult, GEOPDGeocodingResult, GEOPDGroundViewLabelResult, GEOPDInitialOfflineSuggestionResult, GEOPDIpGeoLookupResult, GEOPDLocationDirectedSearchResult, GEOPDMapsIdentifierPlaceLookupResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDOfflineAreaLookupResult, GEOPDOfflinePolygonQuadNodesResult, GEOPDOfflineProactiveRegionsResult, GEOPDOfflineSuggestedRegionsResult, GEOPDOfflineUpdateManifestResult, GEOPDPlaceCollectionLookupResult, GEOPDPlaceGlobalCommonResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPopularNearbySearchResult, GEOPDReverseGeocodingResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult, GEOPDSiriSearchResult, GEOPDTransitScheduleLookupResult, GEOPDVendorSpecificPlaceRefinementResult, GEOPDWifiFingerprintResult, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAddressObjectGeocodingResult *_addressObjectGeocodingResult;
    GEOPDAutocompleteResult *_autocompleteResult;
    GEOPDBatchCategoryLookupResult *_batchCategoryLookupResult;
    GEOPDBatchMerchantLookupBrandResult *_batchMerchantLookupBrandResult;
    GEOPDBatchPopularNearbySearchResult *_batchPopularNearbySearchResult;
    GEOPDBatchSpatialLookupResult *_batchSpatialLookupResult;
    GEOPDBrandLookupResult *_brandLookupResult;
    GEOPDSearchBrowseCategorySuggestionResult *_browseCategorySuggestionResult;
    GEOPDCanonicalLocationSearchResult *_canonicalSearchResult;
    GEOPDCategorySearchResult *_categorySearchResult;
    GEOPDClusterGeocodingResult *_clusterGeocodingResult;
    GEOPDExternalTransitLookupResult *_externalTransitLookupResult;
    GEOPDFeatureIdGeocodingResult *_featureIdGeocodingResult;
    GEOPDGeocodingResult *_geocodingResult;
    GEOPDGroundViewLabelResult *_groundViewLabelResult;
    GEOPDInitialOfflineSuggestionResult *_initialOfflineSuggestionResult;
    GEOPDIpGeoLookupResult *_ipGeoLookupResult;
    GEOPDLocationDirectedSearchResult *_locationDirectedSearchResult;
    GEOPDMapsIdentifierPlaceLookupResult *_mapsIdentifierPlaceLookupResult;
    GEOPDMerchantLookupResult *_merchantLookupResult;
    GEOPDNearbySearchResult *_nearbySearchResult;
    GEOPDOfflineAreaLookupResult *_offlineAreaLookupResult;
    GEOPDOfflinePolygonQuadNodesResult *_offlinePolygonQuadNodesResult;
    GEOPDOfflineProactiveRegionsResult *_offlineProactiveRegionsResult;
    GEOPDOfflineSuggestedRegionsResult *_offlineSuggestedRegionsResult;
    GEOPDOfflineUpdateManifestResult *_offlineUpdateManifestResult;
    GEOPDPlaceCollectionLookupResult *_placeCollectionLookupResult;
    GEOPDPlaceGlobalCommonResult *_placeGlobalCommonResult;
    GEOPDPlaceLookupResult *_placeLookupResult;
    GEOPDPlaceRefinementResult *_placeRefinementResult;
    GEOPDPopularNearbySearchResult *_popularNearbySearchResult;
    GEOPDReverseGeocodingResult *_reverseGeocodingResult;
    GEOPDSearchFieldPlaceholderResult *_searchFieldPlaceholderResult;
    GEOPDSearchResult *_searchResult;
    GEOPDSearchZeroKeywordCategorySuggestionResult *_searchZeroKeywordCategorySuggestionResult;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *_searchZeroKeywordWithSearchResultsSuggestionResult;
    GEOPDSiriSearchResult *_siriSearchResult;
    GEOPDTransitScheduleLookupResult *_transitScheduleLookupResult;
    GEOPDVendorSpecificPlaceRefinementResult *_vendorSpecificPlaceRefinementResult;
    GEOPDWifiFingerprintResult *_wifiFingerprintResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressObjectGeocodingResult:1;
        unsigned int read_autocompleteResult:1;
        unsigned int read_batchCategoryLookupResult:1;
        unsigned int read_batchMerchantLookupBrandResult:1;
        unsigned int read_batchPopularNearbySearchResult:1;
        unsigned int read_batchSpatialLookupResult:1;
        unsigned int read_brandLookupResult:1;
        unsigned int read_browseCategorySuggestionResult:1;
        unsigned int read_canonicalSearchResult:1;
        unsigned int read_categorySearchResult:1;
        unsigned int read_clusterGeocodingResult:1;
        unsigned int read_externalTransitLookupResult:1;
        unsigned int read_featureIdGeocodingResult:1;
        unsigned int read_geocodingResult:1;
        unsigned int read_groundViewLabelResult:1;
        unsigned int read_initialOfflineSuggestionResult:1;
        unsigned int read_ipGeoLookupResult:1;
        unsigned int read_locationDirectedSearchResult:1;
        unsigned int read_mapsIdentifierPlaceLookupResult:1;
        unsigned int read_merchantLookupResult:1;
        unsigned int read_nearbySearchResult:1;
        unsigned int read_offlineAreaLookupResult:1;
        unsigned int read_offlinePolygonQuadNodesResult:1;
        unsigned int read_offlineProactiveRegionsResult:1;
        unsigned int read_offlineSuggestedRegionsResult:1;
        unsigned int read_offlineUpdateManifestResult:1;
        unsigned int read_placeCollectionLookupResult:1;
        unsigned int read_placeGlobalCommonResult:1;
        unsigned int read_placeLookupResult:1;
        unsigned int read_placeRefinementResult:1;
        unsigned int read_popularNearbySearchResult:1;
        unsigned int read_reverseGeocodingResult:1;
        unsigned int read_searchFieldPlaceholderResult:1;
        unsigned int read_searchResult:1;
        unsigned int read_searchZeroKeywordCategorySuggestionResult:1;
        unsigned int read_searchZeroKeywordWithSearchResultsSuggestionResult:1;
        unsigned int read_siriSearchResult:1;
        unsigned int read_transitScheduleLookupResult:1;
        unsigned int read_vendorSpecificPlaceRefinementResult:1;
        unsigned int read_wifiFingerprintResult:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressObjectGeocodingResult:1;
        unsigned int wrote_autocompleteResult:1;
        unsigned int wrote_batchCategoryLookupResult:1;
        unsigned int wrote_batchMerchantLookupBrandResult:1;
        unsigned int wrote_batchPopularNearbySearchResult:1;
        unsigned int wrote_batchSpatialLookupResult:1;
        unsigned int wrote_brandLookupResult:1;
        unsigned int wrote_browseCategorySuggestionResult:1;
        unsigned int wrote_canonicalSearchResult:1;
        unsigned int wrote_categorySearchResult:1;
        unsigned int wrote_clusterGeocodingResult:1;
        unsigned int wrote_externalTransitLookupResult:1;
        unsigned int wrote_featureIdGeocodingResult:1;
        unsigned int wrote_geocodingResult:1;
        unsigned int wrote_groundViewLabelResult:1;
        unsigned int wrote_initialOfflineSuggestionResult:1;
        unsigned int wrote_ipGeoLookupResult:1;
        unsigned int wrote_locationDirectedSearchResult:1;
        unsigned int wrote_mapsIdentifierPlaceLookupResult:1;
        unsigned int wrote_merchantLookupResult:1;
        unsigned int wrote_nearbySearchResult:1;
        unsigned int wrote_offlineAreaLookupResult:1;
        unsigned int wrote_offlinePolygonQuadNodesResult:1;
        unsigned int wrote_offlineProactiveRegionsResult:1;
        unsigned int wrote_offlineSuggestedRegionsResult:1;
        unsigned int wrote_offlineUpdateManifestResult:1;
        unsigned int wrote_placeCollectionLookupResult:1;
        unsigned int wrote_placeGlobalCommonResult:1;
        unsigned int wrote_placeLookupResult:1;
        unsigned int wrote_placeRefinementResult:1;
        unsigned int wrote_popularNearbySearchResult:1;
        unsigned int wrote_reverseGeocodingResult:1;
        unsigned int wrote_searchFieldPlaceholderResult:1;
        unsigned int wrote_searchResult:1;
        unsigned int wrote_searchZeroKeywordCategorySuggestionResult:1;
        unsigned int wrote_searchZeroKeywordWithSearchResultsSuggestionResult:1;
        unsigned int wrote_siriSearchResult:1;
        unsigned int wrote_transitScheduleLookupResult:1;
        unsigned int wrote_vendorSpecificPlaceRefinementResult:1;
        unsigned int wrote_wifiFingerprintResult:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDBatchMerchantLookupBrandResult *batchMerchantLookupBrandResult;
@property(readonly, nonatomic) BOOL hasBatchMerchantLookupBrandResult;
- (void)_readBatchMerchantLookupBrandResult;
@property(retain, nonatomic) GEOPDBatchCategoryLookupResult *batchCategoryLookupResult;
@property(readonly, nonatomic) BOOL hasBatchCategoryLookupResult;
- (void)_readBatchCategoryLookupResult;
@property(retain, nonatomic) GEOPDTransitScheduleLookupResult *transitScheduleLookupResult;
@property(readonly, nonatomic) BOOL hasTransitScheduleLookupResult;
- (void)_readTransitScheduleLookupResult;
@property(retain, nonatomic) GEOPDPlaceCollectionLookupResult *placeCollectionLookupResult;
@property(readonly, nonatomic) BOOL hasPlaceCollectionLookupResult;
- (void)_readPlaceCollectionLookupResult;
@property(retain, nonatomic) GEOPDPlaceGlobalCommonResult *placeGlobalCommonResult;
@property(readonly, nonatomic) BOOL hasPlaceGlobalCommonResult;
- (void)_readPlaceGlobalCommonResult;
@property(retain, nonatomic) GEOPDBatchSpatialLookupResult *batchSpatialLookupResult;
@property(readonly, nonatomic) BOOL hasBatchSpatialLookupResult;
- (void)_readBatchSpatialLookupResult;
@property(retain, nonatomic) GEOPDGroundViewLabelResult *groundViewLabelResult;
@property(readonly, nonatomic) BOOL hasGroundViewLabelResult;
- (void)_readGroundViewLabelResult;
@property(retain, nonatomic) GEOPDIpGeoLookupResult *ipGeoLookupResult;
@property(readonly, nonatomic) BOOL hasIpGeoLookupResult;
- (void)_readIpGeoLookupResult;
@property(retain, nonatomic) GEOPDInitialOfflineSuggestionResult *initialOfflineSuggestionResult;
@property(readonly, nonatomic) BOOL hasInitialOfflineSuggestionResult;
- (void)_readInitialOfflineSuggestionResult;
@property(retain, nonatomic) GEOPDWifiFingerprintResult *wifiFingerprintResult;
@property(readonly, nonatomic) BOOL hasWifiFingerprintResult;
- (void)_readWifiFingerprintResult;
@property(retain, nonatomic) GEOPDOfflineUpdateManifestResult *offlineUpdateManifestResult;
@property(readonly, nonatomic) BOOL hasOfflineUpdateManifestResult;
- (void)_readOfflineUpdateManifestResult;
@property(retain, nonatomic) GEOPDBrandLookupResult *brandLookupResult;
@property(readonly, nonatomic) BOOL hasBrandLookupResult;
- (void)_readBrandLookupResult;
@property(retain, nonatomic) GEOPDOfflineProactiveRegionsResult *offlineProactiveRegionsResult;
@property(readonly, nonatomic) BOOL hasOfflineProactiveRegionsResult;
- (void)_readOfflineProactiveRegionsResult;
@property(retain, nonatomic) GEOPDOfflinePolygonQuadNodesResult *offlinePolygonQuadNodesResult;
@property(readonly, nonatomic) BOOL hasOfflinePolygonQuadNodesResult;
- (void)_readOfflinePolygonQuadNodesResult;
@property(retain, nonatomic) GEOPDOfflineSuggestedRegionsResult *offlineSuggestedRegionsResult;
@property(readonly, nonatomic) BOOL hasOfflineSuggestedRegionsResult;
- (void)_readOfflineSuggestedRegionsResult;
@property(retain, nonatomic) GEOPDClusterGeocodingResult *clusterGeocodingResult;
@property(readonly, nonatomic) BOOL hasClusterGeocodingResult;
- (void)_readClusterGeocodingResult;
@property(retain, nonatomic) GEOPDOfflineAreaLookupResult *offlineAreaLookupResult;
@property(readonly, nonatomic) BOOL hasOfflineAreaLookupResult;
- (void)_readOfflineAreaLookupResult;
@property(retain, nonatomic) GEOPDMapsIdentifierPlaceLookupResult *mapsIdentifierPlaceLookupResult;
@property(readonly, nonatomic) BOOL hasMapsIdentifierPlaceLookupResult;
- (void)_readMapsIdentifierPlaceLookupResult;
@property(retain, nonatomic) GEOPDFeatureIdGeocodingResult *featureIdGeocodingResult;
@property(readonly, nonatomic) BOOL hasFeatureIdGeocodingResult;
- (void)_readFeatureIdGeocodingResult;
@property(retain, nonatomic) GEOPDExternalTransitLookupResult *externalTransitLookupResult;
@property(readonly, nonatomic) BOOL hasExternalTransitLookupResult;
- (void)_readExternalTransitLookupResult;
@property(retain, nonatomic) GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *searchZeroKeywordWithSearchResultsSuggestionResult;
@property(readonly, nonatomic) BOOL hasSearchZeroKeywordWithSearchResultsSuggestionResult;
- (void)_readSearchZeroKeywordWithSearchResultsSuggestionResult;
@property(retain, nonatomic) GEOPDAddressObjectGeocodingResult *addressObjectGeocodingResult;
@property(readonly, nonatomic) BOOL hasAddressObjectGeocodingResult;
- (void)_readAddressObjectGeocodingResult;
@property(retain, nonatomic) GEOPDNearbySearchResult *nearbySearchResult;
@property(readonly, nonatomic) BOOL hasNearbySearchResult;
- (void)_readNearbySearchResult;
@property(retain, nonatomic) GEOPDVendorSpecificPlaceRefinementResult *vendorSpecificPlaceRefinementResult;
@property(readonly, nonatomic) BOOL hasVendorSpecificPlaceRefinementResult;
- (void)_readVendorSpecificPlaceRefinementResult;
@property(retain, nonatomic) GEOPDBatchPopularNearbySearchResult *batchPopularNearbySearchResult;
@property(readonly, nonatomic) BOOL hasBatchPopularNearbySearchResult;
- (void)_readBatchPopularNearbySearchResult;
@property(retain, nonatomic) GEOPDSearchFieldPlaceholderResult *searchFieldPlaceholderResult;
@property(readonly, nonatomic) BOOL hasSearchFieldPlaceholderResult;
- (void)_readSearchFieldPlaceholderResult;
@property(retain, nonatomic) GEOPDSearchZeroKeywordCategorySuggestionResult *searchZeroKeywordCategorySuggestionResult;
@property(readonly, nonatomic) BOOL hasSearchZeroKeywordCategorySuggestionResult;
- (void)_readSearchZeroKeywordCategorySuggestionResult;
@property(retain, nonatomic) GEOPDPopularNearbySearchResult *popularNearbySearchResult;
@property(readonly, nonatomic) BOOL hasPopularNearbySearchResult;
- (void)_readPopularNearbySearchResult;
@property(retain, nonatomic) GEOPDCategorySearchResult *categorySearchResult;
@property(readonly, nonatomic) BOOL hasCategorySearchResult;
- (void)_readCategorySearchResult;
@property(retain, nonatomic) GEOPDSearchBrowseCategorySuggestionResult *browseCategorySuggestionResult;
@property(readonly, nonatomic) BOOL hasBrowseCategorySuggestionResult;
- (void)_readBrowseCategorySuggestionResult;
@property(retain, nonatomic) GEOPDAutocompleteResult *autocompleteResult;
@property(readonly, nonatomic) BOOL hasAutocompleteResult;
- (void)_readAutocompleteResult;
@property(retain, nonatomic) GEOPDLocationDirectedSearchResult *locationDirectedSearchResult;
@property(readonly, nonatomic) BOOL hasLocationDirectedSearchResult;
- (void)_readLocationDirectedSearchResult;
@property(retain, nonatomic) GEOPDSiriSearchResult *siriSearchResult;
@property(readonly, nonatomic) BOOL hasSiriSearchResult;
- (void)_readSiriSearchResult;
@property(retain, nonatomic) GEOPDPlaceRefinementResult *placeRefinementResult;
@property(readonly, nonatomic) BOOL hasPlaceRefinementResult;
- (void)_readPlaceRefinementResult;
@property(retain, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult;
@property(readonly, nonatomic) BOOL hasMerchantLookupResult;
- (void)_readMerchantLookupResult;
@property(retain, nonatomic) GEOPDPlaceLookupResult *placeLookupResult;
@property(readonly, nonatomic) BOOL hasPlaceLookupResult;
- (void)_readPlaceLookupResult;
@property(retain, nonatomic) GEOPDReverseGeocodingResult *reverseGeocodingResult;
@property(readonly, nonatomic) BOOL hasReverseGeocodingResult;
- (void)_readReverseGeocodingResult;
@property(retain, nonatomic) GEOPDCanonicalLocationSearchResult *canonicalSearchResult;
@property(readonly, nonatomic) BOOL hasCanonicalSearchResult;
- (void)_readCanonicalSearchResult;
@property(retain, nonatomic) GEOPDGeocodingResult *geocodingResult;
@property(readonly, nonatomic) BOOL hasGeocodingResult;
- (void)_readGeocodingResult;
@property(retain, nonatomic) GEOPDSearchResult *searchResult;
@property(readonly, nonatomic) BOOL hasSearchResult;
- (void)_readSearchResult;
- (id)initWithData:(id)arg1;
- (id)init;

@end

