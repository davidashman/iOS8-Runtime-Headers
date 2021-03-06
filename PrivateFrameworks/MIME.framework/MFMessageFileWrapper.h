/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString, NSData, NSMutableDictionary;

@interface MFMessageFileWrapper : NSObject  {
    NSString *_path;
    NSString *_filename;
    NSString *_preferredFilename;
    NSData *_data;
    NSMutableDictionary *_attributes;
    NSString *_linkDestination;
    NSString *_url;
    int _type;
}

+ (id)supportedArchivedClassNames;

- (void)setCreator:(unsigned int)arg1;
- (unsigned int)creator;
- (id)meetingStorePersistentID;
- (id)symbolicLinkDestination;
- (bool)isImageFile;
- (id)icsRepresentation;
- (bool)isPDFFile;
- (id)inferredMimeType;
- (void)setMeetingStorePersistentID:(id)arg1;
- (id)initSymbolicLinkWithDestination:(id)arg1;
- (bool)isUnzippableFile;
- (id)fileProtection;
- (void)setFileProtection:(id)arg1;
- (void)setICSRepresentation:(id)arg1;
- (id)eventUniqueID;
- (void)setEventUniqueID:(id)arg1;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (unsigned short)finderFlags;
- (void)setFinderFlags:(unsigned short)arg1;
- (void)setMimeType:(id)arg1;
- (void)_isImage:(bool*)arg1 orPDFFile:(bool*)arg2;
- (void)setMessageID:(id)arg1;
- (id)messageID;
- (id)path;
- (id)initRegularFileWithContents:(id)arg1;
- (bool)isPlaceholder;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)setPath:(id)arg1;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)dealloc;
- (id)description;
- (void)setFilename:(id)arg1;
- (id)regularFileContents;
- (id)filename;
- (void)setFileAttributes:(id)arg1;
- (bool)isSymbolicLink;
- (bool)isRegularFile;
- (id)fileWrappers;
- (void)setPreferredFilename:(id)arg1;
- (id)preferredFilename;
- (id)fileAttributes;
- (bool)isDirectory;
- (id)initWithPath:(id)arg1;
- (id)mimeType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)minimumZoomFontSize;
- (bool)isZip;
- (bool)isRFC822;
- (bool)_pathExtensionEquals:(id)arg1;
- (bool)isDisplayableByWebKit;
- (bool)isDisplayableImage;
- (bool)isMedia;
- (id)preferredFilenameStrippingZipIfNeededUseApplications:(bool)arg1;

@end
