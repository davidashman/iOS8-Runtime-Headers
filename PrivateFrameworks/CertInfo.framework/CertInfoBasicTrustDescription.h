/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSString;

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription> {
    struct __SecTrust { } *_trust;
    int _action;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)isRootCertificate;
- (id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (id)summaryDescriptionItems;
- (bool)isTrusted;
- (id)summarySubtitle;
- (id)summaryTitle;
- (id)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)certificateCount;
- (id)_expirationDate;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 action:(int)arg2;
- (void)dealloc;

@end
