/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSDictionary, NSData, NSNumber;

@interface IDSInitiateMessage : IDSFaceTimeMessage <NSCopying> {
    NSData *_selfBlob;
    NSData *_selfPushToken;
    NSNumber *_selfNATType;
    NSData *_selfNatIP;
    NSArray *_peers;
    NSArray *_canonicalizedPeers;
    NSDictionary *_regionInformation;
}

@property(copy) NSData * selfBlob;
@property(copy) NSData * selfPushToken;
@property(copy) NSNumber * selfNATType;
@property(copy) NSData * selfNatIP;
@property(copy) NSDictionary * regionInformation;
@property(copy) NSArray * peers;
@property(copy) NSArray * canonicalizedPeers;


- (id)requiredKeys;
- (id)messageBody;
- (void)setRegionInformation:(id)arg1;
- (id)canonicalizedPeers;
- (void)setSelfNatIP:(id)arg1;
- (void)setCanonicalizedPeers:(id)arg1;
- (id)selfNatIP;
- (id)regionInformation;
- (void)setPeers:(id)arg1;
- (id)peers;
- (void)setSelfNATType:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)selfBlob;
- (id)selfNATType;
- (void)setSelfPushToken:(id)arg1;
- (id)selfPushToken;
- (id)bagKey;
- (void)setSelfBlob:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
