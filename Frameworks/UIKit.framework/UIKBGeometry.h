/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    struct { 
        double amount; 
        int unit; 
    } m_x;
    struct { 
        double amount; 
        int unit; 
    } m_y;
    struct { 
        double amount; 
        int unit; 
    } m_w;
    struct { 
        double amount; 
        int unit; 
    } m_h;
    struct { 
        double amount; 
        int unit; 
    } m_paddingTop;
    struct { 
        double amount; 
        int unit; 
    } m_paddingLeft;
    struct { 
        double amount; 
        int unit; 
    } m_paddingBottom;
    struct { 
        double amount; 
        int unit; 
    } m_paddingRight;
    boolm_explicitlySpecified;
}

@property(retain) NSString * name;
@property(setter=setX:) struct { double x1; int x2; } x;
@property(setter=setY:) struct { double x1; int x2; } y;
@property(setter=setW:) struct { double x1; int x2; } w;
@property(setter=setH:) struct { double x1; int x2; } h;
@property(setter=setPaddingTop:) struct { double x1; int x2; } paddingTop;
@property(setter=setPaddingLeft:) struct { double x1; int x2; } paddingLeft;
@property(setter=setPaddingBottom:) struct { double x1; int x2; } paddingBottom;
@property(setter=setPaddingRight:) struct { double x1; int x2; } paddingRight;
@property bool explicitlySpecified;

+ (id)codeStringForValue:(struct { double x1; int x2; })arg1;
+ (id)geometryWithOriginValue:(struct { double x1; int x2; })arg1 sizeValue:(struct { double x1; int x2; })arg2;
+ (id)geometryWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)geometry;

- (void)setName:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)usesAutomaticMetrics;
- (bool)usesPercentages;
- (id)overrideGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrameWithContainingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithName:(id)arg1 rect:(struct { struct { double x_1_1_1; int x_1_1_2; } x1[4]; })arg2 padding:(struct { struct { double x_1_1_1; int x_1_1_2; } x1[4]; })arg3;
- (bool)explicitlySpecified;
- (struct { double x1; int x2; })paddingBottom;
- (void)setExplicitlySpecified:(bool)arg1;
- (void)setPaddingRight:(struct { double x1; int x2; })arg1;
- (void)setPaddingBottom:(struct { double x1; int x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithContainingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrameWithResolvedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setH:(struct { double x1; int x2; })arg1;
- (void)setW:(struct { double x1; int x2; })arg1;
- (struct { double x1; int x2; })h;
- (struct { double x1; int x2; })w;
- (id)shortDescription;
- (struct { double x1; int x2; })paddingRight;
- (struct { double x1; int x2; })paddingLeft;
- (void)setPaddingLeft:(struct { double x1; int x2; })arg1;
- (void)setPaddingTop:(struct { double x1; int x2; })arg1;
- (struct { double x1; int x2; })paddingTop;
- (void)setY:(struct { double x1; int x2; })arg1;
- (struct { double x1; int x2; })y;
- (void)setX:(struct { double x1; int x2; })arg1;
- (struct { double x1; int x2; })x;

@end
