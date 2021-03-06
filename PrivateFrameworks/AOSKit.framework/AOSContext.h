/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSThread, NSString;

@interface AOSContext : NSObject <NSPortDelegate> {
    struct AOSAccount { } *_account;

  /* Error parsing encoded ivar type info: ^{AOSTransactionC=#CC^v^{__CFError}^?@?@^v@^?^?} */
    struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void *x10; id x11; int (*x12)(); int (*x13)(); } *_transaction;

    int (*_callback)();
    NSThread *_callbackThread;
    id _info;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)contextWithAccount:(struct AOSAccount { }*)arg1 andTransaction:(struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void *x10; id x11; int (*x12)(); int (*x13)(); }*)arg2;
     /* Encoded args for previous method: @32@0:8^{AOSAccount=}16^{AOSTransactionC=#CC^v^{__CFError}^?@?@^v@^?^?}24 */


- (bool)scheduleCallback;
- (void)_performCallback;
- (id)_callbackThread;
- (struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void *x10; id x11; int (*x12)(); int (*x13)(); }*)transaction;
     /* Encoded args for previous method: ^{AOSTransactionC=#CC^v^{__CFError}^?@?@^v@^?^?}16@0:8 */

- (void)setTransaction:(struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id x9; void *x10; id x11; int (*x12)(); int (*x13)(); }*)arg1;
     /* Encoded args for previous method: v24@0:8^{AOSTransactionC=#CC^v^{__CFError}^?@?@^v@^?^?}16 */

- (struct AOSAccount { }*)account;
- (void)setAccount:(struct AOSAccount { }*)arg1;
- (id)info;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (void)setInfo:(id)arg1;

@end
