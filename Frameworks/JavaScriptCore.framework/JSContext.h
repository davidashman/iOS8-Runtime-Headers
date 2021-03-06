/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, JSVirtualMachine, JSValue, JSWrapperMap;

@interface JSContext : NSObject  {
    JSVirtualMachine *m_virtualMachine;
    struct OpaqueJSContext { } *m_context;
    JSWrapperMap *m_wrapperMap;
    struct Strong<JSC::JSObject> { 
        struct JSValue {} *m_slot; 
    } m_exception;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id exceptionHandler;

}

@property(retain,readonly) JSWrapperMap * wrapperMap;
@property(readonly) JSValue * globalObject;
@property(retain) JSValue * exception;
@property(copy) id exceptionHandler;
@property(readonly) JSVirtualMachine * virtualMachine;
@property(copy) NSString * name;

+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
+ (id)currentArguments;
+ (id)currentCallee;
+ (id)currentThis;
+ (id)currentContext;

- (id)wrapperForJSObject:(struct OpaqueJSValue { }*)arg1;
- (id)wrapperForObjCObject:(id)arg1;
- (void)endCallbackWithData:(struct CallbackData { struct CallbackData {} *x1; id x2; id x3; struct OpaqueJSValue {} *x4; struct OpaqueJSValue {} *x5; unsigned long long x6; struct OpaqueJSValue {} **x7; id x8; }*)arg1;
- (void)beginCallbackWithData:(struct CallbackData { struct CallbackData {} *x1; id x2; id x3; struct OpaqueJSValue {} *x4; struct OpaqueJSValue {} *x5; unsigned long long x6; struct OpaqueJSValue {} **x7; id x8; }*)arg1 calleeValue:(struct OpaqueJSValue { }*)arg2 thisValue:(struct OpaqueJSValue { }*)arg3 argumentCount:(unsigned long long)arg4 arguments:(const struct OpaqueJSValue {}**)arg5;
- (bool)boolFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (void)notifyException:(struct OpaqueJSValue { }*)arg1;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop { }*)arg1;
- (struct __CFRunLoop { }*)_debuggerRunLoop;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(bool)arg1;
- (bool)_includesNativeCallStackWhenReportingExceptions;
- (void)_setRemoteInspectionEnabled:(bool)arg1;
- (bool)_remoteInspectionEnabled;
- (id)virtualMachine;
- (id)globalObject;
- (id)wrapperMap;
- (id)exception;
- (id)evaluateScript:(id)arg1;
- (struct OpaqueJSContext { }*)JSGlobalContextRef;
- (id)valueFromNotifyException:(struct OpaqueJSValue { }*)arg1;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)exceptionHandler;
- (void)setExceptionHandler:(id)arg1;
- (void)setException:(id)arg1;
- (id)initWithVirtualMachine:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;
- (id)name;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
