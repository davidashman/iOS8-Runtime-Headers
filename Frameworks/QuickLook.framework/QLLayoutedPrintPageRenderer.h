/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIWebPaginationInfo, NSMutableArray;

@interface QLLayoutedPrintPageRenderer : QLWebViewPrintPageHelper  {
    NSMutableArray *_nodes;
    UIWebPaginationInfo *_paginationInfo;
}


- (id)_currentNodes;
- (id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(bool*)arg2;
- (id)_htmlPageXPath;
- (void)dealloc;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)numberOfPages;

@end
