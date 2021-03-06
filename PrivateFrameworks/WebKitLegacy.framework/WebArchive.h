/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSData, WebResource, WebArchivePrivate;

@interface WebArchive : NSObject <NSCoding, NSCopying> {
    WebArchivePrivate *_private;
}

@property(readonly) WebResource * mainResource;
@property(copy,readonly) NSArray * subresources;
@property(copy,readonly) NSArray * subframeArchives;
@property(copy,readonly) NSData * data;

+ (id)bundleForClass;

- (struct LegacyWebArchive { int (**x1)(); unsigned int x2; struct RefPtr<WebCore::ArchiveResource> { struct ArchiveResource {} *x_3_1_1; } x3; struct Vector<WTF::RefPtr<WebCore::ArchiveResource>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::ArchiveResource> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct Vector<WTF::RefPtr<WebCore::Archive>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::Archive> {} *x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; }*)_coreLegacyWebArchive;
- (id)_initWithCoreLegacyWebArchive:(struct PassRefPtr<WebCore::LegacyWebArchive> { struct LegacyWebArchive {} *x1; })arg1;
- (id)subframeArchives;
- (id)mainResource;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;
- (id)subresources;
- (id)init;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
