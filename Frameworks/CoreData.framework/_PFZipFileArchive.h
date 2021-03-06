/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData, NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, PFZipEndOfCentralDirectoryRecord;

@interface _PFZipFileArchive : NSObject  {
    NSDictionary *_contents;
    NSData *_data;
    id _provider;
    long long _desc;
    NSString *_path;
    NSArray *_names;
    NSDictionary *_properties;
    NSMutableDictionary *_cachedContents;
    void *_reserved;
    struct __zFlags { 
        unsigned int providerSuppliesContents : 1; 
        unsigned int providerSuppliesStreams : 1; 
        unsigned int providerSuppliesProperties : 1; 
        unsigned int noContentsCaching : 1; 
        unsigned int fileOpen : 1; 
        unsigned int reserved : 27; 
    } _zFlags;
    void *_reserved2[5];
    NSMutableDictionary *_entryNameToData;
    NSMutableDictionary *_entryNameToLocalFileHeader;
    NSMutableDictionary *_entryNameToCentralDirectoryFileHeader;
    NSMutableArray *_localFileHeaders;
    NSMutableArray *_centralDirectoryEntries;
    PFZipEndOfCentralDirectoryRecord *_endRecord;
}

@property(readonly) NSArray * entryNames;

+ (id)createStringFromBytes:(const char *)arg1 offset:(unsigned long long*)arg2 length:(unsigned long long)arg3;
+ (unsigned short)readInt16FromBytes:(const char *)arg1 offset:(unsigned long long*)arg2;
+ (void)writeInt16:(unsigned short)arg1 toData:(id)arg2;
+ (void)writeInt32:(unsigned int)arg1 toData:(id)arg2;
+ (void)writeInt64:(unsigned long long)arg1 toData:(id)arg2;
+ (unsigned int)readInt32FromBytes:(const char *)arg1 offset:(unsigned long long*)arg2;

- (id)createDataForEntryName:(id)arg1 cache:(bool)arg2 error:(id*)arg3;
- (bool)readDataForLocalFileHeader:(id)arg1 fromBytes:(const void*)arg2 error:(id*)arg3;
- (id)archiveStream;
- (id)propertiesForEntryName:(id)arg1;
- (bool)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)streamForEntryName:(id)arg1;
- (id)entryNames;
- (id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3;
- (bool)compareBytes:(const char *)arg1 length:(unsigned int)arg2 withLocalFileHeader:(id)arg3;
- (bool)addCentralDirectoryHeaderWithBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (bool)addCentralDirectoryEndRecordWithBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (bool)addLocalFileHeaderWithBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (int)openArchiveFile:(id*)arg1;
- (id)archiveData;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned long long)arg4;
- (id)contentsForEntryName:(id)arg1;
- (id)initWithPath:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)load:(id*)arg1;
- (id)init;
- (bool)isValid;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
