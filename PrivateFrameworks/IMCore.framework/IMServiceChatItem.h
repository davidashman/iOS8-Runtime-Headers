/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMServiceImpl, IMHandle;

@interface IMServiceChatItem : IMTranscriptChatItem  {
    IMHandle *_handle;
    IMServiceImpl *_service;
}

@property(retain,readonly) IMServiceImpl * service;
@property(retain,readonly) IMHandle * handle;


- (id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3;
- (id)handle;
- (id)service;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
