/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray, GEOVersionManifest;

@interface GEOActiveTileGroup : PBCodable <NSCopying> {
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributions;
    NSString *_autocompleteURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_forwardGeocoderURL;
    unsigned int _identifier;
    NSString *_locationShiftURL;
    NSString *_mapMatchURL;
    NSString *_polyLocationShiftURL;
    NSString *_problemCategoriesURL;
    NSString *_problemNotificationAvailabilityURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSMutableArray *_regionalResourceRegions;
    NSMutableArray *_regionalResourceTiles;
    NSString *_regionalResourcesURL;
    NSString *_releaseInfo;
    NSMutableArray *_resources;
    NSString *_resourcesURL;
    NSString *_reverseGeocoderURL;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_searchURL;
    NSString *_simpleETAURL;
    NSMutableArray *_tileSets;
    NSString *_uniqueIdentifier;
    NSString *_usageURL;
    GEOVersionManifest *_versionManifest;
}

@property unsigned int identifier;
@property(retain) NSMutableArray * tileSets;
@property(retain) NSMutableArray * resources;
@property(readonly) bool hasUniqueIdentifier;
@property(retain) NSString * uniqueIdentifier;
@property(retain) NSMutableArray * attributions;
@property(retain) NSMutableArray * regionalResourceTiles;
@property(retain) NSMutableArray * regionalResourceRegions;
@property(readonly) bool hasRegionalResourcesURL;
@property(retain) NSString * regionalResourcesURL;
@property(readonly) bool hasSearchURL;
@property(retain) NSString * searchURL;
@property(readonly) bool hasSearchAttributionManifestURL;
@property(retain) NSString * searchAttributionManifestURL;
@property(readonly) bool hasAutocompleteURL;
@property(retain) NSString * autocompleteURL;
@property(readonly) bool hasReverseGeocoderURL;
@property(retain) NSString * reverseGeocoderURL;
@property(readonly) bool hasForwardGeocoderURL;
@property(retain) NSString * forwardGeocoderURL;
@property(readonly) bool hasDirectionsURL;
@property(retain) NSString * directionsURL;
@property(readonly) bool hasEtaURL;
@property(retain) NSString * etaURL;
@property(readonly) bool hasLocationShiftURL;
@property(retain) NSString * locationShiftURL;
@property(readonly) bool hasBatchReverseGeocoderURL;
@property(retain) NSString * batchReverseGeocoderURL;
@property(readonly) bool hasReleaseInfo;
@property(retain) NSString * releaseInfo;
@property(readonly) bool hasMapMatchURL;
@property(retain) NSString * mapMatchURL;
@property(readonly) bool hasResourcesURL;
@property(retain) NSString * resourcesURL;
@property(readonly) bool hasSimpleETAURL;
@property(retain) NSString * simpleETAURL;
@property(readonly) bool hasAddressCorrectionInitURL;
@property(retain) NSString * addressCorrectionInitURL;
@property(readonly) bool hasAddressCorrectionUpdateURL;
@property(retain) NSString * addressCorrectionUpdateURL;
@property(readonly) bool hasPolyLocationShiftURL;
@property(retain) NSString * polyLocationShiftURL;
@property(readonly) bool hasProblemSubmissionURL;
@property(retain) NSString * problemSubmissionURL;
@property(readonly) bool hasProblemStatusURL;
@property(retain) NSString * problemStatusURL;
@property(readonly) bool hasReverseGeocoderVersionsURL;
@property(retain) NSString * reverseGeocoderVersionsURL;
@property(readonly) bool hasProblemCategoriesURL;
@property(retain) NSString * problemCategoriesURL;
@property(readonly) bool hasUsageURL;
@property(retain) NSString * usageURL;
@property(readonly) bool hasProblemNotificationAvailabilityURL;
@property(retain) NSString * problemNotificationAvailabilityURL;
@property(readonly) bool hasAnnouncementsURL;
@property(retain) NSString * announcementsURL;
@property(retain) NSMutableArray * announcementsSupportedLanguages;
@property(readonly) bool hasDispatcherURL;
@property(retain) NSString * dispatcherURL;
@property(readonly) bool hasProblemOptInURL;
@property(retain) NSString * problemOptInURL;
@property(readonly) bool hasVersionManifest;
@property(retain) GEOVersionManifest * versionManifest;


- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)hasRegionalResourcesForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)regionalResourceRegionsForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)flatRegionalResourceTilesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)regionalResourcesURL;
- (bool)hasRegionalResourcesURL;
- (bool)hasUniqueIdentifier;
- (id)regionalResourceRegionAtIndex:(unsigned long long)arg1;
- (void)clearRegionalResourceRegions;
- (id)regionalResourceTileAtIndex:(unsigned long long)arg1;
- (void)clearRegionalResourceTiles;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (void)clearResources;
- (void)setRegionalResourceRegions:(id)arg1;
- (void)setRegionalResourceTiles:(id)arg1;
- (void)setRegionalResourcesURL:(id)arg1;
- (unsigned long long)regionalResourceRegionsCount;
- (void)addRegionalResourceTile:(id)arg1;
- (void)addRegionalResourceRegion:(id)arg1;
- (void)addResource:(id)arg1;
- (unsigned long long)regionalResourceTilesCount;
- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)regionalResourceRegions;
- (id)regionalResourceTiles;
- (id)resources;
- (unsigned long long)resourcesCount;
- (bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;
- (void)_resetBestLanguages;
- (id)problemOptInURL;
- (id)dispatcherURL;
- (id)announcementsSupportedLanguages;
- (id)announcementsURL;
- (id)problemNotificationAvailabilityURL;
- (id)usageURL;
- (id)problemCategoriesURL;
- (id)reverseGeocoderVersionsURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (id)polyLocationShiftURL;
- (id)addressCorrectionUpdateURL;
- (id)addressCorrectionInitURL;
- (id)simpleETAURL;
- (id)mapMatchURL;
- (id)releaseInfo;
- (id)locationShiftURL;
- (id)etaURL;
- (id)autocompleteURL;
- (id)searchAttributionManifestURL;
- (id)resourcesURL;
- (bool)hasVersionManifest;
- (bool)hasProblemOptInURL;
- (bool)hasDispatcherURL;
- (bool)hasAnnouncementsURL;
- (bool)hasProblemNotificationAvailabilityURL;
- (bool)hasUsageURL;
- (bool)hasProblemCategoriesURL;
- (bool)hasReverseGeocoderVersionsURL;
- (bool)hasProblemStatusURL;
- (bool)hasProblemSubmissionURL;
- (bool)hasPolyLocationShiftURL;
- (bool)hasAddressCorrectionUpdateURL;
- (bool)hasAddressCorrectionInitURL;
- (bool)hasSimpleETAURL;
- (bool)hasMapMatchURL;
- (bool)hasBatchReverseGeocoderURL;
- (bool)hasReleaseInfo;
- (bool)hasLocationShiftURL;
- (bool)hasEtaURL;
- (bool)hasDirectionsURL;
- (bool)hasForwardGeocoderURL;
- (bool)hasReverseGeocoderURL;
- (bool)hasAutocompleteURL;
- (bool)hasSearchAttributionManifestURL;
- (bool)hasSearchURL;
- (bool)hasResourcesURL;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (void)clearAnnouncementsSupportedLanguages;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)setVersionManifest:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setAnnouncementsSupportedLanguages:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setProblemNotificationAvailabilityURL:(id)arg1;
- (void)setUsageURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setReverseGeocoderVersionsURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setPolyLocationShiftURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setMapMatchURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setLocationShiftURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setForwardGeocoderURL:(id)arg1;
- (void)setReverseGeocoderURL:(id)arg1;
- (void)setAutocompleteURL:(id)arg1;
- (void)setSearchAttributionManifestURL:(id)arg1;
- (void)setSearchURL:(id)arg1;
- (void)setResourcesURL:(id)arg1;
- (id)batchReverseGeocoderURL;
- (id)reverseGeocoderURL;
- (id)forwardGeocoderURL;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 overrideLocale:(id)arg2;
- (id)multiTileURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 useStatusCodes:(bool*)arg2;
- (id)activeTileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)tileSets;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (void)clearTileSets;
- (unsigned long long)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)setTileSets:(id)arg1;
- (id)searchURL;
- (id)directionsURL;
- (id)versionManifest;
- (id)attributions;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (void)clearAttributions;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setResources:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (void)setUniqueIdentifier:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
