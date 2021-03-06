/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassImageSet : PKImageSet  {
    struct CGSize { 
        double width; 
        double height; 
    } _displayProfileRectSize;
}

+ (bool)archivedObject:(id)arg1 matchesDisplayProfile:(id)arg2;
+ (Class)classForImageSetType:(long long)arg1;

- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
