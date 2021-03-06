/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SSWishlist;

@interface SKUIWishlist : NSObject  {
    SSWishlist *_database;
}

@property(readonly) long long accountIdentifier;
@property(copy,readonly) NSArray * items;

+ (id)activeWishlist;

- (void)removeItemsWithItemIdentifiers:(id)arg1;
- (bool)containsItemWithIdentifier:(long long)arg1;
- (void)postChangeNotification;
- (id)initWithAccountIdentifier:(long long)arg1;
- (id)items;
- (long long)accountIdentifier;
- (void)addItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
