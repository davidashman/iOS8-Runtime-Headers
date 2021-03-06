/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKQueryCursor;

@interface CKQueryOperationResult : CKOperationResult <NSSecureCoding> {
    CKQueryCursor *_cursor;
}

@property(retain) CKQueryCursor * cursor;

+ (bool)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (id)cursor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)setCursor:(id)arg1;

@end
