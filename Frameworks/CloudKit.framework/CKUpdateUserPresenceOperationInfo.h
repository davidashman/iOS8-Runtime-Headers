/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, CKShareID;

@interface CKUpdateUserPresenceOperationInfo : CKOperationInfo  {
    bool_isLurk;
    long long _status;
    unsigned long long _customStatusFlags;
    double _ttl;
    CKShareID *_shareID;
    NSString *_lastETag;
}

@property long long status;
@property unsigned long long customStatusFlags;
@property double ttl;
@property bool isLurk;
@property(retain) CKShareID * shareID;
@property(retain) NSString * lastETag;

+ (bool)supportsSecureCoding;

- (double)ttl;
- (bool)isLurk;
- (void)setTtl:(double)arg1;
- (void)setLastETag:(id)arg1;
- (id)lastETag;
- (void)setCustomStatusFlags:(unsigned long long)arg1;
- (unsigned long long)customStatusFlags;
- (void)setIsLurk:(bool)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
