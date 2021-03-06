/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIRenditionKey, NSString, NSData;

@interface CUINamedData : NSObject  {
    CUIRenditionKey *_key;
    unsigned long long _storageRef;
    NSString *_name;
}

@property(copy) NSString * name;
@property(readonly) NSString * utiType;
@property(readonly) NSData * data;


- (void)setName:(id)arg1;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (id)_renditionName;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)_themeStore;
- (id)_rendition;
- (id)utiType;
- (id)name;
- (id)data;
- (void)dealloc;
- (id)description;

@end
