/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSString, GEORPUserCredentials;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {
    NSData *_devicePushToken;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    bool_didOptIn;
    struct { 
        unsigned int didOptIn : 1; 
    } _has;
}

@property(readonly) bool hasProblemId;
@property(retain) NSString * problemId;
@property bool hasDidOptIn;
@property bool didOptIn;
@property(readonly) bool hasUserCredentials;
@property(retain) GEORPUserCredentials * userCredentials;
@property(readonly) bool hasDevicePushToken;
@property(retain) NSData * devicePushToken;
@property(readonly) bool hasUserEmail;
@property(retain) NSString * userEmail;


- (id)userEmail;
- (id)devicePushToken;
- (bool)didOptIn;
- (bool)hasUserEmail;
- (bool)hasDevicePushToken;
- (bool)hasDidOptIn;
- (void)setHasDidOptIn:(bool)arg1;
- (void)setDidOptIn:(bool)arg1;
- (void)setUserEmail:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (id)userCredentials;
- (bool)hasUserCredentials;
- (void)setUserCredentials:(id)arg1;
- (bool)hasProblemId;
- (void)setProblemId:(id)arg1;
- (id)initWithSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (id)problemId;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
