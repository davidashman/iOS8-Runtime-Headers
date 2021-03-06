/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSExtension, NSArray;

@interface _UIDocumentPickerDescriptor : NSObject  {
    NSExtension *_extension;
}

@property(copy,readonly) NSString * identifier;
@property(copy,readonly) NSString * localizedName;
@property(copy,readonly) NSArray * supportedContentTypes;
@property bool enabled;
@property(retain) NSExtension * extension;
@property(copy,readonly) NSString * nonUIIdentifier;
@property(retain,readonly) NSString * fileProviderDocumentGroup;

+ (BOOL)cloudEnabledStatus;
+ (void)setCloudEnabledStatus:(BOOL)arg1;
+ (id)descriptorWithIdentifier:(id)arg1;
+ (id)defaultPickerIdentifierForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (void)setHostBundleID:(id)arg1;
+ (id)enabledPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)allPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)allPickers;
+ (id)hostBundleID;

- (bool)enabled;
- (id)identifier;
- (void)setEnabled:(bool)arg1;
- (id)localizedName;
- (long long)compare:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)imageWithScale:(double)arg1;
- (id)nonUIIdentifier;
- (id)fileProviderDocumentGroup;
- (id)nonUIBundle;
- (id)_parentApp;
- (id)_ownBundle;
- (id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2;
- (bool)supportsPickerMode:(unsigned long long)arg1;
- (id)extension;
- (id)supportedContentTypes;
- (void)setExtension:(id)arg1;

@end
