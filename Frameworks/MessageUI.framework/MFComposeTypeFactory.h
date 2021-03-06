/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeTypeFactory : NSObject  {
}

+ (id)subjectFromSubject:(id)arg1 withComposeType:(int)arg2;
+ (id)messageFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (void)addAttachment:(id)arg1 prepend:(bool)arg2 withCompositionModel:(id)arg3 delegate:(id)arg4;
+ (id)headersFromDelegate:(id)arg1;
+ (void)_setupForNewMessageWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_setupForForwardWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_setupForReplyAllWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_setupForReplyWithModel:(id)arg1 delegate:(id)arg2;
+ (void)_sanitizeRecipientsForComposeType:(unsigned long long)arg1 sendingAddress:(id)arg2 delegate:(id)arg3;
+ (void)_quoteFromModel:(id)arg1 delegate:(id)arg2;
+ (void)_updateDelegate:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4;
+ (void)_mergeModel:(id)arg1 withDelegate:(id)arg2;
+ (void)_prependPreamble:(id)arg1 toBodyField:(id)arg2;
+ (void)_prependQuotedMarkup:(id)arg1 shouldIndent:(bool)arg2 toBodyField:(id)arg3;
+ (void)_setContent:(id)arg1 includeAttachments:(bool)arg2 shouldQuote:(bool)arg3 prependBlankLine:(bool)arg4 delegate:(id)arg5;
+ (id)_markupForInlineAttachment:(id)arg1 willBeIncluded:(bool)arg2 prependBlankLine:(bool)arg3 delegate:(id)arg4;
+ (id)headersFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (id)messageFromDelegate:(id)arg1 withSubstituteDOMDocument:(id)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4;
+ (void)setupWithContent:(id)arg1 delegate:(id)arg2;
+ (void)setupWithCompositionModel:(id)arg1 delegate:(id)arg2;
+ (unsigned long long)imageScaleFromUserDefaults;


@end
