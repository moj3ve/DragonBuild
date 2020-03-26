//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDetailsSettings : PXSettings
{
    BOOL _showHeaderWidget;
    BOOL _showAssetsWidget;
    BOOL _showDemoTilingViewWidget;
    BOOL _showVariationsWidget;
    BOOL _showDemoViewWidget;
    BOOL _showDemoDynamicWidget;
    BOOL _showPlacesWidget;
    BOOL _showRelatedPeopleWidget;
    BOOL _showRelatedWidget;
    BOOL _showActionsWidget;
    BOOL _showPeopleInlineCandidateWidget;
    BOOL _showFacesAreaRect;
    BOOL _allowWidgetsContentLoading;
    BOOL _loadAllWidgetsContentAfterDelay;
    BOOL _loadAllWidgetsContentOnScroll;
    BOOL _allowMultiColumnLayout;
    BOOL _allowZoomTransitions;
    BOOL _allowPinchTransitions;
    BOOL _purgeOnMemoryWarning;
    BOOL _useCuratedLibraryLayout;
    BOOL _editorialLayoutEdit;
    BOOL _editorialLayoutAvoidSmallestTile;
    BOOL _allowEditorialLayoutStressTest;
    BOOL _enableDebugCurationBadge;
    BOOL _placesWidgetShowOnlyPlaceholder;
    BOOL _peopleWidgetDisableSocialGroup;
    BOOL _addToTabSimulate;
    double _defaultPriorityWidgetsLoadingDelay;
    long long _detailViewsToKeepLoaded;
    long long _curationAlgorithm;
    long long _editorialLayoutColumns;
    long long _editorialLayoutTargetRowsForChunk;
    long long _editorialLayoutActivityFeedItemCountThreshold;
    double _assetsWidgetPlaceholderAspectRatio;
    long long _debugBadgeInfoType;
    long long _peopleWidgetMaximumNumberOfPeople;
    double _addToTabOpacity;
    double _addToTabDuration;
    double _addToTabTranslationDelay;
    double _addToTabScaleDelay;
    double _addToTabRotationDelay;
    double _addToTabFadeOutDelay;
    double _addToTabEndRotation;
}

+ (id)transientProperties;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double addToTabEndRotation; // @synthesize addToTabEndRotation=_addToTabEndRotation;
@property(nonatomic) double addToTabFadeOutDelay; // @synthesize addToTabFadeOutDelay=_addToTabFadeOutDelay;
@property(nonatomic) double addToTabRotationDelay; // @synthesize addToTabRotationDelay=_addToTabRotationDelay;
@property(nonatomic) double addToTabScaleDelay; // @synthesize addToTabScaleDelay=_addToTabScaleDelay;
@property(nonatomic) double addToTabTranslationDelay; // @synthesize addToTabTranslationDelay=_addToTabTranslationDelay;
@property(nonatomic) double addToTabDuration; // @synthesize addToTabDuration=_addToTabDuration;
@property(nonatomic) double addToTabOpacity; // @synthesize addToTabOpacity=_addToTabOpacity;
@property(nonatomic) BOOL addToTabSimulate; // @synthesize addToTabSimulate=_addToTabSimulate;
@property(nonatomic) long long peopleWidgetMaximumNumberOfPeople; // @synthesize peopleWidgetMaximumNumberOfPeople=_peopleWidgetMaximumNumberOfPeople;
@property(nonatomic) BOOL peopleWidgetDisableSocialGroup; // @synthesize peopleWidgetDisableSocialGroup=_peopleWidgetDisableSocialGroup;
@property(nonatomic) BOOL placesWidgetShowOnlyPlaceholder; // @synthesize placesWidgetShowOnlyPlaceholder=_placesWidgetShowOnlyPlaceholder;
@property(nonatomic) long long debugBadgeInfoType; // @synthesize debugBadgeInfoType=_debugBadgeInfoType;
@property(nonatomic) BOOL enableDebugCurationBadge; // @synthesize enableDebugCurationBadge=_enableDebugCurationBadge;
@property(nonatomic) BOOL allowEditorialLayoutStressTest; // @synthesize allowEditorialLayoutStressTest=_allowEditorialLayoutStressTest;
@property(nonatomic) double assetsWidgetPlaceholderAspectRatio; // @synthesize assetsWidgetPlaceholderAspectRatio=_assetsWidgetPlaceholderAspectRatio;
@property(nonatomic) long long editorialLayoutActivityFeedItemCountThreshold; // @synthesize editorialLayoutActivityFeedItemCountThreshold=_editorialLayoutActivityFeedItemCountThreshold;
@property(nonatomic) BOOL editorialLayoutAvoidSmallestTile; // @synthesize editorialLayoutAvoidSmallestTile=_editorialLayoutAvoidSmallestTile;
@property(nonatomic) long long editorialLayoutTargetRowsForChunk; // @synthesize editorialLayoutTargetRowsForChunk=_editorialLayoutTargetRowsForChunk;
@property(nonatomic) long long editorialLayoutColumns; // @synthesize editorialLayoutColumns=_editorialLayoutColumns;
@property(nonatomic) BOOL editorialLayoutEdit; // @synthesize editorialLayoutEdit=_editorialLayoutEdit;
@property(nonatomic) BOOL useCuratedLibraryLayout; // @synthesize useCuratedLibraryLayout=_useCuratedLibraryLayout;
@property(nonatomic) long long curationAlgorithm; // @synthesize curationAlgorithm=_curationAlgorithm;
@property(nonatomic) long long detailViewsToKeepLoaded; // @synthesize detailViewsToKeepLoaded=_detailViewsToKeepLoaded;
@property(nonatomic) BOOL purgeOnMemoryWarning; // @synthesize purgeOnMemoryWarning=_purgeOnMemoryWarning;
@property(nonatomic) BOOL allowPinchTransitions; // @synthesize allowPinchTransitions=_allowPinchTransitions;
@property(nonatomic) BOOL allowZoomTransitions; // @synthesize allowZoomTransitions=_allowZoomTransitions;
@property(nonatomic) BOOL allowMultiColumnLayout; // @synthesize allowMultiColumnLayout=_allowMultiColumnLayout;
@property(nonatomic) double defaultPriorityWidgetsLoadingDelay; // @synthesize defaultPriorityWidgetsLoadingDelay=_defaultPriorityWidgetsLoadingDelay;
@property(nonatomic) BOOL loadAllWidgetsContentOnScroll; // @synthesize loadAllWidgetsContentOnScroll=_loadAllWidgetsContentOnScroll;
@property(nonatomic) BOOL loadAllWidgetsContentAfterDelay; // @synthesize loadAllWidgetsContentAfterDelay=_loadAllWidgetsContentAfterDelay;
@property(nonatomic) BOOL allowWidgetsContentLoading; // @synthesize allowWidgetsContentLoading=_allowWidgetsContentLoading;
@property(nonatomic) BOOL showFacesAreaRect; // @synthesize showFacesAreaRect=_showFacesAreaRect;
@property(nonatomic) BOOL showPeopleInlineCandidateWidget; // @synthesize showPeopleInlineCandidateWidget=_showPeopleInlineCandidateWidget;
@property(nonatomic) BOOL showActionsWidget; // @synthesize showActionsWidget=_showActionsWidget;
@property(nonatomic) BOOL showRelatedWidget; // @synthesize showRelatedWidget=_showRelatedWidget;
@property(nonatomic) BOOL showRelatedPeopleWidget; // @synthesize showRelatedPeopleWidget=_showRelatedPeopleWidget;
@property(nonatomic) BOOL showPlacesWidget; // @synthesize showPlacesWidget=_showPlacesWidget;
@property(nonatomic) BOOL showDemoDynamicWidget; // @synthesize showDemoDynamicWidget=_showDemoDynamicWidget;
@property(nonatomic) BOOL showDemoViewWidget; // @synthesize showDemoViewWidget=_showDemoViewWidget;
@property(nonatomic) BOOL showVariationsWidget; // @synthesize showVariationsWidget=_showVariationsWidget;
@property(nonatomic) BOOL showDemoTilingViewWidget; // @synthesize showDemoTilingViewWidget=_showDemoTilingViewWidget;
@property(nonatomic) BOOL showAssetsWidget; // @synthesize showAssetsWidget=_showAssetsWidget;
@property(nonatomic) BOOL showHeaderWidget; // @synthesize showHeaderWidget=_showHeaderWidget;
- (struct PXAssetBadgeInfo)debugBadgeInfo;
- (void)setDefaultValues;
- (id)parentSettings;

@end

