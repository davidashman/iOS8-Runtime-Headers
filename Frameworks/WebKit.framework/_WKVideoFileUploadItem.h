/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKVideoFileUploadItem : _WKFileUploadItem  {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _filePath;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    } _mediaURL;
}


- (id)initWithFilePath:(id)arg1 mediaURL:(id)arg2;
- (bool)isVideo;
- (id)fileURL;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)displayImage;

@end
