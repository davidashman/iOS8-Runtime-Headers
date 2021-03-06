/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVXMLElementGenerator, NSDictionary, NSURL, NSMutableData, NSString, CoreDAVItem;

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate> {
    int _parsingState;
    SEL _parentElementSetter;
    CoreDAVItem *_element;
    CoreDAVItem *_parentElement;
    CoreDAVXMLElementGenerator *_parentGenerator;
    NSMutableData *_characters;
    NSMutableData *_cDATA;
    CoreDAVXMLElementGenerator *_currentlyParsingSubItem;
    NSDictionary *_cachedElementParseRules;
    bool_checkedElementValidityIfRootElement;
    bool_isUnrecognized;
    NSURL *_baseURL;
}

@property(retain) CoreDAVItem * element;
@property bool isUnrecognized;
@property bool checkedElementValidityIfRootElement;
@property int parsingState;
@property SEL parentElementSetter;
@property(retain) NSMutableData * characters;
@property(retain) NSMutableData * cDATA;
@property(retain) CoreDAVXMLElementGenerator * currentlyParsingSubItem;
@property CoreDAVXMLElementGenerator * parentGenerator;
@property(retain) NSDictionary * cachedElementParseRules;
@property(retain) NSURL * baseURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setElement:(id)arg1;
- (void)setParentGenerator:(id)arg1;
- (void)setParentElementSetter:(SEL)arg1;
- (id)initWithParser:(id)arg1 baseURL:(id)arg2 rootElementNameSpace:(id)arg3 elementName:(id)arg4 parseClass:(Class)arg5;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)resumeParsingWithParser:(id)arg1;
- (int)parsingState;
- (void)setCDATA:(id)arg1;
- (SEL)parentElementSetter;
- (bool)isUnrecognized;
- (id)cDATA;
- (void)setParsingState:(int)arg1;
- (void)setIsUnrecognized:(bool)arg1;
- (void)setCurrentlyParsingSubItem:(id)arg1;
- (void)setCachedElementParseRules:(id)arg1;
- (id)cachedElementParseRules;
- (void)notifyElement:(id)arg1 ofAttributesFound:(id)arg2;
- (void)noteChildCascadingFailure;
- (bool)isExpectedNameSpace:(id)arg1 andElementName:(id)arg2;
- (void)setCheckedElementValidityIfRootElement:(bool)arg1;
- (bool)checkedElementValidityIfRootElement;
- (id)currentlyParsingSubItem;
- (bool)tracksRootElement;
- (id)element;
- (id)parentGenerator;
- (id)initWithParser:(id)arg1 parentGenerator:(id)arg2 parentElementSetter:(SEL)arg3 element:(id)arg4;
- (id)characters;
- (void)setBaseURL:(id)arg1;
- (id)baseURL;
- (void)dealloc;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)setCharacters:(id)arg1;

@end
