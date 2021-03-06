/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSData, NSError, NSObject<OS_dispatch_queue>, NSMutableData;

@interface CKDProtobufResponseBodyParser : NSObject <CKDResponseBodyParser> {
    bool_isParsing;
    Class _messageClass;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _objectParsedBlock;

    NSError *_parserError;
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSData *_parserData;
    NSMutableData *_tailParserData;
    unsigned long long _curObjectLength;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    } _mescalSignature;
}

@property Class messageClass;
@property(copy) id objectParsedBlock;
@property(retain) NSError * parserError;
@property(retain) NSObject<OS_dispatch_queue> * parseQueue;
@property(retain) NSData * parserData;
@property(retain) NSMutableData * tailParserData;
@property unsigned long long curObjectLength;
@property bool isParsing;
@property struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; } mescalSignature;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setMescalSignature:(struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })arg1;
- (struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })mescalSignature;
- (void)setParseQueue:(id)arg1;
- (bool)_parseObjects:(bool)arg1;
- (id)tailParserData;
- (void)setIsParsing:(bool)arg1;
- (id)parseQueue;
- (void)setTailParserData:(id)arg1;
- (bool)_parseObjectFromData:(id)arg1 rawData:(id)arg2;
- (void)setCurObjectLength:(unsigned long long)arg1;
- (unsigned long long)curObjectLength;
- (void)setParserData:(id)arg1;
- (id)parserData;
- (void)setParserError:(id)arg1;
- (id)objectParsedBlock;
- (void)finishWithCompletion:(id)arg1;
- (void)processData:(id)arg1;
- (void)setObjectParsedBlock:(id)arg1;
- (Class)messageClass;
- (void)setMessageClass:(Class)arg1;
- (bool)isParsing;
- (id)init;
- (void).cxx_destruct;
- (id)parserError;

@end
