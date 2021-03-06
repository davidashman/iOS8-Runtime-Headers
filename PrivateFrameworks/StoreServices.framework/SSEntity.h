/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableDictionary, NSArray, NSDictionary, SSXPCConnection, NSObject<OS_dispatch_queue>, NSString;

@interface SSEntity : NSObject <SSXPCCoding> {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_localExternalValues;
    NSMutableDictionary *_localValues;
    long long _pid;
    NSArray *_dirtyLocalExternalProperties;
    NSArray *_dirtyLocalProperties;
}

@property(readonly) bool exists;
@property(readonly) long long _persistentIdentifier;
@property(getter=_localExternalValues,setter=_setLocalExternalValues:,copy) NSDictionary * _localExternalValues;
@property(getter=_localValues,setter=_setLocalValues:,copy) NSDictionary * _localValues;
@property(getter=_isManaged,readonly) bool _managed;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (long long)_setValuesMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;

- (void)resetCachedProperties:(const id*)arg1 count:(unsigned long long)arg2;
- (void)resetCachedExternalProperties:(const id*)arg1 count:(unsigned long long)arg2;
- (void)__addCachedPropertyValues:(id)arg1;
- (void)__addCachedExternalValues:(id)arg1;
- (long long)_persistentIdentifier;
- (void)getValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (void)_getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 message:(long long)arg4;
- (void)_setDirtyCachedProperties:(id)arg1;
- (void)_setDirtyCachedExternalProperties:(id)arg1;
- (void)_setLocalValues:(id)arg1;
- (id)_localValues;
- (void)_setLocalExternalValues:(id)arg1;
- (id)_localExternalValues;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (void)_resetLocalIVars;
- (bool)setValuesWithDictionary:(id)arg1;
- (bool)setExternalValuesWithDictionary:(id)arg1;
- (void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (bool)_isManaged;
- (id)valueForExternalProperty:(id)arg1;
- (void)_becomeManagedOnConnection:(id)arg1;
- (id)_initWithPersistentIdentifier:(long long)arg1;
- (bool)exists;
- (id)copyXPCEncoding;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)dealloc;
- (id)description;

@end
