/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking> {
    void *_priv;
}

@property(copy) NSString * name;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (bool)tryLock;
- (void)setName:(id)arg1;
- (id)init;
- (id)name;
- (void)unlock;
- (void)lock;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (bool)isLocking;
- (bool)lockBeforeDate:(id)arg1;

@end
