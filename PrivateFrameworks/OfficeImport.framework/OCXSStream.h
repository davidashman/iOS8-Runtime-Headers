/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OCXSStream : NSObject  {
    NSMutableArray *mLevelStack;
}


- (void)pushLevel:(int)arg1 name:(const char *)arg2;
- (int)currentContextChildDepth;
- (bool)popLevel;
- (int)currentContextDepth;
- (bool)hasLevels;
- (id)init;
- (void)dealloc;

@end
