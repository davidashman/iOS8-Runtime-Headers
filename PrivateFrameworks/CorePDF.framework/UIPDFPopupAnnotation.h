/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFAnnotation;

@interface UIPDFPopupAnnotation : UIPDFAnnotation  {
    UIPDFAnnotation *parent;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _adjustedBounds;
}

@property UIPDFAnnotation * parent;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } adjustedBounds;


- (void)setAdjustedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedBounds;
- (bool)recognizeGestures;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1;
- (int)annotationType;
- (void)setParent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)init;
- (id)parent;
- (Class)viewClass;

@end
