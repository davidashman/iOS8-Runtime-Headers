/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSString, NSMutableDictionary, NSURL, NSNumber;

@interface BRQueryItem : NSObject <NSSecureCoding, NSCopying> {
    union { 
        struct { 
            unsigned int downloadStatus : 2; 
            unsigned int uploadStatus : 2; 
            unsigned int itemStatus : 2; 
            unsigned int conflicted : 1; 
            unsigned int document : 1; 
            unsigned int preCrashMarker : 1; 
            unsigned int isUploadActive : 1; 
            unsigned int isDownloadActive : 1; 
            unsigned int isDownloadRequested : 1; 
            unsigned int isAlias : 1; 
        } ; 
        unsigned short value; 
    } _flags;
    unsigned short _diffs;
    NSString *_containerID;
    NSString *_parentPath;
    NSString *_logicalName;
    NSString *_physicalName;
    NSNumber *_fileObjectID;
    NSNumber *_size;
    NSNumber *_mtime;
    NSMutableDictionary *_attrs;
    NSURL *_url;
    NSURL *_localRepresentationURL;
    id _replacement;
    bool_isNetworkOffline;
    long long _logicalHandle;
    long long _physicalHandle;
}

@property(readonly) unsigned short diffs;
@property(readonly) unsigned int downloadStatus;
@property(readonly) unsigned int uploadStatus;
@property(readonly) bool isInTransfer;
@property(readonly) bool isConflicted;
@property(readonly) bool isLive;
@property(readonly) bool isDead;
@property(readonly) bool isDocument;
@property(readonly) bool hasTransferStatuses;
@property bool isPreCrash;
@property(readonly) bool isUploadActive;
@property(readonly) bool isDownloadActive;
@property(readonly) bool isDownloadRequested;
@property(readonly) bool isAlias;
@property(readonly) NSString * containerID;
@property(readonly) NSString * parentPath;
@property(readonly) NSString * logicalName;
@property(readonly) NSString * physicalName;
@property(readonly) NSNumber * fileObjectID;
@property(readonly) NSNumber * size;
@property(readonly) NSNumber * mtime;
@property(readonly) NSURL * url;
@property(readonly) NSURL * localRepresentationURL;
@property(readonly) NSString * path;
@property bool isNetworkOffline;
@property id replacement;

+ (id)askDaemonQueryItemForURL:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)parentPath;
- (bool)isDownloadRequested;
- (bool)isDocument;
- (bool)isNetworkOffline;
- (id)physicalName;
- (unsigned short)diffs;
- (void)setReplacement:(id)arg1;
- (id)replacement;
- (void)setTransferAttribute:(id)arg1 forKey:(id)arg2 diff:(unsigned short)arg3;
- (bool)hasTransferStatuses;
- (void)_setAttr:(id)arg1 forKey:(id)arg2;
- (void)setIsPreCrash:(bool)arg1;
- (bool)isPreCrash;
- (void)clearDiffs;
- (void)markDead;
- (unsigned int)uploadStatus;
- (void)_mergeAttrs:(id)arg1;
- (void)_mergeURL:(id)arg1;
- (bool)isEqualToQueryItem:(id)arg1;
- (id)initWithQueryItem:(id)arg1;
- (id)localRepresentationURL;
- (bool)isAlias;
- (bool)isConflicted;
- (id)mtime;
- (id)logicalName;
- (void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (bool)isDownloadActive;
- (bool)isUploadActive;
- (void)merge:(id)arg1;
- (void)setIsNetworkOffline:(bool)arg1;
- (bool)isInTransfer;
- (id)fileObjectID;
- (id)containerID;
- (unsigned int)downloadStatus;
- (bool)isLive;
- (id)path;
- (id)url;
- (id)valueForKey:(id)arg1;
- (bool)isDead;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)size;
- (id)attributeForName:(id)arg1;
- (id)attributesForNames:(id)arg1;
- (id)attributeNames;
- (id)initWithRelPath:(id)arg1 error:(id*)arg2;

@end
