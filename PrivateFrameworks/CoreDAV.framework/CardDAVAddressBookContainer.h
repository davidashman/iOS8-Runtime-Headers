/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer  {
    NSString *_maxResourceSize;
    NSString *_maxImageSize;
    NSURL *_meCardURL;
}

@property(retain) NSString * maxResourceSize;
@property(retain) NSString * maxImageSize;
@property(retain) NSURL * meCardURL;
@property(readonly) bool isAddressBook;
@property(readonly) bool isSharedAddressBook;
@property(readonly) bool isSearchAddressBook;

+ (id)copyPropertyMappingsForParser;

- (id)meCardURL;
- (bool)isSharedAddressBook;
- (bool)isSearchAddressBook;
- (bool)isAddressBook;
- (void)setMeCardURL:(id)arg1;
- (void)setMaxImageSize:(id)arg1;
- (void)setMaxResourceSize:(id)arg1;
- (id)maxImageSize;
- (id)maxResourceSize;
- (void)applyParsedProperties:(id)arg1;
- (void)dealloc;
- (id)description;

@end
