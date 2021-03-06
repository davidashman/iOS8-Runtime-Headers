/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString, CPLResource;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {
    long long _priority;
    bool_cancelled;
    CPLResource *_resource;
    NSString *_taskIdentifier;
}

@property(retain) CPLResource * resource;
@property(copy) NSString * taskIdentifier;
@property(getter=isHighPriority) bool highPriority;
@property(getter=isCancelled,readonly) bool cancelled;

+ (bool)supportsSecureCoding;

- (void)cancelTask;
- (bool)isHighPriority;
- (void)setResource:(id)arg1;
- (id)resource;
- (void)setHighPriority:(bool)arg1;
- (bool)isCancelled;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setTaskIdentifier:(id)arg1;
- (id)taskIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)launch;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;

@end
