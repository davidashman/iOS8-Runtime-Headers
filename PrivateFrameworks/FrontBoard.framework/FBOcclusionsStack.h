/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface FBOcclusionsStack : NSObject  {
    NSCountedSet *_levels;
    NSMutableDictionary *_levelToCompositeOcclusions;
    NSMutableDictionary *_keyToEntry;
    NSMutableArray *_orderedEntries;
    NSMutableSet *_dirtyKeys;
}


- (id)occlusionsAppliedToKey:(id)arg1;
- (id)dirtyKeys;
- (void)enumerateKeysByLevelWithBlock:(id)arg1;
- (void)setKey:(id)arg1 toLevel:(double)arg2 withOcclusions:(id)arg3;
- (void)_adjustEntry:(id)arg1 forLevel:(double)arg2 occlusions:(id)arg3;
- (void)removeKey:(id)arg1;
- (bool)isDirty;
- (id)init;
- (bool)isEmpty;
- (void)dealloc;

@end
