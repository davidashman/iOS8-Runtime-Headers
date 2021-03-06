/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSSharedKeySet;

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding> {
    char *_g;
    unsigned char _select;
    void *_rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int *_seeds;
    id *_keys;
    NSSharedKeySet *_subSharedKeySet;
}

@property char * g;
@property unsigned char select;
@property void* rankTable;
@property double c;
@property unsigned int M;
@property unsigned int factor;
@property unsigned int numKey;
@property unsigned int* seeds;
@property id* keys;
@property(retain) NSSharedKeySet * subSharedKeySet;

+ (id)keySetWithKeys:(id)arg1;

- (id*)keys;
- (id)init;
- (id)generateSubclassCode:(id)arg1 printChainOfKeySetIfPossible:(bool)arg2 printSpecialCode:(unsigned long long)arg3;
- (unsigned long long)indexForKey:(id)arg1;
- (id)subSharedKeySet;
- (unsigned int*)seeds;
- (unsigned int)numKey;
- (unsigned int)factor;
- (unsigned int)M;
- (double)c;
- (void*)rankTable;
- (unsigned char)select;
- (char *)g;
- (unsigned long long)maximumIndex;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)keySetCount;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)isEmpty;
- (id)initWithKeys:(id*)arg1 count:(unsigned long long)arg2;
- (void)setSubSharedKeySet:(id)arg1;
- (void)setKeys:(id*)arg1;
- (void)setRankTable:(void*)arg1;
- (void)setG:(char *)arg1;
- (void)setSeeds:(unsigned int*)arg1;
- (void)setNumKey:(unsigned int)arg1;
- (void)setFactor:(unsigned int)arg1;
- (void)setM:(unsigned int)arg1;
- (void)setC:(double)arg1;
- (void)setSelect:(unsigned char)arg1;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
