/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSDictionary, ML3MusicLibrary;

@interface ML3TrackImporter : NSObject  {
    NSDictionary *_nameOrders;
    ML3MusicLibrary *_library;
    bool_updateSmartPlaylists;
}

@property(retain) NSDictionary * nameOrders;
@property bool updateSmartPlaylists;


- (void)setUpdateSmartPlaylists:(bool)arg1;
- (bool)updateSmartPlaylists;
- (void)setNameOrders:(id)arg1;
- (bool)updateTrack:(id)arg1 withImportTrack:(id)arg2;
- (void)importTrack:(id)arg1 withCompletionBlock:(id)arg2;
- (id)initWithMusicLibrary:(id)arg1;
- (id)_addStoreLinkForImportTrackProperties:(id)arg1;
- (id)_addGenreForImportTrackProperties:(id)arg1;
- (id)_addComposerForImportTrackProperties:(id)arg1;
- (id)_addArtistForImportTrackProperties:(id)arg1;
- (id)_addAlbumForImportTrackProperties:(id)arg1;
- (id)_addAlbumArtistForImportTrackProperties:(id)arg1;
- (bool)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned int)arg1;
- (id)_newTrackPropertiesByProcessingImportTrack:(id)arg1 insertStringsIntoSortMap:(bool)arg2;
- (id)nameOrders;
- (void).cxx_destruct;

@end
