/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode  {
    NSCountedSet *_addresses;
    NSString *_combinedName;
}


- (void)getBrowserName:(id)arg1;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
- (void)addAddress:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end
