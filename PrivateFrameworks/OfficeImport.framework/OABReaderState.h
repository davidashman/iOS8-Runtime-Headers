/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, <OADColorPalette>;

@interface OABReaderState : NSObject  {
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    <OADColorPalette> *mColorPalette;
    NSMutableDictionary *mBlipIdMap;
    int mGroupDepth;
}

@property int groupDepth;


- (void)setGroupDepth:(int)arg1;
- (int)groupDepth;
- (void)setDrawable:(id)arg1 forBlipId:(int)arg2;
- (id)drawableForBlipId:(int)arg1;
- (void)setColorPalette:(id)arg1;
- (id)colorPalette;
- (void)setEshContent:(struct EshContent { }*)arg1 forId:(int)arg2;
- (struct EshContent { }*)eshContentForId:(int)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned int)arg2;
- (id)drawableForShapeId:(int)arg1;
- (id)initWithClient:(Class)arg1;
- (id)init;
- (Class)client;
- (void)dealloc;

@end
