/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSDictionary;

@interface ISDialogButton : NSObject <SSXPCCoding> {
    int _actionType;
    id _parameter;
    NSString *_title;
    long long _urlType;
    NSString *_subtarget;
    NSDictionary *_dictionary;
}

@property(retain) NSDictionary * dictionary;
@property int actionType;
@property(retain) id parameter;
@property(retain) NSString * title;
@property(copy) NSString * subtarget;
@property long long urlType;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)buttonWithTitle:(id)arg1;

- (id)subtarget;
- (void)_openURLWithRequest:(id)arg1;
- (void)setUrlType:(long long)arg1;
- (long long)_urlTypeForString:(id)arg1;
- (void)setSubtarget:(id)arg1;
- (int)_actionTypeForString:(id)arg1;
- (id)parameter;
- (long long)urlType;
- (bool)isEqual:(id)arg1 superficial:(bool)arg2;
- (void)setParameter:(id)arg1;
- (void)setActionTypeWithString:(id)arg1;
- (void)loadFromDictionary:(id)arg1;
- (void)performDefaultActionForDialog:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setActionType:(int)arg1;
- (int)actionType;
- (id)dictionary;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;
- (void)setDictionary:(id)arg1;

@end
