/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSMutableData, NSString;

@interface CKDPlaintextResponseBodyParser : NSObject <CKDResponseBodyParser> {
    NSError *_parserError;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _objectParsedBlock;

    NSMutableData *_parserData;
}

@property(copy) id objectParsedBlock;
@property(retain) NSMutableData * parserData;
@property(retain) NSError * parserError;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setParserData:(id)arg1;
- (id)parserData;
- (void)setParserError:(id)arg1;
- (id)objectParsedBlock;
- (void)finishWithCompletion:(id)arg1;
- (void)processData:(id)arg1;
- (void)setObjectParsedBlock:(id)arg1;
- (void).cxx_destruct;
- (id)parserError;

@end
