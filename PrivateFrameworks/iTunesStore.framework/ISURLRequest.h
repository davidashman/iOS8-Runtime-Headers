/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSData, NSString, NSURL, NSLock, NSArray, NSDictionary, NSInputStream, SSMutableURLRequestProperties;

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {
    NSLock *_lock;
    SSMutableURLRequestProperties *_properties;
}

@property(retain) NSString * appleClientApplication;
@property(retain) NSData * HTTPBody;
@property(retain) NSInputStream * HTTPBodyStream;
@property(retain) NSString * HTTPMethod;
@property(retain) NSDictionary * queryStringDictionary;
@property(readonly) NSURL * primaryURL;
@property(retain) NSArray * URLs;
@property long long allowedRetryCount;
@property double timeoutInterval;
@property unsigned long long cachePolicy;
@property(retain) NSDictionary * customHeaders;
@property long long URLBagType;
@property long long expectedContentLength;

+ (id)requestWithURL:(id)arg1;

- (void)setAppleClientApplication:(id)arg1;
- (long long)URLBagType;
- (long long)allowedRetryCount;
- (id)_initCommon;
- (id)initWithRequestProperties:(id)arg1;
- (void)setExpectedContentLength:(long long)arg1;
- (void)setAllowedRetryCount:(long long)arg1;
- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (void)setQueryStringDictionary:(id)arg1;
- (void)setCustomHeaders:(id)arg1;
- (id)primaryURL;
- (id)queryStringDictionary;
- (id)customHeaders;
- (void)setURLBagType:(long long)arg1;
- (id)appleClientApplication;
- (id)requestProperties;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (double)timeoutInterval;
- (unsigned long long)cachePolicy;
- (id)HTTPMethod;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPBody:(id)arg1;
- (long long)expectedContentLength;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)URLs;
- (void)setURLs:(id)arg1;

@end
