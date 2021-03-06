/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, NSURL;

@interface DOMHTMLImageElement : DOMHTMLElement  {
}

@property(copy) NSString * name;
@property(copy) NSString * align;
@property(copy) NSString * alt;
@property(copy) NSString * border;
@property int height;
@property int hspace;
@property bool isMap;
@property(copy) NSString * longDesc;
@property(copy) NSString * src;
@property(copy) NSString * useMap;
@property int vspace;
@property int width;
@property(readonly) bool complete;
@property(copy) NSString * lowsrc;
@property(readonly) int naturalHeight;
@property(readonly) int naturalWidth;
@property(readonly) int x;
@property(readonly) int y;
@property(copy,readonly) NSString * altDisplayString;
@property(copy,readonly) NSURL * absoluteImageURL;

+ (double)mf_maxPhotoWidth;
+ (id)mf_edgeToEdgeImageAttachmentStyle;

- (void)setHeight:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)height;
- (int)width;
- (void)setName:(id)arg1;
- (id)altDisplayString;
- (int)naturalWidth;
- (int)naturalHeight;
- (void)setLowsrc:(id)arg1;
- (id)lowsrc;
- (void)setUseMap:(id)arg1;
- (id)useMap;
- (void)setSrcset:(id)arg1;
- (id)srcset;
- (void)setIsMap:(bool)arg1;
- (bool)isMap;
- (void)setCrossOrigin:(id)arg1;
- (id)crossOrigin;
- (void)setLongDesc:(id)arg1;
- (id)longDesc;
- (void)setSrc:(id)arg1;
- (id)src;
- (void)setVspace:(int)arg1;
- (int)vspace;
- (void)setHspace:(int)arg1;
- (int)hspace;
- (void)setAlt:(id)arg1;
- (id)alt;
- (void)setAlign:(id)arg1;
- (id)align;
- (void)setBorder:(id)arg1;
- (id)border;
- (id)name;
- (bool)complete;
- (int)y;
- (int)x;
- (id)absoluteImageURL;
- (id)mimeType;
- (id)dataRepresentation:(bool)arg1;
- (bool)showsTapHighlight;
- (bool)alwaysAttemptToShowTapHighlight;
- (void)mf_applyEdgeToEdgeStyle;
- (bool)mf_shouldFormatEdgeToEdge;
- (bool)mf_isEdgeToEdgeFormatted;
- (void)recursivelyRemoveMailAttributes;
- (void)mf_unconstrainImageSize;
- (void)mf_constrainImageToSize:(struct CGSize { double x1; double x2; })arg1;

@end
