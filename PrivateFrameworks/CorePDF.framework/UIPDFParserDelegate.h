/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSString;

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    } _p[4];
    struct CGPath { } *_path;
    bool_parserError;
}

@property(readonly) struct CGPath { }* path;
@property(readonly) bool parserError;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (struct CGPath { }*)path;
- (id)init;
- (void)dealloc;
- (void)parserDidStartDocument:(id)arg1;
- (bool)parserError;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;

@end
