/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray *_subscriptions;
}

@property(retain) NSMutableArray * subscriptions;


- (id)subscriptionsAtIndex:(unsigned long long)arg1;
- (void)clearSubscriptions;
- (unsigned long long)subscriptionsCount;
- (void)addSubscriptions:(id)arg1;
- (id)subscriptions;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
