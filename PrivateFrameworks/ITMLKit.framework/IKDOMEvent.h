/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSString, IKDOMNode, NSDate;

@interface IKDOMEvent : IKJSObject <IKJSDOMEvent> {
    bool_bubbles;
    bool_cancelable;
    bool_inUse;
    bool_defaultPrevented;
    NSString *_type;
    IKDOMNode *_target;
    NSDate *_timeStamp;
    NSString *_xmlAttribute;
    IKDOMNode *_currentTarget;
    long long _eventPhase;
    long long _dispatchState;
}

@property(retain) IKDOMNode * target;
@property(retain,readonly) NSString * xmlAttribute;
@property(getter=isInUse) bool inUse;
@property(retain) IKDOMNode * currentTarget;
@property long long eventPhase;
@property long long dispatchState;
@property bool defaultPrevented;
@property(retain,readonly) NSString * type;
@property(readonly) bool bubbles;
@property(readonly) bool cancelable;
@property(readonly) NSDate * timeStamp;


- (id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(bool)arg4 isCancelable:(bool)arg5;
- (void)setDispatchState:(long long)arg1;
- (long long)dispatchState;
- (void)setEventPhase:(long long)arg1;
- (void)setCurrentTarget:(id)arg1;
- (bool)isImmediatePropagationStopped;
- (id)xmlAttribute;
- (void)updateDispatchStateWithCurrentTarget:(id)arg1 phase:(long long)arg2;
- (bool)isPropagationStopped;
- (void)setInUse:(bool)arg1;
- (bool)isInUse;
- (void)stopImmediatePropagation;
- (void)preventDefault;
- (void)stopPropagation;
- (bool)defaultPrevented;
- (bool)cancelable;
- (bool)bubbles;
- (long long)eventPhase;
- (id)currentTarget;
- (void)setTarget:(id)arg1;
- (id)type;
- (void).cxx_destruct;
- (id)target;
- (id)timeStamp;
- (void)setDefaultPrevented:(bool)arg1;

@end
