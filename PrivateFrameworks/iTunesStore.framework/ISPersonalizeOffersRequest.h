/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, NSMutableDictionary, NSArray;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {
    NSNumber *_accountIdentifier;
    NSMutableDictionary *_itemIDsByType;
}

@property(retain) NSNumber * accountIdentifier;
@property(readonly) NSArray * allItemTypes;


- (void)addItemIdentifier:(id)arg1 forItemType:(id)arg2;
- (id)itemIdentifiersForItemType:(id)arg1;
- (id)allItemTypes;
- (id)initWithItems:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
