/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIWordTokenizer : NSObject  {
    NSString *m_string;
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directUniCharBuffer; 
        char *directCStringBuffer; 
        struct { 
            long long location; 
            long long length; 
        } rangeToBuffer; 
        long long bufferedRangeStart; 
        long long bufferedRangeEnd; 
    } m_inlineBuffer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } m_tokenRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } m_searchRange;
    unsigned long long m_bufferOffset;
}


- (id)allTokensForString:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCurrentToken;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })advanceToNextToken;
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (void)dealloc;

@end
