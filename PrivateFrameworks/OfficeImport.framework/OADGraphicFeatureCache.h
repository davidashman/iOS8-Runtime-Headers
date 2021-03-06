/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OITSUNoCopyDictionary;

@interface OADGraphicFeatureCache : NSObject  {
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}


- (id)featuresSortedByUsageCount;
- (unsigned long long)cacheFeature:(id)arg1;
- (id)countedFeatureAtIndex:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end
