/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <SKPhysicsContactDelegate>;

@interface SKPhysicsWorld : NSObject <NSCoding> {
    double speed;
    <SKPhysicsContactDelegate> *_contactDelegate;
    struct CGVector { 
        double dx; 
        double dy; 
    } _gravity;
}

@property struct CGVector { double x1; double x2; } gravity;
@property double speed;
@property <SKPhysicsContactDelegate> * contactDelegate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;

- (/* Warning: Unrecognized filer type: '3' using 'void*' */ void*)sampleFields:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: 32@0:816 */

- (bool)hasFields;
- (bool)hasBodies;
- (id)bodyAlongRayStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2;
- (id)bodyInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)bodyAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (/* Warning: Unrecognized filer type: '3' using 'void*' */ void*)sampleFieldsAt:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: 32@0:816 */

- (void)removeJoint:(id)arg1;
- (void)removeAllBodies;
- (void)removeAllJoints;
- (void)setContactDelegate:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)setGravity:(struct CGVector { double x1; double x2; })arg1;
- (void)addJoint:(id)arg1;
- (void)addBody:(id)arg1;
- (id)contactDelegate;
- (double)speed;
- (struct CGVector { double x1; double x2; })gravity;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2 usingBlock:(id)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { double x1; double x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)bodies;
- (bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;
- (void)removeBody:(id)arg1;
- (id)fields;

@end
