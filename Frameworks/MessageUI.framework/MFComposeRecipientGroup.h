/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSString;

@interface MFComposeRecipientGroup : MFComposeRecipient  {
    NSArray *_children;
    NSString *_displayString;
}


- (id)initWithChildren:(id)arg1 displayString:(id)arg2;
- (void)_populateSortedChildren;
- (id)completelyMatchedAttributedStrings;
- (bool)wasCompleteMatch;
- (id)childrenWithCompleteMatches;
- (id)sortedChildren;
- (id)unlocalizedLabel;
- (bool)isRemovableFromSearchResults;
- (id)placeholderName;
- (id)commentedAddress;
- (id)compositeName;
- (void*)record;
- (int)property;
- (id)displayString;
- (id)label;
- (int)recordID;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)address;
- (bool)isGroup;
- (id)children;

@end
