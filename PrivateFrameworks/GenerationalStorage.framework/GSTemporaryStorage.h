/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@class NSURL, <NSCopying><NSSecureCoding>;

@interface GSTemporaryStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring> {
    NSURL *_libraryURL;
    NSURL *_documentURL;
    NSURL *_stagingURL;
    int _lockFd;
}

@property(readonly) NSURL * libraryURL;
@property(retain) NSURL * documentURL;
@property(readonly) <NSCopying><NSSecureCoding> * persistentIdentifier;


- (void)_unprotectPath:(id)arg1;
- (void)_protectPath:(id)arg1;
- (id)_enumerateItemsAtURL:(id)arg1;
- (bool)_writeLock:(id*)arg1;
- (bool)_readLock:(id*)arg1;
- (bool)__lockWithFlags:(int)arg1 error:(id*)arg2;
- (id)_URLForNameSpace:(id)arg1 createIfNeeded:(bool)arg2 allowMissing:(bool)arg3 error:(id*)arg4;
- (id)libraryURL;
- (id)initWithLibraryURL:(id)arg1 forItemAtURL:(id)arg2 error:(id*)arg3;
- (id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
- (bool)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (id)stagingURLforCreatingAdditionWithError:(id*)arg1;
- (id)URLforReplacingItemWithError:(id*)arg1;
- (bool)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (bool)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (bool)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (bool)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id*)arg3;
- (id)getAdditionDictionary:(id)arg1 error:(id*)arg2;
- (void)_unlock;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)persistentIdentifier;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
- (void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(id)arg2;
- (void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(id)arg3;
- (void)cleanupStagingURL:(id)arg1;
- (id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(bool)arg2 creationInfo:(id)arg3 error:(id*)arg4;
- (id)documentURL;
- (void)removeAdditions:(id)arg1 completionHandler:(id)arg2;
- (struct NSEnumerator { Class x1; }*)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
- (void)setDocumentURL:(id)arg1;

@end
