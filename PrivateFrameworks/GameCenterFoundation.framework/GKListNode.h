/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKListNode;

@interface GKListNode : NSObject  {
    id _value;
    GKListNode *_prevNode;
    GKListNode *_nextNode;
}

@property GKListNode * nextNode;
@property GKListNode * prevNode;
@property(retain) id value;


- (void)setNextNode:(id)arg1;
- (void)setPrevNode:(id)arg1;
- (id)prevNode;
- (id)initWithValue:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)nextNode;

@end
