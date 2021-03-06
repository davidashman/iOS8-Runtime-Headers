/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSObject<OS_dispatch_queue>, NSHashTable;

@interface DAAccountMonitor : NSObject  {
    NSHashTable *_accounts;
    NSObject<OS_dispatch_queue> *_accountsQueue;
}

@property(retain) NSHashTable * accounts;
@property(retain) NSObject<OS_dispatch_queue> * accountsQueue;

+ (id)sharedMonitor;

- (id)monitoredAccounts;
- (id)accountsQueue;
- (void)setAccountsQueue:(id)arg1;
- (void)monitorAccount:(id)arg1;
- (void)unmonitorAccount:(id)arg1;
- (void)setAccounts:(id)arg1;
- (id)accounts;
- (id)init;
- (void).cxx_destruct;

@end
