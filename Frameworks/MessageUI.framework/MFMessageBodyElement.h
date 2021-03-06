/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSString, MFMessageBodyParser;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {
    MFMessageBodyParser *_parser;
    NSArray *_nodes;
    unsigned long long _quoteLevel;
    unsigned long long _externalRetainCount;
    int _validAttributes;
    int _attributes;
}

@property MFMessageBodyParser * parser;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain) NSArray * nodes;


- (unsigned long long)getQuoteLevel;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (int)valueForAttributes:(int)arg1;
- (void)releaseExternally;
- (id)retainExternally;
- (void)_setValue:(int)arg1 forAttributes:(int)arg2;
- (bool)_hasValueForAttributes:(int)arg1;
- (bool)isExternallyRetained;
- (void)setParser:(id)arg1;
- (unsigned long long)quoteLevel;
- (void)setNodes:(id)arg1;
- (id)nodes;
- (id)parser;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)reset;

@end
