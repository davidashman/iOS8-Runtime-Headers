/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding> {
    NSString *_clientIdentifier;
    long long _itemState;
    NSString *_representativeTitle;
    NSString *_statusString;
    long long _totalNumberOfItems;
    unsigned long long _transferTypes;
}

@property(copy) NSString * clientIdentifier;
@property long long itemState;
@property(copy) NSString * representativeTitle;
@property(copy) NSString * statusString;
@property long long totalNumberOfItems;
@property unsigned long long transferTypes;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (long long)itemState;
- (void)setItemState:(long long)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTransferTypes:(unsigned long long)arg1;
- (unsigned long long)transferTypes;
- (void)setTotalNumberOfItems:(long long)arg1;
- (long long)totalNumberOfItems;
- (void)setRepresentativeTitle:(id)arg1;
- (id)representativeTitle;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)statusString;
- (id)clientIdentifier;
- (void)dealloc;
- (void)setClientIdentifier:(id)arg1;

@end
