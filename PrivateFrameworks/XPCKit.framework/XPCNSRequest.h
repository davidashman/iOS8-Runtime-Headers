/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@class NSData, <NSCoding>, XPCRequest;

@interface XPCNSRequest : NSObject  {
    <NSCoding> *_message;
    NSData *_data;
    XPCRequest *_request;
}

@property(retain,readonly) XPCRequest * request;
@property(retain,readonly) <NSCoding> * message;
@property(retain,readonly) NSData * data;


- (id)initWithXPCRequest:(id)arg1;
- (id)message;
- (void)sendReply:(id)arg1;
- (id)data;
- (id)request;
- (void).cxx_destruct;

@end
