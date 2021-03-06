/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class <SLFacebookLoginInfoViewControllerDelegate>, SLFacebookLoginInfoFooter;

@interface SLFacebookLoginInfoViewController : UITableViewController  {
    SLFacebookLoginInfoFooter *_footerView;
    <SLFacebookLoginInfoViewControllerDelegate> *_delegate;
}

@property <SLFacebookLoginInfoViewControllerDelegate> * delegate;


- (void)_signInTapped:(id)arg1;
- (void)_cancelTapped:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
