/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem  {
    NSString *_transferGUID;
    unsigned int _wantsAttachmentContiguous : 1;
}

@property(copy,readonly) NSString * transferGUID;


- (id)transferGUID;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 transferGUID:(id)arg4;
- (bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
