/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_queue>, <RadiosPreferencesDelegate>;

@interface RadiosPreferences : NSObject  {
    struct __SCPreferences { } *_prefs;
    int _applySkipCount;
    <RadiosPreferencesDelegate> *_delegate;
    bool_isCachedAirplaneModeValid;
    bool_cachedAirplaneMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    boolnotifyForExternalChangeOnly;
}

@property bool airplaneMode;
@property <RadiosPreferencesDelegate> * delegate;
@property bool notifyForExternalChangeOnly;


- (void)setNotifyForExternalChangeOnly:(bool)arg1;
- (void)setCallback:(int (*)())arg1 withContext:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)setAirplaneMode:(bool)arg1;
- (bool)airplaneMode;
- (void)refresh;
- (bool)notifyForExternalChangeOnly;
- (void)initializeSCPrefs:(id)arg1;
- (void)notifyTarget:(unsigned int)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)synchronize;
- (void)setValue:(void*)arg1 forKey:(id)arg2;
- (id)delegate;
- (void)dealloc;
- (oneway void)release;
- (void*)getValueForKey:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end
