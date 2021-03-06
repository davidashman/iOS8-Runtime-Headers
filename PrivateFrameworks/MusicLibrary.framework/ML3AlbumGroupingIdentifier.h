/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {
    long long _albumArtistPersisentID;
    NSData *_groupingKey;
    NSString *_feedURL;
    long long _seasonNumber;
    bool_compilation;
}

@property(readonly) long long albumArtistPersisentID;
@property(readonly) NSData * groupingKey;
@property(readonly) NSString * feedURL;
@property(readonly) long long seasonNumber;
@property(readonly) bool compilation;


- (long long)seasonNumber;
- (bool)compilation;
- (id)feedURL;
- (id)groupingKey;
- (long long)albumArtistPersisentID;
- (id)initWithAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(bool)arg5 inLibrary:(id)arg6;
- (id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
