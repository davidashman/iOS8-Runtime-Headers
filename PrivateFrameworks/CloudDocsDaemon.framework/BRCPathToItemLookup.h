/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCItemID, BRCRelativePath, BRCLocalItem, BRCPackageItem, BRCServerItem;

@interface BRCPathToItemLookup : NSObject  {
    BRCRelativePath *_pathOfItem;
    BRCRelativePath *_pathInPackage;
    BRCLocalItem *_matchByFileID;
    BRCLocalItem *_matchByDocumentID;
    BRCLocalItem *_matchByPath;
    BRCServerItem *_serverItem;
    BRCServerItem *_serverByPath;
    BRCPackageItem *_packageItem;
    BRCItemID *_parentID;
    struct { 
        unsigned int byFileID : 1; 
        unsigned int byDocumentID : 1; 
        unsigned int byPath : 1; 
        unsigned int parentID : 1; 
        unsigned int serverItem : 1; 
        unsigned int serverByPath : 1; 
        unsigned int packageItem : 1; 
    } _fetched;
}

@property(readonly) BRCRelativePath * relpathOfItem;
@property(readonly) BRCRelativePath * relpathInPackage;
@property(readonly) BRCRelativePath * relpathOfFSEvent;
@property(readonly) BRCLocalItem * byPath;
@property(retain) BRCLocalItem * byFileID;
@property(retain) BRCLocalItem * byDocumentID;
@property(readonly) BRCServerItem * serverByPath;
@property(readonly) BRCItemID * parentID;
@property(readonly) BRCPackageItem * packageItem;

+ (id)lookupForRelativePath:(id)arg1;

- (id)relpathInPackage;
- (id)relpathOfItem;
- (id)packageItem;
- (id)serverByPath;
- (id)serverItemFor:(id)arg1;
- (id)byDocumentID;
- (id)byFileID;
- (void)setByDocumentID:(id)arg1;
- (void)setByFileID:(id)arg1;
- (id)relpathOfFSEvent;
- (id)byPath;
- (bool)_fetchByDocumentID;
- (bool)_fetchByFileID;
- (bool)_fetchByPath;
- (id)initWithRelativePath:(id)arg1;
- (id)parentID;
- (void).cxx_destruct;
- (id)description;

@end
