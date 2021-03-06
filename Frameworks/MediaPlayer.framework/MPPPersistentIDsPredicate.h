/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying> {
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _persistentIDs;
    bool_shouldContain;
    struct { 
        unsigned int shouldContain : 1; 
    } _has;
}

@property bool hasShouldContain;
@property bool shouldContain;
@property(readonly) unsigned long long persistentIDsCount;
@property(readonly) long long* persistentIDs;


- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setPersistentIDs:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setHasShouldContain:(bool)arg1;
- (long long)persistentIDsAtIndex:(unsigned long long)arg1;
- (void)clearPersistentIDs;
- (bool)hasShouldContain;
- (void)addPersistentIDs:(long long)arg1;
- (void)setShouldContain:(bool)arg1;
- (long long*)persistentIDs;
- (unsigned long long)persistentIDsCount;
- (bool)shouldContain;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
