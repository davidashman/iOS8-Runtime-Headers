/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libmecabra.dylib
 */

@class NSString, NSMutableString, NSArray, NSMutableArray;

@interface MecabraAnalysisContextImpl : NSObject  {
    NSMutableArray *_candidateContext;
    NSString *_stringContext;
    NSString *_stringBeforeCaret;
    NSMutableString *_candidateContextString;
    bool_rebuildCandidateContextString;
}

@property(retain) NSString * stringBeforeCaret;
@property(retain) NSString * stringContext;
@property(readonly) NSArray * candidateContextForAnalysis;
@property(readonly) NSString * stringContextForAnalysis;
@property(retain) NSMutableString * candidateContextString;
@property(retain) NSMutableArray * candidateContext;
@property bool rebuildCandidateContextString;


- (void)setCandidateContextString:(id)arg1;
- (void)setCandidateContext:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })positionInContextWithPartialDocumentStringLength:(unsigned long long)arg1;
- (void)clearContextForAddition;
- (id)stringContext;
- (id)stringBeforeCaret;
- (void)setRebuildCandidateContextString:(bool)arg1;
- (id)candidateContext;
- (bool)rebuildCandidateContextString;
- (id)candidateContextString;
- (id)candidateContextForAnalysis;
- (id)stringContextForAnalysis;
- (void)revertLastCommittedCandidate;
- (void)adjustCandidateContext;
- (void)setStringContext:(id)arg1;
- (void)setStringBeforeCaret:(id)arg1;
- (void)addCandidate:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)reset;

@end
