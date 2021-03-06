/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject  {
    NSURL *_URL;
    UIImage *_thumbnail;
    long long _attachmentURLType;
}

@property(retain) NSURL * URL;
@property(retain) UIImage * thumbnail;
@property long long attachmentURLType;


- (id)thumbnail;
- (bool)isFileURL;
- (id)scheme;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)dealloc;
- (void)setAttachmentURLType:(long long)arg1;
- (void)setThumbnail:(id)arg1;
- (long long)attachmentURLType;

@end
